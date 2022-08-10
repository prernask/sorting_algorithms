/*Initialize minimum value(min_idx) to location 0
Traverse the array to find the minimum element in the array
While traversing if any element smaller than min_idx is found then swap both the values.
Then, increment min_idx to point to next element
Repeat until array is sorted */
 

#include<iostream>
using namespace std;
void swap(int *xp, int *yp){
    int temp=*xp;
    *xp=*yp;
    *yp=temp;
}
void selectionSort(int arr[], int n)
{
    int i,j,min_idx;

    for(int i=0;i<n-1;i++){
        min_idx=i;
        for(j=i+1;j<n;j++)
        if(arr[j]<arr[min_idx])
            min_idx=j;


        if(min_idx!=i) 
            swap(&arr[min_idx], &arr[i]);
        

    }
}
void printArray(int arr[], int size){
    for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

int main(){

    int arr[]={12,34,15,67,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr,n);
    cout<<"sorted array: \n";
    printArray(arr,n);
    return 0;}