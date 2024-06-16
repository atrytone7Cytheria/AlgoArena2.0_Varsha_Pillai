#include <iostream>
#include <string.h>
#include <vector>
#include <set>
#include <algorithm>
#define ll long long int
using namespace std;

int main() {

	
	
	int q;
	cin >> q;
	for (int i = 0; i < q; ++i) {
		int n;
		string s;
		cin >> n >> s;
		if (n == 2 && s[0] >= s[1]) {
			cout << "NO" << endl;
		} else {
			cout << "YES" << endl << 2 << endl << s[0] << " " << s.substr(1) << endl;
		}
	}
	
	return 0;
}