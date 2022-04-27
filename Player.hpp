#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>
#ifndef MY_SYMBOL_H 
#define MY_SYMBOL_H 
#include "Game.hpp"


// #pragma once

namespace coup{

    class Player{
        Game g;
        std::string name;

        public:
            Player(Game g, std::string name);
            void income();
            void foreign_aid();
            void coup(Player p);
            void role();
            int coins();
    };
}
#endif /* MY_SYMBOL_H */ 
