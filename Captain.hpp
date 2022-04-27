#include "Player.hpp"

namespace coup{

    class Captain: public Player{
        public:
            Captain(Game g, std::string name);
            void steal(Player p);
            void block(Player p);
    };
}