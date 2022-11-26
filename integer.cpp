#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    double x;
    cin >> t;
    while(t--) {
        cin >> x;
        int y = floor(x);
    	if (x==y) cout << "OK\n";
    	else cout << "NOT INTEGER\n";
    }
}

