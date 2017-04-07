#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	long long int num1, num2;

	while( cin >> num1 >> num2 )
	{
         cout << abs(num2-num1) << endl;
	}

}