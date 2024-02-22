#include<bits/stdc++.h>
using namespace std;

void sortFun(string &str){
    for(int i=0; i<str.length(); i++){
        for(int j=0; j<str.length()-i-1; j++){
            if(str[j]>str[j+1]){
                swap(str[j] ,str[j+1]);
            }
        }
    }
}

int main(){

    string arr[3][3];
    for(int i=0; i<3; i++){
        for(int j=0;j<3;j++){
        cin>>arr[i][j];
        }
    }
    
    cout<<endl<<"Original matrix"<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
      cout<<arr[i][j]<<" ";

        }cout<<endl;
    }
 
    cout<<endl<<"After sorting each element of matrix"<<endl;
    for(int i=0; i<3; i++){
        for(int j=0;j<3;j++){
    // sort(arr[i][j].begin(),arr[i][j].end()); 
        string str = arr[i][j];
        sortFun(str);
        cout<<str<<" ";
        }
        cout<<endl;
    }


}