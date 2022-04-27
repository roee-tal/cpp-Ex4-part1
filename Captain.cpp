#include "Captain.hpp"
using namespace std;

namespace coup{

    Captain::Captain(Game g, string name):Player(g,name){

    }

    void Captain:: steal(Player p){
        cout << "steal";
    }    
    
    void Captain:: block(Player p){
        cout << "block";
    }

}