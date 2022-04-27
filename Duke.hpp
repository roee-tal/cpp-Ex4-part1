#include "Player.hpp"

namespace coup{

    class Duke: public Player{
        public:
            Duke(Game g, std::string name);
            void block(Player p);
            void tax();
    };
}
