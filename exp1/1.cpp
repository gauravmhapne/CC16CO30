#include<iostream>
using namespace std;

int main()
{
    int i,l;
    char str[10];
    cout<<"Enter length of string";
    cin>>l;
    cout<<"Enter the string";
    for(i=0;i<l;i++)
        cin>>str[i];

    for(i=0;i<l;i++)
    {
        if(str[i]>=48&&str[i]<=57)
            cout<<str[i]<<" is an identifier \n";
        else if(str[i]>=42&&str[i]<=47)
            cout<<str[i]<<" is an operator \n";
        else if(str[i]==59)
            cout<<str[i]<<" is an delimiter \n";
        else if(str[i]==61)
            cout<<str[i]<<" is an operator \n";
        else //if(str[i]>=65&&str[i]<=90)
            cout<<str[i]<<" is a identifier \n";


    }
    return 0;
}
