#include<string>
#include<vector>
#ifndef TICTACTOE_H
#define TICTACTOE_H
using std::string; using std::vector;

#include<iostream>

using std::ostream; using std::istream;

//h
/*
Represents one game of tic tac toe.
*/
class TicTacToe 
{
public:
	TicTacToe() {};
	TicTacToe(int size) : pegs(size*size, " ") {};
	bool game_over();
	void start_game(string player);
	void mark_board(int position);
	string get_player() const;
	string get_winner()const;
	friend ostream& operator<<(ostream & out, const TicTacToe& t);
	friend istream& operator>>(istream& in, TicTacToe& t);

protected: vector<string> pegs;
		  virtual bool check_column_win();
		  virtual bool check_row_win();
		  virtual bool check_diagonal_win();
private:
	void set_next_player();
	
	void clear_board();
	bool check_board_full();
	
	string next_player;
	string set_winner();
	string winner();

};
#endif