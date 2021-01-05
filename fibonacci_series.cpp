// fibonacci series is 0,1,1,2,3,5,8....
// so input is 3 then output =2





#include<iostream>
using namespace std;

int fibonacci(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int back=fibonacci(n-1);
    int back2=fibonacci(n-2);
    return back+back2;
}

int main(){
    int num;
    cin>>num;
    cout<<fibonacci(num)<<endl;;

}
