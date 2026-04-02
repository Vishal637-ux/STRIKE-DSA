#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

int main() {
    int arr[6] = {-1 , -2 , -3 , -4 , -5 ,-6};
    int n = 6;

    int maxsum = INT_MIN;

    for (int start = 0; start < n; start++) {
        int cusum = 0;

        for (int end = start; end < n; end++) {
            cusum = cusum + arr[end];
            maxsum = max(maxsum, cusum);
        }
    }

    cout << "max sum " << maxsum << endl;

    return 0;
}


// #include<iostream>

// using namespace std ;


// int   main  (){


//     int arr= { 2,4,5,5,66,6}  ;
     

//       int n=arr.size();
//       int currsum=0 ;
    
//       for( int start=0; start<n ; start++){

//             currsum=0 ; 

//             for(end=start; end<n ; end ++){

//                  currsum=currsum+end[start];
//                  maxsum=max(max , )
//             }



























      }


}