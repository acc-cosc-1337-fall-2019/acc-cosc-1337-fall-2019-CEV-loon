//cpp
#include"tic_tac_toe.h"
bool tictactoe::game_over()
{
	return false;
}
void tictactoe::start_game(string player)
{
	next_player = player;
	clear_bord();
}
void tictactoe::mark_board(int position)
{

}
string tictactoe::get_player() const
{
	return next_player;
}
void tictactoe::display_board() const
{
	//iterate vector and display to screen
}
//define function
void tictactoe::set_next_player()
{
	if (next_player == "x")
	{
		next_player = "o";
	}
	else
	{
		next_player = "x";
	}

}

bool tictactoe::check_row_win()
{
}

bool tictactoe::check_diagonal_win()
{
}

bool tictactoe::check_columb_win()
{
	for (std::size_t i = 0; i < 3; i++)
	{
		if (pegs[i]) == pegs[i + 3] && pegs[i + 3] == pegs[i + 6])
		{
		return true;
}
	}
	return false;
}
void tictactoe::clear_bord()
{
}

bool tictactoe::check_board_full()
{
	return false;
}
