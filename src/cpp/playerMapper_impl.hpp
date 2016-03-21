#pragma once

#import "playerMapper.hpp"

namespace shared_objects {
    
    class PlayerMapperImpl : public shared_objects::PlayerMapper {
        
    public:
        // Constructor
        PlayerMapperImpl();
        
        shared_objects::Player get_player(const std::string &json);
    };
    
}