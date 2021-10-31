// Codeforces: https://codeforces.com/contest/498/problem/A

#include<bits/stdc++.h>

using namespace std;

#define int long long
#define dbl long double

int a[301],b[301],c[301];

void solve(){

    Point A,B;

    cin >> A.x.first >> A.y.first;
    cin >> B.x.first >> B.y.first;

    int n;
    cin >> n;

    int ans = 0;
    for(int i=0;i<n;i++){
        cin >> a[i] >> b[i] >> c[i];

        int v1 = a[i]*A.x.first + b[i]*A.y.first + c[i];
        int v2 = a[i]*B.x.first + b[i]*B.y.first + c[i];

        if(v1 < 0 and v2 > 0){
            ans++;
        }

        if(v2 < 0 and v1 > 0){
            ans++;
        }
    }
    cout << ans << "\n";
}

int32_t main() {
    int t = 1;
    while(t--){
        solve();
    }
}


