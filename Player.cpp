#include "Player.hpp"
using namespace std;

namespace coup{

    Player::Player(Game g, string name):g(g),name(name){

    }

    void Player:: income(){
        cout << "income";
    }  

    void Player:: foreign_aid(){
        cout << "income";
    }   
    
    void Player:: coup(Player player){
        cout << "aid";
    }
    int Player:: coins(){
        return 0;
    }
    void Player:: role(){
        cout << "role";
    }
}