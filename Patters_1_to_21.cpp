#include <bits/stdc++.h>
using namespace std;

void pattern1(int n){
  for(int i = 0;i<n;i++){
      for(int j = 0;j<n;j++){
        cout << "*";
      }
      cout << "\n";
    }
}
void pattern2(int n){
  for(int i = 0;i<n;i++){
      for(int j = 0;j<=i;j++){
        cout << "*";
      }
      cout << "\n";
    }
}
void pattern3(int n){
  for(int i = 0;i<n;i++){
      for(int j = 0;j<=i;j++){
        cout << j+1<<" ";
      }
      cout << "\n";
  }
}
void pattern4(int n){
  for(int i = 0;i<n;i++){
      for(int j = 0;j<=i;j++){
        cout << i+1<<" ";
      }
      cout << "\n";
  }
}
void pattern5(int n){
  for(int i = 0;i<n;i++){
      for(int j = 0;j<=n-i-1;j++){
        cout << "* ";
      }
      cout << "\n";
  }
}
void pattern6(int n){
  for(int i = 0;i<n;i++){
        for(int j = 0;j<=n-i-1;j++){
          cout << j+1<<" ";
  }
  cout << "\n";
  }
}
void pattern7(int n){
  for(int i = 0;i<n;i++){
      for(int p = 0;p<n-i-1;p++){
        cout << " ";
      }
      for(int q = 0;q<(i*2)+1;q++){
        cout << "*";
      }
      for(int r = 0;r<=n-i-1;r++){
        cout << " ";
      }
      cout << "\n";
  }
}
void pattern8(int n){
  for(int i = 0;i<n;i++){
      for(int p = 0;p<i;p++){
        cout << " ";
      }
      for(int q = 0;q<(2*n)-(2*i)-1;q++){
        cout << "*";
      }
      for(int r = 0;r<i;r++){
        cout << " ";
      }
      cout << "\n";
  }
}
void pattern9(int n){
  for(int i = 0;i<n;i++){
      for(int p = 0;p<n-i-1;p++){
        cout << " ";
      }
      for(int q = 0;q<(i*2)+1;q++){
        cout << "*";
      }
      cout << "\n";
  }
  for(int i = 0;i<n;i++){
      for(int p = 0;p<i;p++){
        cout << " ";
      }
      for(int q = 0;q<(2*n)-(2*i)-1;q++){
        cout << "*";
      }
      cout << "\n";
  }
}
void pattern10(int n){
  for(int i = 0;i<=2*n-1;i++){
    if(i<n){
      for(int j = 0;j<=i;j++){
      cout << "*";
      }
    }
    else{
      for(int p =2*n-1-i;p>0;p--){
        cout << "*";
      }
    }
    cout <<"\n";
  }
}
void pattern11(int n){
  int start = 1;
  for(int i =0 ;i<n;i++){
    if(i%2==0)
      start = 1;
    else
      start = 0;
    for(int j = 0;j<=i;j++){
      cout << start;
      start = 1 - start;
    }
    cout << "\n";
  }
}
void pattern12(int n){
  for(int i = 0;i<n;i++){
    for(int p = 0;p<=i;p++){
     cout << p+1;
    }
    for(int q = 0;q<(2*n-2*i-2);q++){
     cout << " ";
    }
    for(int r = i;r>=0;r--){
     cout << r+1;
    }
    cout<<"\n";
  }
}
void pattern13(int n){
  int k = 1;
  for(int i = 0;i<n;i++){
    for(int j = 0;j<=i;j++){
      cout<< k;
      k++;
    }
    cout<<"\n";
  }
}
void pattern14(int n){
 for(int i = 0;i<n;i++){
      char ch= 'A';
      for(int j = 0;j<=i;j++){
        cout << ch;
        ch = ch+1;
      }
      cout << "\n";
    }
}
void pattern15(int n){
 for(int i = 0;i<n;i++){
      char ch= 'A';
      for(int j = n-i-1;j>=0;j--){
        cout << ch;
        ch = ch+1;
      }
      cout << "\n";
    }
}
void pattern16(int n){
  char ch= 'A';
  for(int i = 0;i<n;i++){
      for(int j = 0;j<=i;j++){
        cout << ch;
      }
      ch = ch+1;
      cout << "\n";
    }
}
void pattern17(int n){
  for(int i = 0;i<n;i++){
      for(int p = 0;p<n-i-1;p++){
        cout << " ";
      }
      char ch= 'A';
      
      for(int q = 0;q<(i*2)+1;q++){
        if(q<i+(1/2)){
          cout << ch;
          ch+=1;
        }
        else{
          cout << ch;
          ch -= 1;
        }
      }
      for(int r = 0;r<=n-i-1;r++){
        cout << " ";
      }
      cout << "\n";
  }
}
void pattern18(int n){
  // for(int i = 0;i<n;i++){
  //   for(char ch = 'E'-i;ch<='E';ch++){
  //     cout << ch;
  //   }
  //   cout << "\n";
  // }
  
  // ------------or---------------
  
  // char ch = 'A'+n-1;
  // for(int i = 0;i<n;i++){
  //   for(char p  = ch-i;p<=ch;p++){
  //     cout << p << " ";
  //   }
  //   cout << "\n";
  // }
 
}
void pattern19(int n){
  for(int i =0 ;i<n;i++){
    for(int p =0;p<=n-i-1;p++){
      cout<<"*";
    }
    for(int q =0;q<2*i;q++){
      cout<<" ";
    }
    for(int r =0 ;r<=n-i-1 ;r++){
      cout<<"*";
    }
    cout<<"\n";
  }
  for(int i =0 ;i<n;i++){
    for(int p =0;p<=i;p++){
      cout<<"*";
    }
    for(int q =0;q<2*n-2*i-2;q++){
      cout<<" ";
    }
    for(int r =0 ;r<=i;r++){
      cout<<"*";
    }
    cout<<"\n";
    
  }
}
void pattern20(int n){
  int space = 2;
  for(int i = 0;i<2*n-1;i++){
    if(i<n){
      for(int p =0;p<=i;p++){
        cout<<"*";
      }
      for(int q = 0;q<2*n-2*i-2;q++){
        cout<<" ";
      }
      for(int r =0;r<=i;r++){
        cout<<"*";
      }
      cout<<"\n";
    }
    
    else{
      for(int p =0;p<2*n-i-1;p++){
        cout<<"*";
      }
      for(int q = 0;q<space;q++){
        cout<<" ";
      }
      space += 2;
      for(int r =0;r<2*n-i-1;r++){
        cout<<"*";
      }
      cout<<"\n";
    }
  }
}
void pattern21(int n){
  for(int i =0;i<n;i++){
    for(int j =0;j<n;j++){
      if(i == 0 || i == n-1 || j == 0||j == n-1){
        cout<<"*";
      }
      else{
        cout<<" ";
      }
    }
    cout<<"\n";
  }
}
int main() 
{
  int n;
  cin >> n;
  pattern21(n);
  return 0;
}