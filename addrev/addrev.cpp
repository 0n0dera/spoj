// Andy Shang
// http://www.spoj.com/problems/ADDREV/

#include <iostream>
#include <cmath>
using namespace std;

int reverse(int a) 
{
	int ret = 0;
	int b = log10(a);
	int i = pow(10,b);
	while (a != 0)
	{
		ret += i * (a%10); 
		a /= 10;
		i /= 10;
	}
	return ret;
}

int main() {
	int tests, a, b;
	cin >> tests;
	for (int i = 0; i < tests; ++i)	
	{
		cin >> a >> b;
		cout << reverse(reverse(a) + reverse(b)) << endl;
	}
	return 0;
}