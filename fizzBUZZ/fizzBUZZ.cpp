#include <iostream>

using namespace std;

int main()
{
	int fizz = 3, buzz = 5;
	for (int i = 1; i <= 100; i++)
	{
		if (i % fizz != 0 && i % buzz != 0)
			cout << i ;
		if (i % fizz == 0)
			cout << "Fizz";
		if (i % buzz == 0)
			cout << "Buzz";
			
		cout << "FIZZ" << endl;
		cout << endl;
		// I opened this on my surface and im now making changes.
	}
	//THIS IS A TEST

	//this is the 3rd test im going to try
	system("PAUSE");
	return 0;
}