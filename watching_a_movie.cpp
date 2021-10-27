// Codeforces: https://codeforces.com/problemset/problem/499/A

#include<bits/stdc++.h>

using namespace std;

int n,x;

void solve(){

    cin >> n >> x;

    int cur = 1; // currently, at what minute I am.
    int l,r;
    int ans = 0; // no of minutes watched.

    while(n > 0){ //keep taking L,R for N best points.

        cin >> l >> r;

        while(cur + x <= l){  //keep skipping you reach L.
            cur = cur + x; //adding X means I am skipping.
        }
        // cout << cur << " " << l << " " << r << "\n";
        ans = ans + (r - cur + 1);
        cur = r + 1;

        n = n - 1;
    }

    cout << ans;
}

int32_t main() {
    int t = 1;
    while(t--){
        solve();
    }
}