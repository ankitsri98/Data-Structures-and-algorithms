#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    long n;
	    cin>>n;
	    long arr[n];
	    for(long i=0;i<n;i++)
	        cin>>arr[i];
	    //code here
	    stack<long>s;
	    s.push(arr[n-1]);
	    vector<long>v;
	    v.push_back(-1);
	    for(long i=n-2;i>=0;i--){
	        while(s.empty()==false && s.top() <=arr[i]){
	            s.pop();
	        }
	        v.push_back(s.empty()?-1:s.top());
	        s.push(arr[i]);
	    }
	    for(long i=v.size()-1;i>=0;i--){
	        cout<<v[i]<<" ";
	    }
	        
	    cout<<endl;     
	}

	return 0;
}
