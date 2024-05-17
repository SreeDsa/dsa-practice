#include <bits/stdc++.h>
using namespace std;
void dig(int num){
    while(num != 0){
      cout << num % 10 << " ";
      num /= 10;
    }
}

void count_digits(int num){
    int cnt = 0;
    int temp = num;
    while(num != 0){
      cnt+=1;
      num /= 10;
    }
    cout << "count_digits: " << cnt << endl;
    
    // --------or-------------
    int n = log10(temp)+1;
    cout <<"count_digits: "<< n;
}

void palindrome(int n){
    int temp = n;
    int rev=0;
    while(temp!=0){
        rev = rev *10 +(temp%10);
        temp /= 10;
    }
    if (n == rev){
       cout<<"yes: " << true;
    }
    else{
      cout << "no: " << false;
    }
}

void Amstrong(int num){
  int dig= log10(num)+1;
  int sum = 0,temp = num;
  while(temp !=0){
    sum+= pow((temp%10),dig);
    temp /= 10;
  }
  if(sum == num){
    cout <<"Yes Amstrong";
  }
  else {
    cout <<"Not Amstrong";
  }
}

void divisors(int num){
  vector<int> v;
  //Tc : O(sqrt(n))
  for(int i = 1;i*i<=num;i++){
    if (num%i==0){
      v.emplace_back(i);
      if(num/i != i){
      v.emplace_back(num/i);
      }
    }
  }
  //Tc : O(no_of_fac(log(no_of_fac))
  sort(v.begin(),v.end());
  //Tc : O(no_of_fac)
  cout<<"divisors: "; 
  for(auto it:v){
    cout << it <<" ";
  }
}

void prime(int num){
  
  int cnt = 0;
  //Tc : O(sqrt(n))
  for(int i = 1;i*i<=num;i++){
    if (num%i==0){
      cnt+=1;
      if(num/i != i){
      cnt+=1;
      }
    }
  }
  if(cnt == 2){
    cout << "Prime";
  }
  else{
    cout << "Not prime";
  }
  // --------------------------or--------------------
//   if (num == 1){
// 		return false;
// 	}
// 	if (num == 2 || num == 3){
// 		return true;
// 	}
// 	if(num % 2 == 0 || num % 3 == 0){
// 		return false;
// 	}
// 	for(int i=5;i*i<=num;i+=6){
// 		if(num% i == 0 || num%(i+2) == 0){
// 			return false;
// 		}
// 	}
// 	return true;
}

// Time comp = O(min(n1,n2))
void gcd(int n1,int n2){
  int g = 1;
  for(int i = min(n1,n2);i>=1;i--){
    if(n1%i == 0 && n2%i==0){
      g = i;
      break;
    }
  }
  cout << "gcd = " << g; 
}
//TIme comp = O(log(min(num1,num2))) 
// here log base is Φ
void euclidean_algorithm_gcd(int num1,int num2){
  while(num1>0 && num2 >0){
    if(num1>num2){
      num1 = num1%num2;
    }
    else{
      num2 = num2%num1;
    }
  }
  if(num1 == 0){
      cout<<"gcd = "<<num2;
    }
  else{
    cout <<"gcd=" << num1;
  }
}
int main() 
{
    int num,num1,num2;
    cin >> num;
    cin >> num1 >> num2;
    //digits 
    dig(num);
    cout << endl << endl<<"count_digits\n";
    //count digits
    count_digits(num);
    cout << endl << endl<<"palindrome\n";
    palindrome(num);
    cout << endl << endl<<"Amstrong_problem\n";
    Amstrong(num);
    cout << endl <<endl<<"Divisors_Porblem\n";
    divisors(num);
    cout << endl <<endl<<"Prime_numbers_Porblem\n";
    prime(num);
    cout << endl <<endl<<"gcd\n";
    gcd(num1,num2);
    cout << endl <<endl<<"euclidean_algorithm_gcd\n";
    euclidean_algorithm_gcd(num1,num2);
    return 0;
    
}