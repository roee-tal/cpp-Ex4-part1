#include "doctest.h"
#include <string>
#include <stdexcept>
#include <iostream>
#include "Player.hpp"
#include "Duke.hpp"
#include "Assassin.hpp"
#include "Ambassador.hpp"
#include "Captain.hpp"
#include "Contessa.hpp"
#include "Game.hpp"
using namespace std;
using namespace coup;

TEST_CASE("good input"){

    Game game_1{};

	/* This player drew the "Duke" card, his name is Moshe
	and he is a player in game_1 */
    vector<string> players3 = game_1.players();
    CHECK(players3.size() == 0);
	Duke duke{game_1, "Moshe"};
	Assassin assassin{game_1, "Yossi"};
	Ambassador ambassador{game_1, "Meirav"};
    vector<string> players = game_1.players();
    CHECK(players.size() == 3);
	Captain captain{game_1, "Reut"};
	Contessa contessa{game_1, "Gilad"};
    vector<string> players2 = game_1.players();
    CHECK(players2.size() == 5);
    duke.income();
	assassin.income();
	ambassador.income();
	captain.income();
	contessa.income();
    CHECK(duke.coins() == 1);
    CHECK(assassin.coins() == 1);
    CHECK(ambassador.coins() == 1);
    CHECK(captain.coins() == 1);
    CHECK(contessa.coins() == 1);
    duke.foreign_aid();
    assassin.foreign_aid();
    ambassador.foreign_aid();
    captain.foreign_aid();
    contessa.foreign_aid();
    CHECK(duke.coins() == 3);
    CHECK(assassin.coins() == 3);
    CHECK(captain.coins() == 3);
    CHECK(ambassador.coins() == 3);
    CHECK(contessa.coins() == 3);
    duke.tax();
    CHECK(duke.coins() == 6);
    ambassador.transfer(duke, captain);
    CHECK(duke.coins() == 5);
    CHECK(captain.coins() == 4);
    captain.foreign_aid();
    contessa.foreign_aid();
    CHECK(captain.coins() == 6);
    CHECK(contessa.coins() == 5);
    captain.steal(contessa);
    CHECK(captain.coins() == 8);
    CHECK(contessa.coins() == 3);




}


