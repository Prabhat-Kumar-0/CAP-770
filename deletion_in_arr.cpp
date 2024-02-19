#include<iostream>
using namespace std;
int main(){
    int n = 11;
    int arr[n]={1,2,3,4,5,5,56,8,7,3,4};
    int indexDel;
    cin>>indexDel;
    for(int i=indexDel; i<n; i++){
        arr[indexDel]=arr[indexDel+1];
    }
    --n;
    for(int i=0;i<n; i++){
        cout<<arr[i]<<" ";
    }

}