// #include<iostream>
// using namespace std ;

// bool isSorted(int *arr , int size) {
//     // base case 

//     if(size == 0 || size == 1) {
//         return true ;
//     }

//     if(arr[0] > arr[1]) {
//         return false ;
//     }

//     else{
//     return isSorted(arr+1 , size-1) ;
//     }

// }

// int main () {

// int arr[5] = {1,23,2,54,23} ;
// int size = 5 ;

// bool ans = isSorted(arr , size) ;

// if(ans) {
//     cout<<"Array is sorted" << endl ;
// }
// else{
//     cout<<"Array is not sorted"<< endl ;
// }

// return 0 ;
// }


// DAY 3 HOME WORK 

/*  include<iostream>
using namespace std ;

int arraySum(int *arr , int size) {
   if(size == 0) {
    return 0  ;
   }

   
    return arr[0] + arraySum(arr+1 , size-1) ;
   
    
}

int main () {

int sum = 0 ;
int arr[5] = {3} ;
int size = 5 ;

int ans = arraySum( arr ,  size) ;
cout<<"Sum is:"<< ans <<endl ;


} 
*/


/*#include<iostream>
using namespace std ;

bool linearSearch(int *arr , int size , int k) {
    // base case 

    if(size == 0) {
        return false ;
    }

    if(arr[0] == k) {
        return true ;
    }

    else {
        return linearSearch(arr+1 , size-1 , k) ;
    }
}

int main () {

int arr[5] = {1,2,3,4,5} ;
int size = 5 ;

int key = 10 ;

bool ans = linearSearch(arr , size , key) ;

if(ans) {
    cout<<"key h" << endl ;
}
else {
    cout<<"nahi h" << endl ;
}

}*/



#include<iostream>
using namespace std ;

void print(int arr[] , int s , int e) {
    for(int i=s ; i<=e ; i++) {
        cout << arr[i] << endl ;
    } cout << endl ;
}


int binarySearch(int *arr , int s , int e , int k) {

print(arr , s ,e ) ;
// base case
// element not found
if(s > e) {
    return false ;
}

int mid = s + (e-s) /2 ;

// element found
if(arr[mid] == k) {
    return true ;
}

if(arr[mid] < k) {
   return binarySearch(arr , mid+1 , e , k) ;
}

else {
    return binarySearch(arr , s , mid-1 , k) ;
}
}

int main () {

int arr[5] = { 12,23,44,17,90} ;
int size = 6 ;

int key = 90 ;

cout << " Present or not  " << binarySearch(arr , 0 , 5 , key) << endl ;



}