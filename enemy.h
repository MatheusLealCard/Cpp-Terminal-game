#include <iostream>
using namespace std;

string goblin = "\33[31m@\033[0m";

void enemies_movimentation(){
		//map1[goblin_initial_posY][goblin_initial_posX] = "0";
		//goblin_initial_posY = goblin_initial_posY + 1;
		map1[goblin_initial_posY][goblin_initial_posX] = goblin;
		//if (goblin_initial_posY >= 5){
		//	map1[goblin_initial_posY][goblin_initial_posY] = "0";
		//	goblin_initial_posY = goblin_initial_posY - 6;
		//}
}
