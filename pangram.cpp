// Codeforces: https://codeforces.com/problemset/problem/520/A

#include<bits/stdc++.h>

using namespace std;

int n;
string s;

void solve(){
    cin >> n;
    cin >> s;
    set<int> st;
    for(int i=0;i<n;i++) st.insert(tolower(s[i]));
    (st.size() >= 26) ? (cout << "YES"):(cout << "NO");
}

int32_t main() {
    int t = 1;
    while(t--){
        solve();
    }
}
