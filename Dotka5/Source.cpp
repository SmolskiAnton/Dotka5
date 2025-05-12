#include <iostream>
#include <ctime>
#include<cstdlib>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int a, b, n;
	cout << "РІРІРµРґРёС‚Рµ a:";
	cin >> a;
		cout << "РІРІРµРґРёС‚Рµ b:";
		cin >> b;
	cout << "РІРІРµРґРёС‚Рµ СЂР°Р·РјРµСЂ РјР°СЃСЃРёРІР° n:"<<endl;
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
	cout << "наибольший элемент равен" << arr[index_of_max] << "и находится на" << index_of_min + 1 << "позиции" << endl;
	cout << "наименьший элемент равен" << arr[index_of_min] << "и находится на" << index_of_min + 1 << "позиции" << endl;

	delete[]arr;

}
