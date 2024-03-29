#include<string>
#include<vector>
#include<iostream>

#ifndef TIC_TAC_TOE_H//header guard
#define TIC_TAC_TOE_H

using std::cout;
using std::string;
using std::vector;
//h
//represents one game of tictactoe
class TicTacToe
{
public:
	TicTacToe() {};
	TicTacToe(int size) :pegs(size*size, " ") {};
	bool game_over();
	void start_game(string player);
	void mark_board(int position);
	string get_player() const;
	string get_winner() const;
	const std::vector<std::string>& get_pegs();
	friend std::istream & operator >>(std::istream & in, TicTacToe & t);
	friend std::ostream & operator <<(std::ostream & out, const TicTacToe & t);


private:
	string next_player;
	string winner;
	void set_next_player();
	void clear_board();
	bool check_board_full();
	void set_winner();

protected:
	vector<string> pegs;//initializer
	virtual bool check_column_win()=0;
	virtual bool check_row_win()=0;
	virtual bool check_diagonal_win()=0;
};
#endif// TIC_TAC_TOE_H