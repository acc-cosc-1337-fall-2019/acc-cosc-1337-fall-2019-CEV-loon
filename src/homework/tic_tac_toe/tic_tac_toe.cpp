//cpp
#include<iostream>
#include<vector>
#include<string>
using std::cout;
#include"tic_tac_toe.h"
bool tictactoe::game_over()
{
	if (check_columb_win() || check_row_win() || check_diagonal_win() || check_board_full())
	{
		return true;
	}
	return false;
}
void tictactoe::start_game(string player)
{
	next_player = player;
	clear_board();
}
void tictactoe::mark_board(int position)
{
	pegs[position - 1] = next_player;
	set_next_player();
}
string tictactoe::get_player() const
{
	return next_player;
}
void tictactoe::display_board() const
{
	//iterate vector and display to screen

	std::cout << "vector<string>", pegs{ 0 } << "|" << vector<string>, pegs{ 1 } << "|" << vector<string>, pegs{ 2 } << "/n"
		<< "_____" << "/n"
		"vector<string>", pegs{ 3 } << "|" << vector<string>, pegs{ 4 } << "|" << vector<string>, pegs{ 5 } << "/n"
		<< "_____" << "/n"
		"vector<string>", pegs{ 6 } << "|" << vector<string>, pegs{ 7 } << "|" << vector<string>, pegs{ 8 } << "/n"
		<< ;

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
	for (std::size_t i = 0; i < 3; i++)
	{
		if (pegs[i]) == pegs[i + 0] && pegs[i + 1] == pegs[i + 2]
			&& pegs[1 + 2] != " ")
			; {
			return true;
		}
	}
	return false;
}

bool tictactoe::check_diagonal_win()
{
	for (std::size_t i = 0; i < 3; i++)
	{
		if (pegs[i]) == pegs[i + 0] && pegs[i + 4] == pegs[i + 9]
			&& pegs[1 + 9] != " ")
			; {
			return true;
		}
	}
	return false;
}
for (std::size_t i = 0; i < 3; i++)
{
	if (pegs[i]) == pegs[i + 2] && pegs[i + 4] == pegs[i + 6]
		&& pegs[1 + 6] != " ")
		; {
		return true;
	}
}
return false;

bool tictactoe::check_columb_win()
{
	for (std::size_t i = 0; i < 3; i++)
	{
		if (pegs[i]) == pegs[i + 3] && pegs[i + 3] == pegs[i + 6]
			&& pegs[1 + 6] != " ")
			; {
		return true;
}
	}
	return false;
}
void tictactoe::clear_board()
{
	pegs.clear(" ");
}

bool tictactoe::check_board_full()
{
	for (vector<string> pegs{}, i = 0,i<9, i++)
	{
		if (vector<string> pegs{i}== " ");
		return false;

	}
	return true;
}
