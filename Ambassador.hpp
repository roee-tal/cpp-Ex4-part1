#include "Player.hpp"

namespace coup{

    class Ambassador: public Player{
        public:
            Ambassador(Game& g, std::string name);
            void transfer(Player& p1, Player& p2);
    };
}