#include "Ambassador.hpp"
using namespace std;

namespace coup{

    Ambassador::Ambassador(Game& g, string name):Player(g,name){

    }

    void Ambassador:: transfer(Player& p1, Player& p2){
        p1.coin--;
        p2.coin++;
    }

}