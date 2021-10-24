// Codeforces: https://codeforces.com/problemset/problem/520/A

#include<bits/stdc++.h>

using namespace std;

#define int long long

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    set<int> st;
    for(int i=0;i<n;i++){
        st.insert(tolower(s[i]));
    }
    if(st.size() >= 26){
        cout << "YES";
    }else{
        cout << "NO";
    }
}

int32_t main() {
    int t = 1;
    while(t--){
        solve();
    }
}
