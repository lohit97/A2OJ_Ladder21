// Codeforces: https://codeforces.com/problemset/problem/527/A

#include<bits/stdc++.h>

using namespace std;

#define int long long 

int a,b;

void solve(){
    cin >> a >> b;

    int ans = 0;
    while (a > 0 and b > 0){
        int x = max(a, b);
        int y = min(a, b);

        ans = ans + (x/y);

        x = x - (x/y)*y;

        a = y;
        b = x;
    }

    cout << ans << "\n";
    return;
}

int32_t main() {
    int t = 1;
    while(t--){
        solve();
    }
}








