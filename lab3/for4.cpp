#include <iostream>

using namespace std;

double f(int);

int findFirstElement(double eps) {
	int i = 0;
	for (i;; i++) {
		if (abs(f(i)) <= eps) 
		{
			break;
		}
	}
	return i += 1;
}