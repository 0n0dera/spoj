// Andy Shang
// http://www.spoj.com/problems/FCTRL/

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

int main()
{
	int tests;
	cin >> tests;
	REP(tt,tests)
	{
		LL n;
		cin >> n;
		LL t = 0;
		while (n >= 5)
		{
			n/=5;
			t += n;
		}
		cout << t << endl;
	}
}