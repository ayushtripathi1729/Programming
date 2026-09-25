#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        char c;
        int n,out=0;
        cin>>n>>c>>s;
        int start=0,end=n-1;
        while(start<end){
            if(s[start]!=s[end]){
                if(s[start]!=c)out++;
                if(s[end]!=c)out++;
            }
            start++;
            end--;
            }
        cout<<out<<endl;
        }
        return 0;
    }