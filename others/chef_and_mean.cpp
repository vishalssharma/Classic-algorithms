#include<iostream>
#include<vector>
using namespace std;
double find_mean(double sum , int size , int x)
{   
    return (double)((sum-x)/(size-1));
}
int main()
{
int t;
cin>>t;

while(t--)
{
    int n;
    cin>>n;
    vector<double> a;
    double sum = 0;
    for(int i=0;i<n;i++)
    {
        int tmp;
        
        cin>>tmp;
        sum +=tmp;
        a.push_back(tmp);
    }
   // cout<<sum;
   // cout<<n;
    double amean = sum/n;
   // cout<<amean;
    for(int i=0;i<n;i++)
    {
        double nmean = find_mean(sum,n,a[i]);
        //cout<<nmean;
        if (amean == nmean)
        {
            cout<<a[i]<<endl;
            break;
            
        }
        if(i==n-1)
        cout<<"Impossible"<<endl;
        
    }
    
}
}