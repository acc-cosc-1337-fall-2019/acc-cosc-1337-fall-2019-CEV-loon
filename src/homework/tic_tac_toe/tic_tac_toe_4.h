//h
#ifndef TIC_TAC_TOE_4
#define TIC_TAC_TOE_4
#include "tic_tac_toe.h"
#include<string>
#include<vector>
class tictactoe4 : public TicTacToe
{
public:
	TIC_TAC_TOE_4() :tictactoe(4) {}

private:
	bool check_column_win()override;
	bool check_row_win()override;
	bool check_diagonal_win()override;
};
#endif // !TIC_TAC_TOE_4
