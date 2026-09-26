#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n,k,out=0;
        cin>>n>>k;
        out=2*(k-1)+ pow(2,n-k+1);
        cout<<out<<endl;
    }
    return 0;
}