First Index of Number
Given an array of length N and an integer x, you need to find and return the first index of integer x present in the array. Return -1 if it is not present in the array.
First index means, the index of first occurrence of x in the input array.
Do this recursively. Indexing in the array starts from 0.
Input Format :
Line 1 : An Integer N i.e. size of array
Line 2 : N integers which are elements of the array, separated by spaces
Line 3 : Integer x
Output Format :
first index or -1
Constraints :
1 <= N <= 10^3
Sample Input :
4
9 8 10 8
8
Sample Output :
1



/***************************************************** SOLUTION **************************************************************************/


#include<iostream>
using namespace std;

int first(int arr[],int x,int size){
    if(size<=0){
        return -1;
    }
    else if(arr[0]==x){
        return 0;
    }
    int ans=first(arr+1,x,size-1);
    return ans==-1?ans:ans+1;
}

int main(){
    int arr[20],x,size;
    cin>>size;
    for (int i=0;i<size;i++){
        cin>>arr[i];
    }
    cin>>x;
    int ans= first(arr,x,size);
    cout<<ans<<endl;
}
