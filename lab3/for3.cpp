#include <iostream>

using namespace std;

double f(int);

void print(int n, int k) {
	for (int i = 0; i < n; i++) {
		if ((i + 1) % k == 0)
		{
			continue;
		}
		cout << "n=" << i << " " << "f=" << f(i) << "\n";
	}

}
