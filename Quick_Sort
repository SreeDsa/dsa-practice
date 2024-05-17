#include <iostream>
using namespace std;
int partition(int arr[],int low,int high){
  int pivot = low;
  int i = low;
  int j = high;
  while(i<j){
    while(arr[i] <= arr[pivot] && i<=high-1){
      i++;
    }
    while(arr[j] > arr[pivot] && j>=low+1){
      j--;
    }
    if(i<j){
      int temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
    }
  }
  int temp = arr[pivot];
  arr[pivot] = arr[j];
  arr[j] = temp;
  return j;
}

void quickSort(int arr[],int low,int high){
  if(low >= high){
    return;
  }
  int partitionIndex = partition(arr,low,high);
  quickSort(arr,low,partitionIndex - 1);
  quickSort(arr,partitionIndex+1,high);
}

int main() 
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0;i<n;i++) cin >> arr[i];
    quickSort(arr,0,n-1);
    for(int i = 0;i<n;i++) cout << arr[i] << " ";

    return 0;
}
