// #include <iostream>
// using namespace std;

// int main(){

//     int a = 10;
//     int *p = &a;

//      cout<< &p<< endl;

//     return 0;
// }

#include <iostream>
using  namespace std  ;

// int main (){
//     int x=12 ;
//     int *p= &x ;
//     cout<< p << endl ;
//     cout<< &p << endl ;
//     cout<< *p<<endl ;

// }

// int main  (){

//      int a=5  , b= 4  ;

//      cout<< a<< " "<<b ;
//      int *p=&a ;

//      int *p2= &b ;

//      int temp =*p ;
//      *p=*p2 ;
//      *p2=temp ;

//      cout<< a<< " "<< b ;
// }

// Update using pointer to pointer

int main (){
  int x= 4 ;
  int *p=&x ;

  int **pp= &p ;
  **pp=25 ;

  cout<< x ;

return 0 ;


}