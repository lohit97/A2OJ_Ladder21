// Codeforces: https://codeforces.com/problemset/problem/510/A

#include<bits/stdc++.h>

using namespace std;

int n,m;

void solve(){
    cin >> n >> m;

    for(int i=1;i<=n;i++){
        if(i%2 == 1){
            for(int i=0;i<m;i++){
                cout << "#";
            }
        }else{
            if(i%4 == 0){
                cout << "#";
                for(int i=1;i<m;i++){
                    cout << ".";
                }
            }
            if(i%4 == 2){
                for(int i=0;i<m-1;i++){
                    cout << ".";
                }
                cout << "#";
            }
        }
        cout << "\n";
    }
    
}

int32_t main() {
    int t = 1;
    while(t--){
        solve();
    }
}
