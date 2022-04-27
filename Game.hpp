#include "Player.hpp"
#include "vector"
#ifndef MY_SYMBOL_HH 
#define MY_SYMBOL_HH 
// #pragma once
namespace coup{

    class Game{

        
        public:
        std::vector<std::string> playing;
            Game();
            std::vector<std::string> players();
            std::string turn();
            std::string winner(); 
    };
}
#endif /* MY_SYMBOL_HH */ 
