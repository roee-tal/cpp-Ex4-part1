#include "Captain.hpp"
using namespace std;

namespace coup{

    Captain::Captain(Game& g, string name):Player(g,name){

    }
    void Captain:: steal(Player& p){
        this->coin = this->coin +2;
        p.coin = p.coin - 2;
    }    
    
    void Captain:: block(Player& p){
        cout << "block";
        cout << "\n";
    }

}