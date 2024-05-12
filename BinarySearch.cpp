#include<iostream>
using namespace std;
bool binarySearch(int* arr,int s, int e,int k){
    //base case:
    if(s>e) return false;
    
    int mid = s+ (e-s)/2;
    //if found:
    if(arr[mid]==k) return true;
    
    if(arr[mid]<k){
        return binarySearch(arr,mid+1,e,k);
    }
    else{
        return binarySearch(arr,s,mid-1,k);
    }
}
int main(){
    int arr[6]={1,2,4,6,10,18};
    int s =0, e =5;
    int k =18;
    bool ans = binarySearch(arr,s,e,k);
    cout<<"The key is present: "<<ans<<endl;

}