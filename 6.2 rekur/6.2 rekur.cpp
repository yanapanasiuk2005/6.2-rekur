#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void mas(int* a, int size, int i)
{
	a[i] = rand();
	cout << a[i] << " ";
	if (i < size - 1)
		mas(a, size, i + 1);
	else cout << endl;
}
int iMax(int* a, int size, int i, int max, int imax)
{
	if (a[i] > max && a[i] % 2 == 0)
	{
		max = a[i];
		imax = i;
	}
	if (i < size - 1)
		return iMax(a, size, i + 1, max, imax);
	else return imax;
}
int main()
{
	srand((unsigned)time(NULL));
	const int n = 15;
	int i = 0;
	int a[n];
	int max = a[0];
	int imax = i;
	mas(a, n, i);
	cout << "imax = " << iMax(a, n, i, max, imax) << endl;
	return 0;
}