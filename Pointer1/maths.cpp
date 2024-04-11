#include <iostream>
#include<vector>
using namespace std;
bool isPrime(int n){
  if(n<=1){
    return false;
  }
  for(int i=2;i<n;i++){
    if(n%i==0){
      return false;
    }
  }
  return true;
}
int gcd(int a,int b){
  while(a>b){
    while (a > b) {
      a = a - b;
    }
    return a;
  }
  return -1;
  
}
int gcd1(int a,int b){
  if(a==0) return b;
  if(b==0) return a;
  while(a>=0 && b>=0){
    if(a>b){
      a=a-b;
    }
    else{
      b=b-a;
    }
    return a==0?b:a;
  }
  return -1; 
}
int slowexpo(int a,int b){
  int ans=1;
  for(int i=0;i<b;i++){
    ans=ans*a;
  }
  return ans;
}
int fastexpo(int a,int b){
  int ans =1;
  while(b>0){
    if(b&1){
      ans =ans*a;
    }
    a=a*a;
    b>>=1;
  }
  return ans;
}
int main() {

  int a,b;
  cin >>a>>b;
  int ans =fastexpo(a,b);
  cout<<ans;

// int a,b;
//   cin>>a>>b;
//    int ans =gcd1(a,b);
//   cout<<ans;
  // finding gcd 
  // int a,b;
  // cin >>a>>b;
  // int ans =gcd(a,b);
  // cout<<ans;
 // int n;
 //  cin>>n;
 //  int count=0;
 //  for(int i=2;i<n;i++){
 //    if(isPrime(i)){
 //      count++;
 //    }
 //  }
 //  cout<<count<<endl;
// seave of eratosthenes
// int n;
//   cin >>n;
//   if(n==0){
//     cout<< 0;
//   }
//   vector<bool> prime(n,true);
//   prime[0]=prime[1]=false;

//   int ans=0;
//   for(int i=2;i<n;i++){
//     if(prime[i]){
//       ans++;

//       int j=2*i;
//       while(j<n){
//         prime[j]=false;
//         j=j+i;
//       }
//     }
//   }
//   cout<<ans;
}