#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,flag=0,num;
    cout<<"enter a number: ";
    cin>>num;
    for(i=2;i<=num/2;++i)
    {
        if(num%i==0)
        flag=1;
        break;
    }
    if(flag==0)
    {
        cout<<num<<"is a prime number"<<endl;
    }
    else
    {
       cout<<num<<"is not a prime number"<<endl;  
    }
    return 0;
}