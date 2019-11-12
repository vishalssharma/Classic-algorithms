#include<iostream>
using namespace std;
#define lli long long int 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        char arr[n];
        //getchar();
       // gets(arr);
       cin>>arr;
        
        int present =0;
        
        for(int i=0;i<n;i++)
	    {
	        if(arr[i]=='P')
	        present++;
	    }
        if((float)present/n >= 0.75 )
        cout<<0<<endl;
        else{
             int add = 0;
        for(int i=2;i<n-2&&(float)(present+add)/n < 0.75;i++)
        {
            if((arr[i]=='A')&&(arr[i-1]== 'P' || arr[i-2] == 'P')&&(arr[i+1]== 'P' || arr[i+2] == 'P'))
            add++;
        }
         if((float)(present+add)/n < 0.75 )
        cout<<"-1"<<endl;
        else
        {
            cout<<add;
        }
        

        }
       
       
      
      
       
        }

           
       

        

    }

