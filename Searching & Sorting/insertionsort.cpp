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

void insertionSort(int arr[],int n){
    int i,j,key;
    for(i = 1;i<n;i++)
    {
        key = arr [i];
        j = i-1;

        while(j>=0 && arr[j] > key)
        {
            // swap(arr[j],arr[j+1]);
            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = key;
    }

}
 
int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr, n);

    for(int i =0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
 
    return 0;
}