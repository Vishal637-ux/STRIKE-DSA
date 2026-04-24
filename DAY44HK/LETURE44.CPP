#include <iostream>
using namespace std ;




class Stack(){
   public:

   int arr[1000];
   int index;

   stack(){
    index=-1;
   }
void push (int val){
if (index==99){

    cout<<"STACK overflown \n";


}

else {
    index++ ;
    arr[index]=val;
    cout<<val<<"pushed into stack \n";
}
}
};


int main (){

    Stack s ;
    s.push(10);
}