#include "Game.hpp"
using namespace std;

namespace coup{

    Game::Game(){
        this->playing.push_back("roee");
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