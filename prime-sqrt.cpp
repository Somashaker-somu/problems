#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,a,i;
    cout<<"enter a number:  ";
    cin>>num;
    for(i=2;i<=int(sqrt(num));++i)
    if(num%i==0)
    a=a+1;
    cout<<a<<endl;
    if(a==0)
    cout<<"prime number";
    else
    cout<<"not a prime number";
    return 0;
}
