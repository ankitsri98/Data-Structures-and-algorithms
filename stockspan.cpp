#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	        cin>>arr[i];
	    //code here
	    stack<int>s;
	    vector<int>span;
	    s.push(0);
	    span.push_back(1);
	   // int prev;
	    
	    for(int i=1;i<n;i++){
            while(!s.empty() && arr[s.top()] <= arr[i]){
                s.pop();
            }
            span.push_back(s.empty()?i+1:i-s.top());
            s.push(i);
	    }
	       for(int i=0;i<span.size();i++){
	           cout<<span[i]<<" ";
	       } 
	    cout<<endl;     
	}

	return 0;
}
