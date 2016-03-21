//
//  main.cpp
//  MobiteeSharedObjects
//
//  Created by Pavel Rudkouski on 3/21/16.
//  Copyright © 2016 Mobitee. All rights reserved.
//

#include <iostream>
#include "playerMapper_impl.hpp"
#include "player.hpp"
#include "json11.hpp"

using namespace shared_objects;

int main(int argc, const char * argv[]) {
    PlayerMapperImpl playerMapper = PlayerMapperImpl();
    
    Player newPlayer = playerMapper.get_player("1");
    
    std::cout << "Hi, " << newPlayer.firstName << "!\n";
    
    json11::Json my_json = json11::Json::object {
        { "key1", "value1" },
        { "key2", false },
        { "key3", json11::Json::array { 1, 2, 3 } },
    };
    
    std::string json_str = my_json.dump();
    
    std::string error;
    json11::Json parseJson = json11::Json::parse("{\"firstName\":\"John\", \"lastName\":\"Doe\"}", error);
    
    if (error.empty() == false) {
        std::cout << "error:\n" << error << "\n";
    } else {
        std::cout << "JSON:\n" << parseJson["firstName"].string_value() << "\n";
    }
    
    return 0;
}
