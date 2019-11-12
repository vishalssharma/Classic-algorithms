#include<bits/stdc++.h>
#include<vector>
using namespace std;
#define long long ll
int main()
{
int t;
cin>>t;
while(t--)
{
	int n,k;
	cin>>n>>k;
	vector<int> a;
	int flag=0;
	for(int i=0;i<n;i++)
	{
		int tmp;
		cin>>tmp;
		a.push_back(tmp);
		if(a[i]>k)
		{	
		i--;
		n--;
		}
	}
	sort(a.begin(),a.end());
		
	for(int i=0;(i<n-1)&&flag==0;)
	{
		if(a[i]+a[n-1]==k)
		flag++;
		else if(a[i] + a[n-1] > k)
		n--;
		else if(a[i] + a[n-1] < k)
		i++;
		

	}
	if(flag)
		cout<<"Yes\n";
	else
		cout<<"No\n";
	


}
return 0;
}
