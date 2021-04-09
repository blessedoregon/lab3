#include <iostream>

using namespace std;

double f(int);

int findFirstNegativeElement(double eps) {
	int i = 0;
	f(i);
	do {
		f(i);
		if (abs(f(i)) <= eps && f(i) < 0)
		{
			return i + 1;
		}
		++i;
	} while (abs(f(i)) > 0);
}