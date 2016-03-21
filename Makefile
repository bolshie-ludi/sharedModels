# we specify a root target for android to prevent all of the targets from spidering out
./build_ios/libhelloworld.xcodeproj: libmobitee.gyp ./deps/djinni/support-lib/support_lib.gyp general.djinni
	sh ./run_djinni.sh
	deps/gyp/gyp --depth=. -f xcode -DOS=ios --generator-output ./build_ios -Ideps/djinni/common.gypi ./libmobitee.gyp

ios: ./build_ios/libmobitee.xcodeproj
	xcodebuild -workspace ios_project/MobiteeSharedObjects.xcworkspace \
           -scheme MobiteeSharedObjects \
           -configuration 'Debug' \
           -sdk iphonesimulator
 
# we specify a root target for android to prevent all of the targets from spidering out
GypAndroid.mk: libmobitee.gyp ./deps/djinni/support-lib/support_lib.gyp general.djinni
	sh ./run_djinni.sh
	ANDROID_BUILD_TOP=$(shell dirname `which ndk-build`) deps/gyp/gyp --depth=. -f android -DOS=android -Ideps/djinni/common.gypi ./libmobitee.gyp --root-target=libmobitee_jni
 
# this target implicitly depends on GypAndroid.mk since gradle will try to make it
android: GypAndroid.mk
	cd android_project/HelloWorld/ && ./gradlew app:assembleDebug
	@echo "Apks produced at:"
	@python deps/djinni/example/glob.py ./ '*.apk'