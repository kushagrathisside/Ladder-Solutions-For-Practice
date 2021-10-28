#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main()
{
    int T;
    char a[100];
    cin>>T;
    while(T)
    {
        gets(a);
        if( strlen(a)>=10) cout<<a[0]<<strlen(a)<<a[strlen(a)-1];
        else cout<<a<<endl;
        T--;
    }
}