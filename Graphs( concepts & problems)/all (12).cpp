#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n, m;
	cin>>n>>m;
	vector<int> adj[n+1];
	for(int i=0; i<m; i++){
	    int u,v;
	    cin>>u>>v;
	    adj[u].push_back(v);
        adj[v].push_back(u);
	}
	for(int i=0; i<m; i++){
	    for(int j=0; j<adj[i].size(); j++){
	        cout<<adj[i][j]<<" ";
	    }
	    cout<<endl;
	}
}
// 5 6
// 1 2
// 1 3
// 2 4
// 3 4 
// 3 5 
// 4 5
// (empty)
// 2 3 
// 1 4 
// 1 4 5 
// 2 3 5 
// 3 4 