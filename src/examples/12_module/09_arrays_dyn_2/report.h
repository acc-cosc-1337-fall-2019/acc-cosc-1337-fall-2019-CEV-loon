//
//default constructor create dyanamic array of 5 Bank accounts
//display function iterate with an indexed for and display balance
//destructor free memory
#include"bank_account.h"
class report
{
	public:
		report();
		void display()const;
		~report();

    private:
		int bankaccount* accounts;

		const int size(5);
};
