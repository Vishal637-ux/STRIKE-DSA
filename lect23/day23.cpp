#include <iostream>
#include <vector>
using namespace std;

int main () {

    int row ,col ;

    cout<< " enter the row" ;

    cin>> row ;

    cout<< " enter the number of colunm" ;
    cin>> col ;

    vector <vector<int>> A(row , vector<int>(col));
    vector <vector<int>>B(row , vector<int>(col));
    vector <vector<int>> C(row , vector<int>(col));


    //  INPUT MATRIX A 

    cout<< "\n Enter the elements of MATRIX A \n" ;
    for (int i=0 ; i< row ; i++){
        for (int j=0 ; j<col ; j++){

            cout<< "A["<< i <<"]<<["<<j<<"]=" ;

            cin>>A[i][j];
        }
    }
// Input Matrix B
    cout << "\nEnter elements of Matrix B:\n";
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            cout << "B[" << i << "][" << j << "] = ";
            cin >> B[i][j];
        }
    }

    // Brute force addition
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    // Print Result
    cout << "\nResultant Matrix (A + B):\n";
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
   return 0;

}