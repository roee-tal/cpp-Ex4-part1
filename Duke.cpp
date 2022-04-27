#include "Duke.hpp"
using namespace std;

namespace coup{

    Duke::Duke(Game& g, string name):Player(g,name){

    }

    void Duke:: tax(){
        // cout << "tax";
        // cout << "\n";
        this->coin = this->coin+3;
    }    
    
    void Duke:: block(Player p){
        cout << "block";
        cout << "\n";
    }

}