

#include <iostream>
using namespace std;

void Swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;

}


int main()
{
	int var1 = 15;
	int var2 = 20;

	cout << "var1\t" << var1 << endl;
	cout << "var2\t" << var2 << endl;

	cout << "Swap" << endl;
	Swap(&var1, &var2);

	cout << "var1\t" << var1 << endl;
	cout << "var2\t" << var2 << endl;



}
