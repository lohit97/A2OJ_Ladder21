// Codeforces: https://codeforces.com/problemset/problem/510/A

#include<bits/stdc++.h>

using namespace std;

int k,l,m,n,d;

void solve(){
    
    cin >> k >> l >> m >> n >> d;

    int arr[d+1];

    for(int i=1;i<=d;i++){
        arr[i] = 1;
    }

    for(int i=k; i<=d; i += k){
        arr[i] = 0;
    }

    for(int i=l; i<=d; i += l){
        arr[i] = 0;
    }

    for(int i=m; i<=d; i += m){
        arr[i] = 0;
    }

    for(int i=n; i<=d; i += n){
        arr[i] = 0;
    }

    int count = 0;

    for(int i=1;i<=d;i++){
        if(arr[i] == 0){
            count++;
        }
    }

    cout << count;
}

int32_t main() {
    int t = 1;
    while(t--){
        solve();
    }
}



















