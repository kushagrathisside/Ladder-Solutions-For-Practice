#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin>>str;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='A' ||str[i]=='E' ||str[i]=='I' ||str[i]=='O' ||str[i]=='U' 
        ||str[i]=='a' ||str[i]=='e' ||str[i]=='i' ||str[i]=='o' ||str[i]=='u'|| str[i]=='y' ||str[i]=='Y');
        else
        {
            if((str[i])>='a' && (str[i])<='z')
            cout<<"."<<str[i];
            else cout<<"."<<char(str[i]+32);
        }
    }

    return 0;
}
