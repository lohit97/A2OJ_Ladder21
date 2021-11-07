#include<bits/stdc++.h>
using namespace std;
 
#define sd(mark) scanf("%d",&mark)
#define ss(mark) scanf("%s",&mark)
#define sl(mark) scanf("%lld",&mark)
#define debug(mark) printf("check%d\n",mark)
#define clr(mark) memset(mark,0,sizeof(mark))
#define F first
#define S second
#define MP make_pair
#define PB push_back
#define ll long long
ll pre[100010],a[100010];
pair<ll,int> b[100010];
ll out[100010];
int n;
ll s(int i,int j)
{
    ll ret=pre[j];
    if(i)
        ret-=pre[i-1];
    return ret;
}
inline bool func(ll mid,ll max_index,ll m)
{
    ll pos=upper_bound(a,a+n,mid)-a;
    --pos;
    if(pos<0)
        return 1;
    pos=min(pos,max_index);
    ll val=(pos+1)*mid-pre[pos];
    if(val>m)
        return 0;
    return 1;
}
int main()
{
    ll i,A,cf,cm,m;
    ll maxi,maxmid;
    sd(n);
    sl(A);sl(cf);sl(cm);sl(m);
    ll ans=-1;
    for(i=0;i<n;++i)
    {
        sl(a[i]);
        b[i]=MP(a[i],i);
    }
    sort(a,a+n);
    sort(b,b+n);
    pre[0]=a[0];
    for(i=1;i<n;++i)
        pre[i]=pre[i-1]+a[i];
    for(i=0;i<n;++i)
    {
        ll val=i*A-(pre[n-1]-pre[n-1-i]);
        if(val>m)
            continue;

        ll lo=a[0],hi=A,mid;
        while(lo<hi)
        {
            mid=(lo+hi)/2;
            if(!func(mid,n-1-i,m-val))
                hi=mid;
            else
                lo=mid+1;
        }
        mid=(lo+hi)/2;
        if(!func(mid,n-1-i,m-val))
            --mid;
        if(cf*i+cm*mid>ans)
        {
            maxmid=mid;maxi=i;
        }
        ans=max(ans,cf*i+cm*mid);
    }
    ll val=n*A-pre[n-1];
    if(val<=m)
    {
        if(cf*n+cm*A>ans)
        {
            maxi=n;
            maxmid=A;
        }
        ans=max(ans,cf*n+cm*A);
    }
    for(i=n-1;i>n-1-maxi;--i)
        a[i]=A;
    for(i=0;i<n;++i)
        a[i]=max(a[i],maxmid);

    printf("%lld\n",ans);
    for(i=0;i<n;++i)
        out[b[i].S]=a[i];
    for(i=0;i<n;++i)
        printf("%lld ",out[i]);
    
}