#include<bits/stdc++.h>
using namespace std;
stack<int>_push(int arr[],int n);
void _getMinAtPop(stack<int>s);

stack<int> _push(int arr[],int n)
{
   // your code here
   stack<int>s;
   for(int i=0;i<n;i++){
       s.push(arr[i]);
   }
   return s;
}


void fillArray(stack<int>s,int arr[],int n){
    int i=n-1;
    while(!s.empty()){
        arr[i--]=s.top();
        s.pop();
    }
    // sort(arr,arr+n,greater<int>());

    return;
}
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void printStack(stack<int>s){
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}
void _getMinAtPop(stack<int>s)
{
    // your code here
    
    int n=s.size();
    int arr[n];
    fillArray(s,arr,n);
    // print(arr,n);
    // cout<<s.size()<<endl;
    stack<int>s1;
    for(int i=0;i<n;i++){
        if(s1.empty()){
            s1.push(arr[i]);   
        }
        else if(arr[i]<=s1.top()){
            s1.push(arr[i]);
        }
    }

    // printStack(s1);
    // int size=s.size();
    while(!s.empty()){
        
        cout<<s1.top()<<" ";
        if(!s1.empty() && (s.top()==s1.top()) ){
            s1.pop();
        }
        s.pop();
    }
  }


int main(){
int t;
cin>>t;
while(t--){
   int n;
   cin>>n;
int arr[n];
for(int i=0;i<n;i++)
cin>>arr[i];
stack<int>mys=_push(arr,n);
_getMinAtPop(mys);
cout<<endl;
}
return 0;
}
