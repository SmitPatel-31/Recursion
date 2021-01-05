
// Input format :
// Two integers x and n (separated by space)
// Output Format :
// x^n (i.e. x raise to the power n)
// Constraints:
// 0 <= x <= 8 
// 0 <= n <= 9
// Sample Input 1 :
//  3 4
// Sample Output 1 :
// 81
// Sample Input 2 :
//  2 5
// Sample Output 2 :
// 32


#include<iostream>
using namespace std;

int powfun(int a,int b){
    if (b==0){
        return 1;
    }
    int smallpow=powfun(a,b-1);
    return a*smallpow;
}
int main(){
    int num,pow;
    cout<<"Enter num";
    cin>>num;
    cout<<"Enter power";
    cin>>pow;
    int ans=powfun(num,pow);
    cout<<ans<<endl;
}
