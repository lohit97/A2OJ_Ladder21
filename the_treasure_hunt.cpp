// Codeforces: https://codeforces.com/contest/498/problem/A

#include<bits/stdc++.h>

using namespace std;

#define int long long
 
int n,d;
int dp[30001][550];
bool used[30001][550] = {};

int gem[30011];
int x;

int f(int i, int j){
    int jj = j-(d-250);
    if (i >= 30001) return 0;
    if (used[i][jj]) return dp[i][jj];
    used[i][jj] = true;
    int res;
    if (j == 1){
        res = gem[i] + max(f(i+j, j), f(i+j+1, j+1));
    }else{
        res = gem[i] + max(max(f(i+j-1, j-1), f(i+j, j)), f(i+j+1, j+1));
    }
    dp[i][jj] = res;
    return res;
}

void solve(){
    cin >> n >> d;

    for (int i = 0; i < n; i++) {
        cin >> x;
        gem[x]++;
    }

    cout << f(d,d);
}

int32_t main() {
    int t = 1;
    while(t--){
        solve();
    }
}


