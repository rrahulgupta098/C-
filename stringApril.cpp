#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str=" my name is rahul gupta.";

    str[0]=str[0]-32;
    for(int i=0;i<str.length();i++){
        if(str[i]==' '){
            i++;
            str[i]=str[i]-32;
           // cout<<str[i];
        }
    }
    cout<<str;
    return 0;
}