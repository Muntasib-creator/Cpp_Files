#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("prime_numbers.txt", "w", stdout);
	int a, b, i, j, flag,c=0;
//	cout << "Enter lower bound of the interval: ";
	cin >> a;
//	cout << "\nEnter upper bound of the interval: ";
	cin >> b;
	for (i = a; i <= b; i++) {
		if (i == 1 || i == 0)
			continue;
		flag = 1;
		for (j = 2; j <= i / 2; ++j) {
			if (i % j == 0) {
				flag = 0;
				break;
			}
		}
		if (flag == 1){
//            cout << i << ",";
        c++;}
	}
	cout<<endl<<"count="<<c<<endl;
	return 0;
}
