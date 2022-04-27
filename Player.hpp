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


        public:
            Game* g;
            std::string name;
            int coin;
            std::string p_role;
            Player(Game& g, std::string name);
            void income();
            void foreign_aid();
            void coup(Player p);
            void role();
            int coins();
    };
}
#endif /* MY_SYMBOL_H */ 
