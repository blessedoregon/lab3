#include <iostream>

using namespace std;

double f(int);

int findFirstElement(double eps) {
	int i = 0;
	f(i);
	do {
		f(i);
		if (abs(f(i)) <= eps)
		{
			break;
		}
		++i;
	} while (abs(f(i)) > eps);
	return i += 1;
}