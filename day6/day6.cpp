// #include <iostream>
// using namespace std;

// int  factorial(int n) {
//     long long fact = 1;

//     if (n == 0) {
//         cout << "Factorial = 1" << endl;
//     } 
//     else {
//         for (int i = 1; i <= n; i++) {
//             fact = fact * i;
            
        
//         }
//         // cout << "Factorial = " << fact << endl;
//          return fact ;

//     }

   
// }

// int main() {
//     int num1 = 5;
//      int num2=6;

//       int answer1= factorial(num1);
//       int answer2= factorial(num2);

//           cout<< answer1<< endl;
//              cout<< answer2<< endl;


//     return 0;
// }
  




// #include <iostream>
// using namespace std;


//  int  student ( int mark){
//  if (mark  >=90)
// {
//  return A++;

// }    

// else if( mark>80    &&  mark<90 )
// {

//   return B++;

// }
// else {


//  return C;
// }

 


//  }
 


//  int main (){


//  int  s1= 90;
//  int s2=70;
//  int s3=60;


//      cout<< student(s1)<<endl;
//         cout<< student(s2)<<endl;
//             cout<< student(s3)<<endl;

//  return 0;


//  }




//   youtube thub nell 



//  # include <iostream>

// using namespace std ;



 
//  void youtube (   string p ,  string tl , int v ){


//          cout<< p<<"photo"<<" ";
//          cout<< tl<<"tittle"<<" ";
//          cout<< v<<"views"<<" ";

  
//   cout<< endl ;


//  }





//   int main (){

//   string  p1="photo1" , title1= "title1" , p2="photo2" , title2="title2" ,  p3="photo3" , title3= "title3"  ;

    
//     int  v1= 444, v2= 44,v3=400  ;



//       youtube (p1, title1, v1);
//       youtube (p2, title2, v2);
//      youtube (p3, title3, v3);



//     return 0;



    

       




//   }


//   square of any number


// # include   <iostream>
// using namespace std ;


//  int  square(int n )
// {


//     return n*n;

// }


// int main  (){

//         int num1= 67;
//           int num2=3;
//        int output1=  square(num1);
//            int output2=  square(num2);

//        cout<< output1<<endl;
//           cout<< output2<<endl;


// }



// function overloading 
//   name of the  function is same but value  is diifernt  paremeter ;



// # include <iostream>


// using namespace   std ;



//  int sum ( int a , int b )
// {

//  return a+b ;

// }


// int sum ( int a , int b, int c )
// {

//  return a+b + c;

// }

//   float sum ( float a  , float b){


//     return  a+b;
//   }


//  int main(){


//   int k=2 , j= 9  , l=34;
//  float v=19.3 , v2= 23.4;

   


//    cout<<  sum (k, j)<<" ";

//    cout<<  sum ( k , j , l )<<" ";


//    cout<<sum (  v , v2)<< " ";

//  return 0;
        






//  }
 
//   prime number 
// #include <iostream>
// using namespace std ;


// void  prime  (int num ){

    
  
//   //   if number less than 2 

//   if(num<2){


//     cout<<" number is not  prime ";

//   }


//   else if(num==2){

// cout<< " number is prime";


//   } 
//   else {
   
//       for(int i=2 ;  i<num ; i++){


//        if(num%i==0){
//         cout<<" no. is not prime " ;

//       }
//       else {



//         cout<< " no  is prime";
//       }


//   }
// }

// }


//  int main (){


//  int n=3  , n1=4;



//  prime(n);
//  prime (n1);




//  }


//  prime number second optimize 

// #include <iostream>
// using namespace std ;


//  int  prime  (int num){


//       if(num<2)
// {

//   cout<<num<< " no. is not prime \n";

//   return   0;
// }

// else {


//        for (int i=2 ; i<num; i++){
//   if(num%i==0){
//         cout<< " no. is not prime ";
//         return 0;
//        }
             
// else  {

//      cout<<"  no. is prime ";

// }
//       }

// }

//  }


 
//  int main (){


//  int n=3  , n1=4;



//  prime(n);
//  prime (n1);




//  }



 


// #include <iostream>
// using namespace std ;


//  int  prime  (int num){


//       if(num<2)
// {

//   cout<<num<< " no. is not prime \n";

//   return   0;
// }

// else {


//        for (int i=2 ; i<num; i++){
//   if(num%i==0){
//         cout<< " no. is not prime ";
//         return 0;
//        }
             

//       }

// }
// else  {

//      cout<<"  no. is prime ";

// }

//  }


// #include <iostream>
// using namespace std;

// void prime(int num) {

//     if (num < 2) {
//         cout << num << " is not prime\n";
//         return;
//     }

//     for (int i = 2; i < num; i++) {
//         if (num % i == 0) {
//             cout << num << " is not prime\n";
//             return;
//         }
//     }

//     // runs only if loop completes
//     cout << num << " is prime\n";
// }






 
//  int main (){


//  int n=3  , n1=4;



//  prime(n);
//  prime (n1);




//  }



// #include <iostream>


// using namespace std ;


// void  swap (int a , int b , int c){


//      int d=c;
//      c=b;
//      b=c;
//      c=d;





// }


//  int main (){

//      int n1=2 , n2=3 , n3=4 ;


//       swap(n1);
//        swap(n2);
//         swap(n3);
     

// return 0;


//  }





#include <iostream>


using namespace std ;



 int  main (){

//  number of line 
      for (int i=1 ; i<=5; i++){

//  number of spaces 
         for (int j=1; j<=)     

      }

     //   number of star 

     for (int k= 1 ; k<=i*2; k++){

          cout<<"*";

     }


     for (int j=1; j=5-i; j++ ){

          cout<<" ";
     }




 }
 