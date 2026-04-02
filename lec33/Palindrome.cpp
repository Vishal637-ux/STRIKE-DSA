// bool isPalindrome(string s, int start, int end) {
//     if(start >= end)
//         return true;        

//     if(s[start] != s[end])
//         return false;

//     return isPalindrome(s, start + 1, end - 1);
// }

//  SUBSET  OF THE ARRAY 
// USING FIRST THOUTH PRINCIPLE 


// //  LIBRARY 
// #include <iostream>
// #include<vector>

// using namespace std ;
    
// void printAllSubset( vector<int>&nums,vector<int>&ans, int i){
// //  maine kya socha ki 1st arra ko recieve karunga 
// //  second ek aisa array banata hu jisme ye array store ho jaye 
// //  ek poiter banata hu jo ki  index++
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      
// // now  recursion base case dimag me aya 
//  if(i=nums.size()){
// //  agar i===size 
// //  first thought ki last  me aa gaye krishna 
// // jo array me hai print kara do 
//     for(int val: ans){
// //  sub set ko print kara diya 
//         cout<<val<<" " ;

//     };
//     cout<<endl;
//     return ; 
//  }

// // ##         include ///
// // first thought  muje ans ke andar vlaue dalni hogi 
// //  matlab index 0 ko answer me dalo {1}
// ans.push_back(nums[i]);
// printAllSubset(nums, ans, i+1)


// // ## exclude karna hoga /// how 

// // firsth thought  
// // ans ko store nhi krn HAI MATLABL USSE REMOVE KARN AHI 
// ans.pop_back(); //  isse backtraching kahate hai 
// printAllSubset(nums,ans,i)
// // ab print krna  without include vale 

    
// }

// int main() 
// { 
// //  first though ki muje ek array chiye 
// // jispe mai operation  kr saku 


// vector<int>arr ={1,2,3};
// vector<int>ans;   // to store 
// // ab isko as  function bhejunga  
// // then  o uper jayega 

// printAllSubset( arr, ans, 0)
// // first  thought arr pass krat hu
// // ass ab ans bhi pass krn  hoga
// // index bhi 
// return 0;


// }


#include <iostream>
#include <vector>
using namespace std;

void printAllSubset(vector<int>& nums, vector<int>& ans, int i){

    if(i == nums.size()){
        for(int val : ans){
            cout << val << " ";
        }
        cout << endl;
        return;
    }

    // include
    ans.push_back(nums[i]);
    printAllSubset(nums, ans, i+1);

    // backtrack
    ans.pop_back();

    // exclude
    printAllSubset(nums, ans, i+1);
}

int main(){

    vector<int> arr = {1,2,3};
    vector<int> ans;

    printAllSubset(arr, ans, 0);

    return 0;
}