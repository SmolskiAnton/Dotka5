#include <iostream>
#include <ctime>
#include<cstdlib>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int a, b, n;
	cout << "enter a:";
	cin >> a;
		cout << "enter b:";
		cin >> b;
	cout << "enter array size n:"<<endl;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (a - b + 1) + a;
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " " ;
	}
	cout << endl;


	int index_of_max = 0, index_of_min = 0;
	for (int i = 1; i < n; i++)
	{
		if (arr[i] > arr[index_of_max])index_of_max = i;
	}
	for (int i = 1; i < n; i++)
	{
		if (arr[i] > arr[index_of_min])index_of_min = i;
	}
	cout << " the greatest element is equal to " << arr[index_of_max] << " and is located on " << index_of_min + 1 << "positions" << endl;
	cout << " the smallest element is " << arr[index_of_min] << " and is located on " << index_of_min + 1 << "positions" << endl;




	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[j] < arr[i]) swap(arr[i], arr[j]);
		}
	}

	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[j] > arr[i]) swap(arr[i], arr[j]);
		}
	}


	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	delete[]arr;

}
