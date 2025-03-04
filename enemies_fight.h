#include <stdio.h>
#include <cstdlib>
#include <time.h>
#include "terminal_colors.h"
using namespace std;

int player_talk = 1;
int player_life = 10;
int player_strenght = 1;
int goblin_life = 5;

void enemy_goblin(){
	srand(time(NULL));
	int player_velocity = 2;
	int run_dice = rand() %5 + 1;
	int player_dice_velocity = run_dice + player_velocity;
	int talk_dice = rand() %5 + 1;
	int goblin_dice = rand() %5 + 1;
	int equilibrium_dice = rand() %10 + 1;
	int player_goblin_talk = player_talk + talk_dice;
	string response;
	int player_fight_strenght = player_strenght + equilibrium_dice;
	cout << "\n\n\nVoce encontrou um goblin, o que quer fazer?\n" << red << "1- Lutar \n"<< green <<"2- Conversar \n" << blue << "3- Fugir\033[0m\n\n"; 
	cin >> response;
	while (true){
		if (response == "1"){
			if (player_fight_strenght >= 5){
				goblin_life = goblin_life - player_strenght;
				cout << "\nVoce atacou o goblin e tirou " << red <<player_strenght << white <<" de vida. O goblin tem: " << green <<goblin_life << white << " de vida.";
				cout << "\n\n\nVoce encontrou um goblin, o que quer fazer?\n" << red << "1- Lutar \n" << blue << "3- Fugir\033[0m\n\n"; 
				cin >> response;
				if (goblin_life <= 0){
					cout << "\n\n\n\033[32mParabens, voce matou o goblin, e sua forca aumentou\033[0m\n\n\n";
					exit(0);
				}
			}
			else if (player_fight_strenght <= 5){
				cout << "\nVoce se desequilibrou e errou, agora 'e a vez do goblin atacar";
				player_life = player_life - goblin_dice;
				cout << "\nO goblin te atacou e tirou "<< red << goblin_dice << white <<" de vida. Voce tem: "<< green << player_life << white <<" de vida"; 
				cout << "\n\n\nVoce encontrou um goblin, o que quer fazer?\n" << red << "1- Lutar \n"<< blue << "3- Fugir\033[0m\n\n"; 
				cin >> response;
				if (player_life <= 0){
					cout << "\n\n\n\033[31mVoce morreu\033[0m\n\n\n";
					exit(1);
				}	
			}

		}
		else if (response == "2"){
			if (player_goblin_talk >= 5){
				cout << "Voce pergunta: e ai goblin amigo, e ele responde:" << green << " GRSRFSA" << white <<", voce nao entende, mas ele parece feliz\no goblin abaixa a guarda e vai embora";
				player_goblin_talk++;
				exit(0);
			}
			else if (player_goblin_talk < 5){
				player_life = player_life - goblin_dice;
				cout << "Voce pergunta: e ai goblin amigo, e ele responde " << red << "GRHSGR " << white << "\nVoce o enfureceu e te deu "<< red << goblin_dice << white <<" de dano, voce tem "<< green << player_life << white << " de vida";
				cout << "\n\n\nVoce encontrou um goblin, o que quer fazer?\n" << red << "1- Lutar \n" << blue << "3- Fugir\033[0m\n\n"; 
				cin >> response;
			}
		}
		else if (response == "3"){
			if (player_dice_velocity >= 5){
				cout << "\nVoce conseguiu fugir\n";
				exit(0);
			}
			else if (player_dice_velocity < 5){
				cout << "\nVoce tentou fugir, mas infelizmente o goblin 'e mais rapido\n";
				cout << "\n\n\nVoce encontrou um goblin, o que quer fazer?\n" << red << "1- Lutar \n"<< green <<"2- Conversar \n\n\n";
				cin >> response;
			}
		}
	}


}
