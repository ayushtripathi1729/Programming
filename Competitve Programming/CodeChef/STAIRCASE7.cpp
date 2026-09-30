#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        unordered_map<int,int> check;
        int high=0;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            check[a-i]++;
            high=max(high,check[a-i]);
        }
        cout<<n-high<<endl;
        
    }
    return 0;
}
