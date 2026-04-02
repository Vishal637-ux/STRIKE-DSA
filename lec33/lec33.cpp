#include<iostream>
using namespace std;

void print(int arr[], int index, int last){
    // Base condition
    if(index == last)
        return;

    // Print current element
    cout << arr[index] << endl;

    // Recursive call
    print(arr, index + 1, last);
}

int main(){
    int arr[10] = {2,3,4,1,5,9,7,8,10,21};
    print(arr, 0, 10);
    return 0;
}

// print in reverse order logic 

// how 