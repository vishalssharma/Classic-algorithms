#include <iostream>
using namespace std;
#include<vector>

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    vector<int> v;
	   
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    v.push_back(arr[n-1]);
	    int cur_max=v[0];
	    for(int i=n-2;i>=0;i--)
	    {
	     if(arr[i]>=cur_max)
	     {
	         cur_max=arr[i];
	         v.push_back(cur_max);
	     }
	    }
	     for(int i=v.size()-1;i>=0;i--)
	     cout<<v[i]<<" ";
	     cout<<endl;
	    
	}
	return 0;
}
