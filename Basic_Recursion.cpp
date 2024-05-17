#include <bits/stdc++.h>
using namespace std;

void basic_rec_prog(int n){
  if(n == 0){
    return;
  }
  cout << "n:" << n << endl;
  basic_rec_prog(n-1);
}
void backtracking(int n){
  if(n <= 0){
    return;
  }
  //bcoz when ever base condtion fails
  //we go back to the previous call at that 
  //whatever is the value of n that 
  //will be printed
  //ex: when n = 0 it goes to prev call
  //where n = 1 ,similarly the process continues,,
  backtracking(n-1);
  cout << "n:" << n << endl;
}

void rec(int x,vector<int>&v){
    if(x == 0){
        return;
    }
    rec(x-1,v);
    v.push_back(x);
}
vector<int> printNos(int x) {
    vector<int> v;
    rec(x,v);
    return v;
}

int paraSum(int n,int sum){
  if(n == 0){
    return sum;
  }
  paraSum(n-1,sum+n);
}
int funSum(int n){
  if(n == 0){
    return 0;
  }
  return n+funSum(n-1);
}

void array_reversal(int i , int arr[],int n){
  if(i >= n/2){
    return;
  }
  int temp = arr[n-i-1];
  arr[n-i-1] = arr[i];
  arr[i] = temp;
  array_reversal(i+1,arr,n);
}
bool palindrome(int i , string s,int n){
  if(i >= n/2){
    return true;
  }
  if(s[i] != s[n-i-1]){
    return false;
  }
  palindrome(i+1,s,n);
}
int main() 
{
  cout <<"Basic Recusion Program\n";
  basic_rec_prog(5);
  cout << endl;
  
  cout <<"Using back tracking to print numbers from 1 to n\n";
  backtracking(5);
  cout << endl;
  
  cout <<"Your task is to return an array containing integers from 1 to ‘n’ (in increasing order) without using loops.\n";
  vector<int> v =printNos(5);
  cout << "Vector:";
  for(auto it:v){
    cout << it <<" ";
  }
  cout << endl << endl;
  
  cout << "Parameterized recursion to do sum\n";
  int sum_1 = paraSum(5,0);
  cout << "Sum : " << sum_1 << endl << endl;
  
  cout << "Functional  recursion to do sum\n";
  int sum_2 = funSum(5);
  cout << "Sum : " << sum_2 << endl << endl;
  
  cout << "Array reversal\n";
  int arr[] = {1,2,3,4,5};
  // int n = end(arr) - begin(arr);
  int n = sizeof(arr)/sizeof(arr[0]);
  array_reversal(0,arr,n);
  for(int i = 0;i<n;i++){
    cout << arr[i] << " ";
  }
  
  cout << "palindrome check\n";
  string s = "MadaM";
  // int n = end(arr) - begin(arr);
  int len = s.length();
  bool res = palindrome(0,s,len);
  if(res){
    cout << "Yes it's a palindrome";
  }
  else{
    cout << "No it's not a palindrome";
  }
  return 0;
} 