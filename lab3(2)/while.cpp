#include <iostream>

using namespace std;

double f(int);

double sum(int n) {
	double sum = 0;
	int i = 0;
	while (i < n) {
		sum += f(i);
		++i;
	}
	return sum;
}