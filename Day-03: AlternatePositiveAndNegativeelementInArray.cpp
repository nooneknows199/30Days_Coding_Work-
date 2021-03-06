#include <iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    cout<<"enter the elements of the array: ";      //  Time : O(n)
    int n;                                          // Space : O(n)
    cin>>n;
    int arr[n];
    cout<<"enter array elements: ";
    for(int i=0;i<n;i++) cin>>arr[i];
    vector<int> neg, pos;
    for (int i = 0; i < n; i++) {

	        if (arr[i] < 0)
	            neg.push_back(arr[i]);  // vector will contain the -ve elements of the array
	        else
	            pos.push_back(arr[i]);   // vector will contain the +ve elements of the array
	    }
    int i = 0, j = 0, k = 0;


     while (i < neg.size() && j < pos.size()) {
	        arr[k++] = pos[j++];
	        arr[k++] = neg[i++];   // this will combine the +ve and -ve elements alternatively , where first +ve element comes
	    }
	    
   cout<<"Output Of the given array: ";
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;

}

OR

#include <bits/stdc++.h>
using namespace std;
 
// Partitioning routine of quicksort
int partition(int A[], int n)
{
    int j = 0;
    int pivot = 0;    // consider 0 as pivot
 
    // each time we find a negative number, j is incremented
    // and negative element would be placed before the pivot
    for (int i = 0; i < n; i++)
    {
        if (A[i] < pivot)
        {
            swap(A[i], A[j]);
            j++;
        }
    }
 
    // j holds index of first positive element
    return j;
}
 
// Function to rearrange given array such that it contains positive
// and negative numbers at alternate positions
int rearrange(int A[], int size)
{
    // partition given array such that all positive elements move
    // to end of the array
    int p = partition(A, size);
 
    // swap alternate negative element from next available positive
    // element till end of array is reached or all negative or
    // positive elements are exhausted.
    for (int n = 0; (p < size && n < p); p++, n += 2) {
        swap(A[n], A[p]);
    }
}
 
int main()
{
    cout<<"enter the elements of the array: ";      //  Time : O(n)
    int n;                                          // Space : O(1)  , without using extra space
    cin>>n;
    int A[n];
    cout<<"enter array elements: ";
    for(int i=0;i<n;i++) cin>>A[i];
 
    rearrange(A, n);
 
    // print the rearranged array
     cout << "Outut array is: ";
    for (int i = 0 ; i < n; i++) {
        cout << A[i]<<" ";
    }
 
    return 0;
}
