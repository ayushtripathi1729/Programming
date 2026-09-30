#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,m,k;
	    cin>>n>>m>>k;
	    vector<int> seats(n,0);
	    for(int i=0;i<m;i++){
	        int s;
	        cin>>s;
	        seats[s-1]=1;
	    }
	    bool flag=true;
	    int start=0;
	    while(flag){
	        if(seats[start]==0){
	            cout<<start+1<<" ";
	            k--;
	        }
	        start++;
	        if(k==0) flag=false;
	    }
	    cout<<endl;
	}
	return 0;

}
