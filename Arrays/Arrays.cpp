#include<iostream>
using namespace std;

int main(){
    int arr[100];
    int element=0;
    cin>>element;
    for(int i=0; i<element; i++){
        cin>>arr[i];
    }
    cout<<endl;
    for(int i=0; i<element; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}