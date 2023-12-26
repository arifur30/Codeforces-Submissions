#include <iostream>
using namespace std;

int main()
{

	int t,n,x;
	cin >> t;

	for(int i=1; i<=t; i++) {
		int count = 0;
		cin >> n;
		while(n--) {

			cin >> x;
            if(x>0)
			count += x;
		}
		cout << "Case " << i << ": " << count << endl;//2210007
	}
	return 0;
}