#include <iostream>
#include <ctime>
#include<cstdlib>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int a, b, n;
	cout << "������� a:";
	cin >> a;
		cout << "������� b:";
		cin >> b;
	cout << "������� ������ ������� n:"<<endl;
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
	delete[]arr;

}