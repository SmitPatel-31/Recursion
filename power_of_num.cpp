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