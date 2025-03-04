#include <iostream>
#include "map.h"
#include "enemies_fight.h"
using namespace std;

int front_vision_Y = player_initial_posY - 2; 

void player_movimentation(){
	string keyboard;
	cin >> keyboard;
	if(keyboard == "w"){
		map1[player_initial_posY][player_initial_posX] = "0";
		player_initial_posY = player_initial_posY - 1;
		map1[player_initial_posY][player_initial_posX] = "1";
		map_renderer();
		cout << map1[front_vision_Y][player_initial_posX];
		if (map1[front_vision_Y][player_initial_posX] == "@"){
			enemy_goblin();	
		}
	}
	else if (keyboard == "s"){
		map1[player_initial_posY][player_initial_posX] = "0";
		player_initial_posY = player_initial_posY + 1;
		map1[player_initial_posY][player_initial_posX] = "1";
		map_renderer();
	}
	else if (keyboard == "a"){
		map1[player_initial_posY][player_initial_posX] = "0";
		player_initial_posX = player_initial_posX - 1;
		map1[player_initial_posY][player_initial_posX] = "1";
		map_renderer();
	}
	else if (keyboard == "d"){
		map1[player_initial_posY][player_initial_posX] = "0";
		player_initial_posX = player_initial_posX + 1;
		map1[player_initial_posY][player_initial_posX] = "1";
		map_renderer();
	}
}
