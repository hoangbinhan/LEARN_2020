#include <stdio.h>
#include <iostream>
using namespace std;

int binarySearch(int arr[],int l, int r, int x){
    if(r>=l){
        int mid = l + (r-l)/2;
        if(arr[mid] == x){
            return mid;
        }
        if (arr[mid]>x){
            return binarySearch(arr,l,mid-1,x);
        }
        if(arr[mid]<x){
            return binarySearch(arr,mid+1,r,x);
        }
    }
    return -1;
}

int main(){
    int a[20] = {1,3,4,5,6,7,9,11,14,23,31,33,42,50,60};
    int n = 15;
    int x = 4;
    int result = binarySearch(a,0,15,23);

    (result == -1) ? cout << "Element is not present in array"
                   : cout << "Element is present at index " << result; 

    return 0;
}

