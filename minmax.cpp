#include<bits/stdc++.h>
using namespace std;
int main(){
    int max = 0 , min = 0 , s;
    cout<<"enter the size of array";
    cin>>s;
    int arr[s];
    for(int i = 0 ; i < s ; i++){
        cout<<"enter the element at"<<i<<endl;
        cin>>arr[i];
    }
    cout<<"entred array"<<endl;
    for(int i = 0 ; i < s ; i++){
        cout<<arr[i];

    }
    // for max term
    for(int i = 0 ; i < s ; i++){
        if(arr[i]>max){
            max = arr[i];

        }
    }
    //for min
    min=max;
    for(int i = 0;i<s ; i++ ){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"maximum term is"<<max <<endl;
    cout<<"minimum term is"<<min <<endl;
    return 0 ;
}