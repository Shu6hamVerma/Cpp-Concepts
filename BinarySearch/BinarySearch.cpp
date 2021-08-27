/*
Given an array of integers nums which is sorted in ascending order, and an integer target,
write a function to search target in nums. If target exists, then return its index. Otherwise, return -1.
Example 1:

Input: elements= 6, nums = {-1,0,3,5,9,12}, target = 9
Output: 4
Explanation: 9 exists in nums and its index is 4
*/


#include<iostream>
using namespace std;

int binarysearch(int *arr, int target, int elements){
    int start= 0;
    int end= elements-1;
    while(start<=end){
        int mid= (start+end)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]<target){
            start= mid+1;
        }
        else{
            end= mid-1;
        }
    }
    return -1;
}
int main(){
    int arr[1000];
    int elements=0, target=0;
    cin>>elements;
    for(int i=0; i<elements ;i++){
        cin>>arr[i];
    }
    cin>>target;
    cout<<binarysearch(arr, target, elements);
    return 0;
}