//customer.h
#include<vector>
using std::cout;
using std::<vector>;
#include "bank_account.h"






class customer
{
	public
		void add_account(bank_account act);
	friend ostream& operator<<(ostream& out,
		const customer& c);



		private
		vector<customer> accounts;
		int total_balance{ 0 };


};