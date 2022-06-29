#include<bits/stdc++.h>
using namespace std;

int recbinarySearch(vector<int> a,int key,int start,int end){

        if(start > end)
            return -1;

        int mid = start + (end - start) / 2;

        if(a[mid] == key)
        return mid;

        else if(a[mid] < key)
        return recbinarySearch(a,key,mid+1,end);

        else
        return recbinarySearch(a,key,start,mid-1);

}

int binarySearch(vector<int> a,int key){
    int start = 0;
    int end = a.size() - 1;
    int mid = 0;

    while(start <= end)
    {
        mid = start + (end - start) / 2;
        if(a[mid] == key)
        return mid;

        else if(a[mid] < key)
        start = mid + 1;

        else
        end = mid - 1;
    }

    return -1;
}
 
int main()
{
    vector<int> arr = {10,20,30,40,50,60,70};
    cout<<binarySearch(arr,30)<<endl;
    cout<<binarySearch(arr,50)<<endl;
    cout<<binarySearch(arr,15)<<endl;

    cout<<recbinarySearch(arr,30,0,arr.size()-1);
    return 0;
}