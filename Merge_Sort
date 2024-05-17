#include <iostream>
using namespace std;

void merge(int arr[],int low,int mid,int high){
  int temp[high-low+1];
  int left = low;
  int right = mid+1;
  int idx = 0;
  while(left<=mid && right<= high){
    if(arr[left] < arr[right]){
      temp[idx] = arr[left];
      idx++;
      left++;
    }
    else{
      temp[idx] = arr[right];
      idx++;
      right++;
    }
  }
  while(left<=mid){
    temp[idx] = arr[left];
      idx++;
      left++;
  }
  while(right<= high){
    temp[idx] = arr[right];
      idx++;
      right++;
  }
  for(int i = low;i<=high;i++){
    arr[i] = temp[i-low];
  }
}

void mergeSort(int arr[],int low,int high){
  if(low >= high){
    return;
  }
  int mid = (low+high)/2;
  mergeSort(arr,low,mid);
  mergeSort(arr,mid+1,high);
  merge(arr,low,mid,high);
}

int main() 
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0;i<n;i++) cin >> arr[i];
    mergeSort(arr,0,n-1);
    for(int i = 0;i<n;i++) cout << arr[i] << " ";

    return 0;
}
