#include "Player.hpp"
using namespace std;

namespace coup{

    Player::Player(Game& g, string name):g(&g),name(name){
        this->g->playing.push_back(name);
        // cout << this->g->playing.size();
        // cout << "\n";
        this->coin = 0;
    }

    void Player:: income(){
        this->coin++;
    }  

    void Player:: foreign_aid(){
        this->coin = this->coin+2;
    }   
    
    void Player:: coup(Player player){
        cout << "aid";
        cout << "\n";
    }
    int Player:: coins(){
        return this->coin;
    }
    void Player:: role(){
        cout << "role";
        cout << "\n";
    }
}