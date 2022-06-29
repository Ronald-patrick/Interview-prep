#include<bits/stdc++.h>
using namespace std;

// 2 array approach

void merge(int *arr,int s,int e)
{
    int mid = s + (e-s) / 2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    // Copy value
    int k = s;
    for(int i = 0;i<len1;i++)
    {
        first[i] = arr[k++];
    }

    for(int i = 0;i<len2;i++)
    {
        second[i] = arr[k++];
    }

    // Merge sorted arrays

    int i1 = 0;
    int i2 = 0;
    k = s;

    while(i1<len1 && i2 <len2)
    {
        if(first[i1] < second[i2])
            arr[k++] = first[i1++];

        else
            arr[k++] = second[i2++];
    }

    while(i1 < len1)
    {
        arr[k++] = first[i1++]; 
    }

    while(i2 < len2)
    {
        arr[k++] = second[i2++]; 
    }

    delete[] first;
    delete[] second;
}


void mergeSort(int *arr,int l,int r){

    if(l >= r)
    {
        return;
    }
    int mid = l + (r-l) / 2;

    mergeSort(arr,l,mid);

    mergeSort(arr,mid+1,r);

    merge(arr,l,r);
    
}
 
int main()
{
    int arr[] = {64, 25, 12, 22, 11,5,2,1,55,66,20,7,15};
    int n = sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr,0,n-1);

    for(int i =0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
 
    return 0;
}