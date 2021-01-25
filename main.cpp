#include <iostream>
#include <string>
using namespace std;

int main()
{
	int a[5] { 1, 56, -3 };

	for (auto i = 0; i < 3; ++i)
		cout << a[i] << ", ";
		cout << endl;
}