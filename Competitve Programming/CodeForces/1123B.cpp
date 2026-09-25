#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n),out;
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a.begin(),a.end(),greater<int>());
        int count=n;
        while(count>0){
            int b=0;
            while(b<n){
                if(a[b]>0){
                    out.push_back(a[b]);
                    count--;
                    int c=b+1;
                    while(a[b]==a[c])c++;
                    a[b]=-a[b];
                    b=c;        
                }
                else b++;
            }
        }
        for(int i=0;i<out.size();i++) cout<<out[i]<<" ";
        cout<<endl;
    }
    return 0;
}