#include "Player.hpp"

namespace coup{

    class Assassin: public Player{
        public:
            Assassin(Game& g, std::string name);
    };
}