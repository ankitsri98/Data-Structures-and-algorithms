#include <bits/stdc++.h>
using namespace std;

void towerOfHanoi(char source, char helper, char destination, int numberOfDisc){
    if(numberOfDisc == 1){
        cout<<"Moving disc "<<numberOfDisc<<" from "<<source<<" to "<<destination<<endl;
        return;
    }
    towerOfHanoi(source,destination,helper,numberOfDisc-1);
    cout<<"Moving disc "<<numberOfDisc<<" from "<<source<<" to "<<destination<<endl;
    towerOfHanoi(helper,source,destination,numberOfDisc-1);
}

int main() {
    char source='A', helper='B', destination='C';
    int numberOfDiscs = 5;
	towerOfHanoi(source, helper, destination, numberOfDiscs);
	return 0;
}
