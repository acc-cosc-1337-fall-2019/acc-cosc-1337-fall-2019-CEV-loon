//cpp
#include "tic_tac_toe_manager.h"


&ostream operator<<(ostream & out, const TicTacToeManager & m)
{
	for (auto game : m.games)
	{
		out << game << "\n";
	}
	out << "x wins:" << m.x_wins << "\n";
	out << "o wins:" << m.o_wins << "\n";
	out << "CAT:" << m.ties << "\n";
	return out;
};

void TicTacToeManager::save_game(const TicTacToe game) 
{
	games.push_back(game);
}

void TicTacToeManager::update_winner_count(string winner)
{ 
	if (winner == "x")
	{
		x_winn++;
	}
	else if (winner == "o")
	{
	o_win++;
		}
	else
	{
		ties++;
	}
}
