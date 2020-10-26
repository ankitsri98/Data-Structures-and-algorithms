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
	vector<int>vv = v;
	sort(vv.begin(),vv.end());
	
	
	for(int i = 0 ; i < v.size()-1 ; i++){
	    int minIndex = i;
	    for(int j = i+1 ; j < v.size() ; j++){
	        if(v[j] < v[minIndex]){
	            minIndex = j;
	        }
	    }
	   int temp = v[minIndex];
	   v[minIndex] = v[i];
	   v[i] = temp;
	}
	
	
	
	for(int i = 0 ; i < v.size() ; i++){
	    cout << v[i] << " ";
	}
	cout << endl;
	for(int i = 0 ; i < v.size() ; i++){
	    cout << vv[i] << " ";
	}
	
	return 0;
}
