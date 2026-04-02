// #include<iostream>

//  using namespace std ;


//   int main (vector<int>){

    


//   };

// // User function Template for C++

// class Solution {
//   public:
//     void rotate(vector<int> &arr) {
//         // code here
        
//         // logic 
        
//         // 1 st last vale  element store karo 
        
//         int n = arr.size();
//        int   temp = arr[n-1];
         
//          for (int i=n-2; i>=0; i--){
             
//                 arr[i+1]=arr[i];
//                 // arr[i]=temp;
                
             
//          }
//         //   0 index ko last index
//          arr[0]=temp;
        
//     }
// };


// #include <iostream>


// using namespace std ;

//  void  rotate (int a[] , int n){

 
// //    stote last element 
//     int temp = a[n-1];
     
// //  shift all element to right by one 
//     for(  int i=n-2; i>=0; i-- ){

//            a[i+1]= a[i];
          
             
//     }

//      a[0]=temp;
// for(int i=0 ; i<n; i++){

//   cout<< a[i]<<" ";
// }




  



//  }


//  int main (){


//    int arr[5]= {  1,2,3,4,5};

//    rotate( arr , 5 );
   

//  }




// #include <iostream>


// using namespace std ;

//   void second(int a [], int n ){

//   //   find largest 
//   int largest= a[0];
   

//    for (int i=1 ; i<5; i++){

//            if(a[i]>largest)
//            {largest=a[i];}

      
//            }
          

//       //  secondlargest 

//     int second_largest=-1;

//     for(int i=0; i<5 ;i++ ){


//  if( a[i]==largest){

//   continue;
//  }

//  else if(a[i]>second_largest)

//   second_largest= arr[i];

//     }

//   cout<<second_largest;

//    }





// int main (){

//   int arr[5]={  1,2,3,4,5};
  

//   second(arr, 5);


// }


// sum of unique element 

// #include <iostream>

// using namespace std ;


//  unique(int a, int n){

//       // logic 
//        int freq[5]={0};

//       for(int i =0 ;i<5 ;i++){

         

//       } 



//  }


//  int main (){

//  int arr[5]={  2,4,5,2,6}

//   unique(arr , 5)
//  }