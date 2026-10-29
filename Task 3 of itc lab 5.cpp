// Abdullah Ahmad
// L1F26BSCS0100
#include <iostream>
using namespace std;
int main()
{
	int billAmount;
	cout << "Enter bill amount:";
	cin >> billAmount;
	if (billAmount >= 5000)
	{
		cout << "You qualify for the discount";

	}
	return 0;

}
// >= is more suitable because the customer qualifies for the discount when the bill is exactly
// Rs 5000 or greater.