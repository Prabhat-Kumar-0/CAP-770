#include<iostream>
using namespace std;
int binarySearch(int arr[], int key, int size){
    int start = 0, end = size-1, mid = (start+end)/2;
    while(start <= end){
        if(key == arr[mid]){
            return mid;
        }
        if(arr[mid] < key){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = (start+end)/2;
    }
    return -1;
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    cout<<binarySearch(arr,3,10);
}