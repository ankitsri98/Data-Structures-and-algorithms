#include <bits/stdc++.h>
using namespace std;

int main() {
    int ans = 0;
	  int n = 10;    
	vector<int>heightOfBuilding = {0,2,1,3,0,1,2,1,2,1};  
	vector<int>left(10,0);     
	vector<int>right(10,0);    
	left[0] = heightOfBuilding[0]; 
	right[n-1] = heightOfBuilding[n-1]; 	
	for(int i = 1 ; i < n ; i++){
	    left[i] = max(heightOfBuilding[i],left[i-1]);
	}
	for(int i = n-2 ; i >= 0 ; i--){
	    right[i] = max(heightOfBuilding[i],right[i+1]);
	}
	for(int i = 0 ; i < n ; i++){
	    ans += min(left[i],right[i]) - heightOfBuilding[i];
	}
	cout << ans;
	return 0;
}
