#include <bits/stdc++.h>
using namespace std;

int knapsack(vector<int>&wt , vector<int>&val , int W , int n) {
    if(!n || !W) {
        return 0;
    }
    if(wt[n-1] <= W){
        return max(val[n-1] + knapsack(wt , val , W-wt[n-1] , n-1) , knapsack(wt , val , W , n-1));
    }else{
       return knapsack(wt , val , W , n-1); 
    }
}

int main() {
	vector<int>wt = {10,20,30};
	vector<int>val = {60,100,120};
	int W = 50;
	int n = wt.size();
	cout << knapsack(wt , val , W , n);
	return 0;
}
