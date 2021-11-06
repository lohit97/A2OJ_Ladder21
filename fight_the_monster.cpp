#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() 
{
    long long int hp_y,atk_y,def_y,atk_m,hp_m,def_m,h,a,d;
    cin>>hp_y>>atk_y>>def_y;
    cin>>hp_m>>atk_m>>def_m;
    cin>>h>>a>>d;
    long long int res = -1;
    for(int i = hp_y;i<=10000;i++)
    {
        long long int temp_atk = atk_y,base = 0;
        if(atk_y <= def_m){
            base = (def_m - atk_y + 1)*a;
            temp_atk = def_m + 1;
        }
        for(int j = temp_atk;j<=200;j++)
        {
            long long int temp = (i-hp_y)*h + base + (j-temp_atk)*a;
            long long int low =def_y,high =10000,mid,t1,t2;
            while(low<high){
                mid = (low+high)>>1;
                if(mid >= atk_m){
                    high = mid;
                }else{
                    t1 = (i + atk_m - mid-1)/(atk_m-mid);
                    t2 = (hp_m + j - def_m -1)/(j-def_m);
                    if(t1 > t2){
                        high = mid;
                    }else{
                        low = mid+1;
                    }
                }
            }
            temp += (low-def_y)*d;
            res = (res == -1?temp:min(res,temp));
        }
    }
    cout<<res;
    return 0;
}