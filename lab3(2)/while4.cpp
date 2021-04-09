#include <iostream>

using namespace std;

double f(int);

int findFirstElement(double eps) {
	int i = 0;
	f(i);
	while (abs(f(i)) > eps) {
		f(i);
		if (abs(f(i)) <= eps)
		{
			break;
		}
		++i;
	}
	return i += 1;
}