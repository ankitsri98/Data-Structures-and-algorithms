#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int>v;
	v.push_back(55);
	v.push_back(555);
	v.push_back(557);
	v.push_back(1);
	v.push_back(5);
	v.push_back(65);
	v.push_back(996);
	v.push_back(69);
	v.push_back(2);
	v.push_back(3);
	v.push_back(133);
	v.push_back(189);
	
	for(int i = 0 ; i < v.size()-1 ; i++){
	    int flag = 1;
	    for(int j = 0 ; j < v.size()-i-1 ; j++){
	        if(v[j] > v[j+1]){
	            flag = 0;
	            v[j+1] = v[j+1] + v[j];
	            v[j] =  v[j+1] - v[j];
	            v[j+1] = v[j+1] - v[j];
	        }
	    }
	    if(flag){
	        break;
	    }
	}
	for(int i = 0 ; i < v.size() ; i++){
	    cout << v[i] << " ";
	}
	
	
	return 0;
}
