// Online C++ compiler to run C++ program online
//i take nearly sorted array so i use insertion sort for it. and if it will randomized array then we can use quick sort and merge sort as they have complexity of O(nlogn).
//pseudo code
//declare i,j,k variables
//first we loop from i=1 to n and inside for loop
//now we define the value of k=arr[i]
//then run a nested loop in first loop from j=i-1 and put the running condition as j>=0 and arr[j]>k with decrementing j by 1
// inside nested loop we swap the elements by one place as arr[j+1]=arr[j] after ending of nested loop
// we update the position of arr[j+1]=k
// after for loop we print the sorted array
//end pseudo code.

#include <iostream>
using namespace std;
void algorithm(int arr[],int n){
    int i,j,k;
    for(i=1;i<n;i++){
        k=arr[i];
        for(j=i-1; j>=0 && arr[j]>k;j--){
          arr[j+1]=arr[j];
        }
        arr[j+1]=k;
    }
    for(i=0;i<n;i++){cout<<arr[i]<<" ";}
}
int main() {
    int arr[]={1,7,5,15,12};
    algorithm(arr,5);
    return 0;
}
