#include<iostream>
using namespace std;
void merge(int* arr, int s, int e){
 int mid = s+(e-s)/2;

 int len1 = mid-s+1;
 int len2 = e - mid;

 int *first = new int[len1];   
 int *second = new int[len2];   

 //copy values in 1st and 2nd
 int k = s;
 for(int i=0;i<len1;i++){
    first[i]=arr[k++];
 }
 k = mid+1;
 for(int i=0;i<len2;i++){
    second[i]=arr[k++];
 }
 //merging 2 sorted arrays
 int a = 0;
 int b = 0;
 k = s;

 while(a<len1 && b<len2){
    if(first[a]<second[b]){
        arr[k++]=first[a++];
    }
    else{
        arr[k++]=second[b++];
    }
 }

while(a<len1){
    arr[k++]=first[a++];
}
while(b<len2){
     arr[k++]=second[b++];
}
delete []first;
delete []second;
}
void mergeSort(int* arr, int s, int e){
    //base case:
    if(s>=e) return;
    int mid = s+(e-s)/2;
    //left part
    mergeSort(arr,s,mid);
    //right part:
    mergeSort(arr,mid+1,e);
    //merge
    merge(arr,s,e);
}
int main(){
    int arr[8]={1,5,3,77,9,34,2,4};
    int n=8;
    mergeSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}