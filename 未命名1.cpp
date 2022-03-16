#include <iostream>
using namespace std;

int n;

long long f (int k) {
	if (k == 0)
		return 0;
	
	if (k == 1)
		return 1;
	
	return f(k - 1) + f(k - 2);
}

int main () {
	ios :: sync_with_stdio(0);
	
	cin >> n;
	
	cout << f(n);
	
	return 0;
} 
