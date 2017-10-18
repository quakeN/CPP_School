#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int n, k;
	cout << "Enter n:" << endl;
	cin >> n;
	cout << "Enter k: " << endl;
	cin >> k;
	
	int array[n];

	for (int i = 1; i <= n; i++)
	{
	 array[i] = i;
	}
	cout << "Before change: ";
 	for (int i = 1; i <= n; i++)
	{
	 cout << array[i] << " ";
	}
	cout << "After change: ";

	for (int i = 1; i <= k; i++)
	{
		int temp = 0;
    	temp = array[i];
    	array[i] = array[n];
    	array[n] = temp;
	}

	for (int i = 1; i <= n; i++)
	{
	 cout << array[i] << " ";
	}
    
   
	
	system("pause");
	return 0;
}
