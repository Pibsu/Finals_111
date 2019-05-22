#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
	double x, y, j, n;
	double z = 0;
	cout << "HARMONIC SERIES\n";
	cout << "Enter number of terms: "; cin >> n;
	cout << "=========================================\n";
	cout << "The harmonic series up to " << n << " terms is:\n";
	for (x = 1; x < n; x++)
	{
		cout << "1/" << x << " + ";
	}
	if (x = n)
			cout << "1/" << x << " \n";
	for (y = 1; y <= n; y++)
	{
		j = y;
		z=1/j +z;
	}
	cout << "Their sum is: " << z ;
	getch();
	return 0;
}