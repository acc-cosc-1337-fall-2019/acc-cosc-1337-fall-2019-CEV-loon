#ifndef TIC_TAC_TOE_3
#define TIC_TAC_TOE_3
#include "tic_tac_toe.h"
#include<string>
#include<vector>
class tictactoe3 : public TicTacToe
{
public:
	TIC_TAC_TOE_3() :tictactoe(3) {}

private:
	 bool check_column_win()override;
	 bool check_row_win()override;
	 bool check_diagonal_win()override;
};
#endif // !TIC_TAC_TOE_3
