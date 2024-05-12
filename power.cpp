#include<iostream>
using namespace std;
int findPower(int a,int b){
    //unoptimized
    // if(b==0) return 1;
    // if(b==1) return a;

    // return a * findPower(a,b-1);

//optimized
   //base case
    if( b == 0 )
        return 1;

    if(b == 1)
        return a;

    //RECURSIVE CALL
    int ans = findPower(a, b/2);

    //if b is even
    if(b%2 == 0) {
        return ans * ans;
    }
    else {
        //if b is odd
        return a * ans * ans;
    }
}


int main(){
    int a,b;
    cin>>a>>b;
    int ans = findPower(a,b);
    cout<<ans<<endl;
}