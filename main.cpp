#include <iostream>
#include <string>
using namespace std;


int main()
{
	int a[5] { 1, 56, -3 };
	int b[6];

	int* arr = new int[6]; // int* exact type

	// for (auto i = 0; i < 3; ++i)
	for (int elem : a) // like for each
		// cout << a[i] << ", ";
		cout << elem << ", ";
		
		cout << endl;
}