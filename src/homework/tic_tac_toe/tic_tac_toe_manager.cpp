#include "tic_tac_toe_manager.h"

//cpp
ostream & operator<<(ostream & out, const TicTacToeManager & m)
{
	for (auto& game : m.games)
	{
		out << game << "\n";
	}

	out << "X wins: " << m.x_win;
	out << "O wins: " << m.o_win;
	out << "CAT: " << m.ties;

	return out;
}

const std::vector<std::unique_ptr<TicTacToe>>& TicTacToeManager::get_games()
{
	return games;
}

void TicTacToeManager::save_game(unique_ptr<TicTacToe>& game)
{
	update_winner_count(game->get_winner());
	games.push_back(std::move(game));
}

void TicTacToeManager::get_winner_totals(int & x, int & o, int & c)
{
	x = x_win;
	o = o_win;
	c = ties;
}

std::unique_ptr<TicTacToe> TicTacToeManager::get_games(int Game_type)
{
	if (game == 3)
	{
		return std::make_unique<TicTacToe3>();

	}
	else
	{
		return std::unique_ptr<TicTacToe4>();

	}
	
}

void TicTacToeManager::update_winner_count(string winner)
{
	if (winner == "X")
	{
		x_win++;
	}
	else if (winner == "O")
	{
		o_win++;
	}
	else
	{
		ties++;
	}
}
