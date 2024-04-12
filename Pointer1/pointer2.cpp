
#include <iostream>
using namespace std;
void solve(int arr[],int size){
  cout<<"size of this array"<<sizeof(arr);
}
void solve2(int *arr,int size){
//  cout<<"size of this array "<<sizeof(arr);
//    cout<<arr<<endl;
//    very very important
//    cout<<&arr<<endl;
   
        *arr=*arr+1;
    
}
void solve(int* p){
    *p=*p+5;
}
void solve1(int* &p){
    p=p+5;
}
int main() {
  // pointer 2
    
    int a =5;
    int* p=&a;
    cout<<p<<endl;
    cout<<&p<<endl;
    cout<<*p<<endl;
    solve1(p);
    cout<<p<<endl;
    cout<<&p<<endl;
    cout<<*p<<endl;
//
//    int a =10;
//    int* p=&a;
//    int* q =&a;
//    pointer to a pointer
//    int a=5;
//    int* ptr=&a;
//    int** ptr2=&ptr;
//    cout<<a<<endl;
//    cout<<&a<<endl;
//    cout<<ptr<<endl;
//    cout<<&ptr<<endl;
//    cout<<*ptr<<endl;
//    cout<<ptr2<<endl;
//    cout<<&ptr2<<endl;
//    cout<<*ptr2<<endl;
//
//
//
//    int arr[5]={10,20,30};
////    cout<<arr<<endl;
////    cout<<&arr<<endl;
////    int size =3;
//    int size =3;
//    solve2(arr,size);
////    
//    for(int i=0;i<3;i++){
//        cout<<arr[i]<<" ";
//    }
//  int arr[5]={1,2,3,4,5};
//    int size=5;
////  cout<<"Size of arr "<<sizeof(arr);
//    cout<<endl;
//    solve(arr,size);
  // int arr[]={10,20,30,40};
  // int size=4;
  // cout<<sizeof(arr);
  // solve(arr,4);
  
//   int arr[5]={1,2,3,4,5};
//   int (*ptr)[5]=&arr;
//   // int *ptr1=arr;
// for(int i=0;i<5;i++){
//   cout<<(*ptr)[i]<<endl;
// }

  // int a=5;
  // int *ptr=&a;
//    int arr[5]={1,2,3,4,5};
//      cout<<"Size of arr"<<sizeof(arr);
      // int arr[]={10,20,30,40};
      // int size=4;
      // cout<<sizeof(arr);
      // solve(arr,4);
      
    //   int arr[5]={1,2,3,4,5};
    //   int (*ptr)[5]=&arr;
    //   // int *ptr1=arr;
    // for(int i=0;i<5;i++){
    //   cout<<(*ptr)[i]<<endl;
    // }

      // int a=5;
      // int *ptr=&a;
  
}
