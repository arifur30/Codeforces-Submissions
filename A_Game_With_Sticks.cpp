#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define nl "\n"

int main() 
{
	int n, m;
	cin >> n >> m;
	if (n > m) {
		swap(n, m);
	}
	if (n % 2 == 0) {
		cout << "Malvika" << endl;
	} else {
		cout << "Akshat" << endl;
	}
	return 0;
}