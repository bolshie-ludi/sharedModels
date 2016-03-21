#include "playerMapper_impl.hpp"
#include "player.hpp"

#include <string>
 
namespace shared_objects {

    shared_objects::Player PlayerMapperImpl::get_player(const std::string &json) {
        return Player("1", "1", "1", "1", "1", "1", "1", "1", "1", "1");
    }

    PlayerMapperImpl::PlayerMapperImpl () {
 
    }

    std::shared_ptr<PlayerMapper> PlayerMapper::create() {
        return std::shared_ptr<PlayerMapperImpl>();
    }
}