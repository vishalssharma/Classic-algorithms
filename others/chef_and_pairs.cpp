#include<iostream>
using namespace std;
#include<vector>
#define lli long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        lli n;
        cin>>n;
        vector<lli> a;
        for(lli i =0;i<n;i++)
        {
            lli tmp;
            cin>>tmp;
            a.push_back(tmp);
        }
        lli count=0,k=0;
        for(lli i = 0;i<n;i++)
        {
            if(a[i]%2==0)
	       {
	           k++;
	       }
	       else
	       {
	           count+=k;
	       }
        }
        cout<<count<<endl;
    }
}