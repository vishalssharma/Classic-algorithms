#include<iostream>
using namespace std;
#define speed ios::sync_with_stdio(false), cin.tie(0);
#include<set>
#define lli long long int
int main()
{   speed;
    int t;
    cin>>t;
    while(t--)
    {
        set<lli> a;
        lli tmp1,tmp2,n,flag =0 ;
        cin>>n;
        while(n--) {
            cin>>tmp1 ;
            tmp2 = a.size() ;
            a.insert(tmp1) ;
            if(tmp2==a.size())
            flag=1 ;
        }
        if(flag)
        cout<<"Yes\n";
        else
        cout<<"No\n" ;    
    }
}