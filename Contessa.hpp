#include "Player.hpp"

namespace coup{

    class Contessa: public Player{
        public:
            Contessa(Game g, std::string name);
            void block(Player p2);
    };
}