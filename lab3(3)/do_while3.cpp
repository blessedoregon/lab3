#include <iostream>

using namespace std;

double f(int);

void print(int n, int k) {
	int i = 0;
	if (i >= n) {
		return;
	}
	else {
		do {
			if ((i+1) % k == 0)
			{
				i++;
				continue;
			}
			else {
				cout << "n=" << i << " " << "f=" << f(i) << "\n";
			}
			i++;
		} while (i < n);
	}
}