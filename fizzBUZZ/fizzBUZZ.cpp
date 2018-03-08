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
	}
	//THIS IS A TEST
	system("PAUSE");
	return 0;
}