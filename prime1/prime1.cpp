// Andy Shang
// http://www.spoj.com/problems/PRIME1/

using namespace std;
#include <iostream>
#include <sstream>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <algorithm>
#include <functional>
#include <utility>

#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
#define FORINC(i,a,b,inc) for(int i=(a);i<=(b);i+=inc)
#define FORDEC(i,a,b,decc) for(int i=(a);i>=(b);i-=dec)

typedef long long LL;
typedef pair<int,int> PII;
typedef vector<int> VI; 
typedef vector<string> VS;
typedef vector<VI> VVI;
typedef vector<PII> VII;
typedef map<int,int> MII;
typedef map<string,int> MSI;
typedef set<int> SETI;
typedef set<string> SETS;
typedef unsigned long long ULL;

void print(VI& v)
{
	for (int i: v)
	{
		cout << i << " ";
	}
	cout << endl;
}

bool is_prime(int i)
{
	for (int j = 2; j <= sqrt(i); ++j)
	{
		if (i % j == 0) return false;
	}
	return true;
}

int main()
{
	int tests;
	cin >> tests;
	REP(t,tests)
	{
		int m,n;
		cin >> m >> n;
		VI sieve(n-m+1,1);
		if (m % 2 == 0)
		{
			FORINC(i,0,n-m,2)
			{
				sieve[i] = 0;
			}
		}
		if (m == 2)
		{
			sieve[0] = 1;
		}	
		if (n == 2)
		{
			sieve[n-m] = 1;
		}
		if (m == 1)
		{
			sieve[0] = 0;
		}
		FOR(i,m,n)
		{
			if (sieve[i-m])
			{
				if (is_prime(i))
				{
					cout << i << endl;
				}
				int x = i*2;
				while (x-m <= n-m)
				{
					sieve[x-m] = 0;
					x += i;
				}
			}
		}
	}
}