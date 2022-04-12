#include <bits/stdc++.h>
using namespace std;
void merge(int arr[], int l, int m, int r)
{
    int a = l, b = m + 1, k = 0;
    int c[100000];
    while (a <= m && b <= r)
    {
        if (arr[a] <= arr[b])
        {
            c[k++] = arr[a++];
        }
        else
        {
            c[k++] = arr[b++];
        }
    }
    while (a <= m)
    {
        c[k++] = arr[a++];
    }
    while (b <= r)
    {
        c[k++] = arr[b++];
    }
    for (int i = 0; i < k; i++)
    {
        arr[l++] = c[i];
    }
}

void mergeSort(int arr[], int l, int r)
{
    if (l == r)
        return;
    int m = l + (r - l) / 2;
    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);
    merge(arr, l, m, r);
}
int main(){
    int arr[]={1,4,3,2,4,5,7,8,5,4};
    mergeSort(arr,0,9);
    for(auto value:arr){
        cout<<value<<" ";
    }
    return 0;
}