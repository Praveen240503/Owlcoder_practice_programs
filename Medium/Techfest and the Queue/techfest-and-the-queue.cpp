//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    int prime_fact(int n){
        map<int,int>mp;
        int c=0;
        for(int i=2;i*i<=n;i++){
            while(n%i==0)
            {
                mp[i]++;
                n/=i;
            }
        }
        if(n>1)mp[n]++;
        for(auto it:mp){
            c+=it.second;
        }
        return c;
    }
	int sumOfPowers(int a, int b){
	    // Code here
	    map<int,int>mp;
	    int c=0;
	    for(int i=a;i<=b;i++){
	        c+=prime_fact(i);
	    }
	    return c;
	    
	    
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int a, b;
		cin >>  a >> b;
		Solution obj;
		int ans = obj.sumOfPowers(a, b);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends