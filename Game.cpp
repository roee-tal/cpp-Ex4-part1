#include "Game.hpp"
using namespace std;

namespace coup{

    Game::Game(){
        int i = 1;
    }

    vector<string> Game:: players(){
        return this->playing;
    }

    string Game::turn(){
        return "turn";
    }

    string Game::winner(){
        return "winner";
    }

}