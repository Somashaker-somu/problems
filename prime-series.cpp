#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    int count=0,i,j;

    cout<<"Enter positive number only :";
    cin>>N;
    cout<<"List of prime numbers below  is:";
    for(int i=2; i<N;++i)
    {
    
     for(int j=2; j<=i-1; ++j)
    
    {
        if(i%j==0)
        {
          count++;
          break;   
        }
            
    }
    if(count==0)
    {
        cout<<i<<" ";
    }

    else
    {
        count=0;
    }
    }
    return 0;
}     

       
     
   