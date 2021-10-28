// Codeforces: https://codeforces.com/problemset/problem/476/B

#include<bits/stdc++.h>

using namespace std;

string s1, s2;

int fact(int n){
    if(n == 0 or n == 1){
        return 1;
    }
    return n*fact(n-1);
}

int func(int n, int r){
    return fact(n)/(fact(r) * fact(n-r));
}



void solve(){

    cin >> s1 >> s2;

    int a = 0, b = 0;

    for(int i=0;i<s1.length();i++){
        if(s1[i] == '+'){
            a++;
        }else{
            b++;
        }
    }

    int x = 0, y = 0, z = 0;

    for(int i=0;i<s2.length();i++){
        if(s2[i] == '+'){
            x++;
        }else if(s2[i] == '-'){
            y++;
        }else{
            z++;
        }
    }


    if(x > a or y > b){
        cout << "0.00";
        return;
    }

    if(z == 0){
        if(x == a and y == b){
            cout << "1.00";
        }else{
            cout << "0.00";
        }
        return;
    }

    long double k = func(z,(a-x)) * pow((long double)0.5, (a-x)) * pow((long double)0.5,(b-y));

    cout << fixed << setprecision(12) << k;
    return;
}

int32_t main() {
    int t = 1;
    while(t--){
        solve();
    }
}




// a +ves and b -ves in the original list.

// x +ves, y -ves and z ? in the final list.


// if x > a    or    y > b    =>  won't possible.

// z == 0 (no question) then x == a and y == b.

// x < a and y < b and z > 0  =>   some questions => (a - x) +ves and (b - y) -ves


// +-+--  a = 2, b = 3
// +-???  x = 1, y = 1, z = 3


// 1 +ve is reqd, and 2 -ve is reqd.

// (a-x) positions out z positions => +ve.
// rest positions need to be negative => -ve



// _ _ _

// 1 +ve and 2-v

// +--
// -+-
// --+

// (number of ways to choose (a-x) positions from z positions) = k

// (1/2) ^ k


// ans = k * ((1/2)^k) * ((1/2) ^ (z-k))

// If we have choose K items of N items =  nCk   = zC(a-x)








