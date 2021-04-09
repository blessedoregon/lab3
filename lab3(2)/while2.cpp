#include <iostream>

using namespace std;

double f(int);

double summ2(double eps) {
	double sum = 0;
	int i = 0;
	double a = 0;
	a=f(i);
	while (abs(a) > eps) {
		a = f(i);
		sum += a; 
		++i;
	}
	return sum;
}