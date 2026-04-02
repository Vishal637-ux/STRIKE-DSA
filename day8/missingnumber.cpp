#include <iostream>


using namespace std ;


// using first way 


// logic 

 void missingnumber(){

for ( int j=1; j<6; j++)
        for(int i= 0 ; i<5; i++){

                if (arr[i]<arr[j]){

                    return arr[j];
                }
                       
                     
        


        }

     



 }


 int main (){

    int arr[5]={1,2,3,4,6};

    missingnumber(arr, 5)


}