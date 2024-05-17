#include <iostream>
using namespace std;

void bubble_Sort(int a[],int n){
  for(int i = 0;i<n-1;i++){
    int didSwap = 0;
    for(int j = 0;j<n-i-1;j++){
      if(a[j]>a[j+1]){
        int temp = a[j];
        a[j] = a[j+1];
        a[j+1] = temp;
        didSwap = 1;
      }
    }
    if(didSwap == 0){
      break;
    }
  }
}

int main() 
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0;i<n;i++) cin >> arr[i];
    bubble_Sort(arr,n);
    for(int i = 0;i<n;i++) cout << arr[i] << " ";

    return 0;
}
