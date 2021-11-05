#include<bits/stdc++.h>

using namespace std;

int b[27],c[27];
string s,t;
int n;

set<int> a[27][27];
int f = -1,se = -1,minu,cnt;

int main()
{
    cin>> n;
    cin>> s >> t;
    for(int i = 0; i < 26; i++) b[i] = c[i] = -1;
    for(int i = 0; i < n; i++){
        if(s[i] != t[i]){
            cnt++;
            int x = (int)(s[i] - 'a');
            int y = (int)(t[i] - 'a');
            if(minu < 2){
                if(!a[y][x].empty()){
                    f = *(a[y][x].begin());
                    se = i;
                    minu = 2;
                }
                else if(b[x] != -1){
                    if(minu != 2){
                        f = b[x];
                        se = i;
                        minu = 1;
                    }
                }   
                else if(c[y] != -1){
                    f = c[y];
                    se = i;
                    minu = 1;
                }
                
            }
            a[x][y].insert(i);
            b[y] = i;
            c[x] = i;
        }
    }   
    if(minu == 0){
        cout<< cnt << endl;
        cout<< f << " " << se << endl;
    }
    else{
        cout<< cnt - minu <<endl;
        cout<< f+1 << " " << se+1 << endl;
    }
}