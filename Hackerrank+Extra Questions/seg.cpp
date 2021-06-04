#include <bits/stdc++.h>
using namespace std;

vector<int> val;
int init(int n)
{
    int size=1;
    while(size<n)
    size*=2;
    return size*2;
}
void sett(int i,int v,int x,int l,int r)
{
    if(r-l==1)
    {
        val[x]=v;
        return;
    }
    int m=(l+r)/2;
    if(i<m)
    sett(i,v,2*x+1,l,m);
    else
    sett(i,v,2*x+2,m,r);

    val[x]=max(val[2*x+1],val[2*x+2]); 
}
int calc(int lx,int rx,int x,int l,int r)
{
    if(lx>=r || rx<=l)
    return INT_MIN;
    else if(lx<=l && rx>=r)
    return val[x];
    int m=(l+r)/2;
    int m1 = calc(lx,rx,2*x+1,l,m);
    int m2 = calc(lx,rx,2*x+2,m,r);

    return max(m1,m2);

}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int n,q;
    cin >> n >> q;
    int size = init(n);
    val.resize(size);

    for(int i=0;i<n;i++)
    {
        int v;
        cin >> v;
        sett(i,v,0,0,n);
    }
    while(q--)
    {
        int op;
        cin >> op;
        if(op==2)
        {
            int l,r;
            cin >> l >> r;
            cout << calc(l,r,0,0,n) << "\n";
        }
        else
        {
            int i,v;
            cin >> i >> v;
            sett(i,v,0,0,n);
        }
    }

    return 0;
}