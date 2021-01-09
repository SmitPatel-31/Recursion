
Sum of Array
Given an array of length N, you need to find and return the sum of all elements of the array.
Do this recursively.
Input Format :
Line 1 : An Integer N i.e. size of array
Line 2 : N integers which are elements of the array, separated by spaces
Output Format :
Sum
Constraints :
1 <= N <= 10^3
Sample Input :
3
9 8 9
Sample Output :
26


/***************************************************** SOLUTION **************************************************************************/

#include<iostream>
using namespace std;

int findsum(int a[],int si){
    if(si<=0){
        return 0;
    }
    int ans=findsum(a,si-1)+a[si-1];
    return ans;
}

int main(){
    int size,a[20];
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
    int ans=findsum(a,size);
    cout<<ans<<endl;
}
