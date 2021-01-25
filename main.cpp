#include <iostream>
#include <string>
using namespace std;


int main()
{
	double a[5] { 1, 56, -3 };
	int b[6];

	int* arr = new int[5];

	for (auto& elem : a)
	{
		cout << elem << ", ";
		elem += 1;
	}
	for (auto elem : a)
	{
		cout << elem << ", ";
	};
	cout << endl;
}