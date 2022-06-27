#include<bits/stdc++.h>
using namespace std;

void swap(int &x,int &y)
{
    if(&x == &y)
    return;
    x = x^y;
    y = x^y;
    x = x^y;
}

void mergeSort(int arr[],int n){
    

}
 
int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr, n);

    for(int i =0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
 
    return 0;
}