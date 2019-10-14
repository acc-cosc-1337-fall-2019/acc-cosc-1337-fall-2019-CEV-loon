//h
//represents one game
#include<vector>
#include<string>
#include<iostream>


using std::string; using std::vector;

class tictactoe
{
public:
	bool game_over();
	void start_game(string player);
	void mark_board(int position);
	string get_player() const;
	void display_board() const;

private:
	void set_next_player();
	bool check_columb_win();
	bool check_row_win();
	bool check_diagonal_win();
	void clear_bord();// for ranged or 
	bool check_board_full();
	vector<string> pegs{9, " "};
	string next_player;
};