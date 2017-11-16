#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	double num;
	cout << "Enter number n: ";
	cin >> num;
	if (num >= 0)
	{
		cout << "Positive number." << endl;
	}
	else
	{
		cout << "Negative number." << endl;
	}
	
	system("pause");
	
	return 0;
}
