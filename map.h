#include <iostream>

using namespace std;

int player_initial_posY = 4;
int player_initial_posX = 2;
int goblin_initial_posY = 0;
int goblin_initial_posX = 2;



string map1[5][5] = { 

	{"0","0","0","0","0"},
	{"0","0","@","0","0"},
	{"0","0","0","0","0"},
	{"0","0","0","0","0"},
	{"0","0","1","0","0"}

};

void map_renderer(){
	for (int i = 0; i < 5; i++){
		for (int j = 0; j < 5; j++){
			cout << map1[i][j];
		}
		cout << endl;
	} 

}
