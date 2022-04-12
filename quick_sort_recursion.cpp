#include <bits/stdc++.h>
using namespace std;
int partition(int arr[],int l,int h){
    int pivot=arr[l];
    int i=l,j=h;
     while(i<j){
        while(arr[i]<=pivot){i++;}
        while(arr[j]>pivot){j--;}
        if(i<j){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    
    int temp=arr[l];
    arr[l]=arr[j];
    arr[j]=temp;
    return j;
}
void quicksort(int arr[],int l,int h){
    if(l<h)
    {
        int j=partition(arr,l,h);
        quicksort(arr,l,j-1);
        quicksort(arr,j+1,h);
    }
}
int main(){
    int arr[]={1,4,3,2,4,5,7,8,5,4};
    quicksort(arr,0,9);
    for(auto value:arr){
        cout<<value<<" ";
    }
    return 0;
}