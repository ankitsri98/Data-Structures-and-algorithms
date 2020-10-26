#include <iostream>
using namespace std;

int fac(int n){
    if(n >1){
        return n*fac(n-1);
    }else{
        return n;   
    }
}

int main() {
    cout << fac(6);
	return 0;
}
