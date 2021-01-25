#include <iostream>
#include <string>
using namespace std;

int main()
{
	int a[] { 1, 56, -3 };

	// for (auto i = 0; i < 3; ++i)
	for (int elem : a) // like for each
		// cout << a[i] << ", ";
		cout << elem << ", ";
		cout << endl;
}