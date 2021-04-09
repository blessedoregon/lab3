#include <iostream>

using namespace std;

double f(int);

int findFirstNegativeElement(double eps) {
	int i = 0;
	for (i;; i++) {
		if (abs(f(i)) <= eps && f(i) < 0)
		{
			return i+1;
		}
	}
}