#include "Duke.hpp"
using namespace std;

namespace coup{

    Duke::Duke(Game g, string name):Player(g,name){

    }

    void Duke:: tax(){
        cout << "tax";
    }    
    
    void Duke:: block(Player p){
        cout << "block";
    }

}