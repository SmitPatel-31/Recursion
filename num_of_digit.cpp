// Number of Digits
// Given the code to find out and return the number of digits present in a number recursively. But it contains few bugs, that you need to rectify such that all the test cases should pass.
// Input Format :
// Integer n
// Output Format :
// Count of digits
// Constraints :
// 1 <= n <= 10^6
// Sample Input :
//  156
// Sample Output :
// 3


/***************************************************** SOLUTION **************************************************************************/




#include<iostream>
using namespace std;
int k=0;
int counter(int a){
    if(a!=0){
        k=k+1;
        int m=counter(a/10);
        
        return k;
    }
    
}

int main(){
    int num;
    cin>>num;
    int ans = counter(num);
    cout<<ans<<endl;

}