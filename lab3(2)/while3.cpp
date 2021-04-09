#include <iostream>

using namespace std;

double f(int);

void print(int n, int k) {
	int i = 0;
	while (i < n) {
		if ((i+1) % k == 0) 
		{
			++i;
			continue;
		}
		cout << "n=" << i << " " << "f=" << f(i) << "\n";
		++i;
	}

}
