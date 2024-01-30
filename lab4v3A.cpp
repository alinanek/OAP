#include <iostream>
using namespace std;

int main()
{
	int arr[10];
	cout << "Введите элементы массива: "<<endl;	
	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i]; 
	}
	
	int sum1 = 0;
	int sum2 = 0;
	int total;

	for (int i = 0; i < 10; i++)
	{
		if (arr[i] > 0)
		{
			sum1 = sum1 + arr[i];
		} else
		{
			sum2 = sum2 + abs(arr[i]);
		}
	}
	total = sum1 - sum2;
	cout << "Разность = " << total << endl;
}