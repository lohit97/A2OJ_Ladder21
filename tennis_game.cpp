// Codeforces: https://codeforces.com/problemset/problem/505/C

#include<bits/stdc++.h>

using namespace std;

#define int long long
#define pb push_back
#define ff first
#define ss second
#define mp make_pair

const int MX = 1000*1000 + 11;

int a[MX];
int sum[2][MX];
int n;
 
inline int getresult(int lb, int rb) {
    return max(sum[0][rb] - sum[0][lb - 1], sum[1][rb] - sum[1][lb - 1]);
}
 
int check(int t) {
    int cur = 1;
    int cnta = 0;
    int cntb = 0;
    int last = 0;
 
    while (cur <= n) {
        int lb = cur;
        int rb = n;
        while (lb < rb) {
            int mid = (lb + rb) / 2;
            if (getresult(cur, mid) < t)
                lb = mid + 1;
            else
                rb = mid;
        }
 
        if (getresult(cur, lb) < t)
            return -1;
        else {
            if ((sum[0][lb] - sum[0][cur - 1]) == t) {
                cnta++;
                last = cnta;
            } else {
                cntb++;
                last = cntb;
            }
            cur = lb + 1;
        }
    }
 
    if (cnta == cntb || max(cnta, cntb) != last)
        return -1;
    else
        return last;
}

void solve(){
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    sum[0][0] = 0;
    sum[1][0] = 0;
    for (int i = 1; i <= n; i++) {
        sum[0][i] = sum[0][i - 1];
        sum[1][i] = sum[1][i - 1];
        if (a[i - 1] == 1)
            sum[0][i]++;
        else
            sum[1][i]++;
    }
 
    vector <pair <int, int> > ans;
 
    for (int i = 1; i <= n; i++) {
        int p = check(i);
        if (p != -1)
            ans.pb(mp(p, i));
    }
 
    sort(ans.begin(), ans.end());
    cout << ans.size() << "\n";

    for (int i = 0; i < ans.size(); i++)
        cout << ans[i].ff << " " << ans[i].ss << "\n";
}


int32_t main() {
    int t = 1;
    while(t--){
        solve();
    }
}


