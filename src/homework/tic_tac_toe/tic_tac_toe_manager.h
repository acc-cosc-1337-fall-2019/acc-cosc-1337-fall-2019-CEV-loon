//h
#ifndef TICTACTOEMANAGER_H
#define TICTACTOE_MANAGER_H
#include<vector>
#include<iostream>
#include "tic_tac_toe.h"
//#include "reference_wrapper"
using std::vector;
using std::ostream;
using std::reference_wrapper
class TicTacToeManager
{
public:
	void save_game(TicTacToe game);
	friend ostream& operator <<(ostream& out,TicTacToeManager& m );

private:
	vector<reference_wrapper<TicTacToe> games;
	int x_win{ 0 };
	int o_win{ 0 };
	int ties{ 0 };
	void update_winner_count(string winner);

};
#endif