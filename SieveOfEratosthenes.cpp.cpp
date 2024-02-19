#include<iostream>
using namespace std;
int main(){
    int num = 500;
    int check = 2;
    int arr[num] = {0};

    while((check*check)<num){

    for(int i=2; i< num/2; i++){
    
        if((check*i)<num){arr[check*i]=1;}
    }
    check++;
    }

    // for printing the prime no 
    cout<<"List of Prime no : ";
    for(int i=2;i<num;i++){
        if(arr[i] == 0){
        cout<<i<<" ";
        }
    }

}