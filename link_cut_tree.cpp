// Codeforces: https://codeforces.com/problemset/problem/614/A

#include<bits/stdc++.h>

using namespace std;

#define int long long

int l,r,k;

void solve(){

    cin >> l >> r >> k;

    int pw = 1;
    int found = 0;

    int ans = 1;

    while(pw < l){
        if(LLONG_MAX / pw < k){
            found = -1;
            break;
        }
        pw = pw * k;
        ans ++;
    }

    if(found != -1)
    while(pw <= r){
        cout << pw << " ";
        found = 1;
        if(LLONG_MAX / pw < k){
            break;
        }
        pw = pw * k;
    }

    if(!found or found == -1) cout << "-1";
}

int32_t main() {
    int t = 1;
    while(t--){
        solve();
    }
}




