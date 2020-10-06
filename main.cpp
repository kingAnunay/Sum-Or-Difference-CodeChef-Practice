// THIRD QUESTION
// SUM OR DIFFERENCE
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	  int n1 = 0 , n2 = 0;
      cin>>n1;
      cin>>n2;
      if(n1>=-1000&&n1<=1000 && n2>=-1000&&n2<=1000){
        if(n1>n2){
            cout<<n1-n2;
        }
        else{
            cout<<n1+n2;
        }
        }
	return 0;
}