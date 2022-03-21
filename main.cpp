#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    string s,t;
    cin>>s;
    cin>>t;
    int compteurS=0;
    int i=0;
    while(t[i]!='\0'){
       if(t[i]==s[compteurS]){
            compteurS++;
       }else{
 
       }
       i++;
    }
    cout<<compteurS+1;
    return 0;
}
