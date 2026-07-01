// #include<iostream>
// #include <climits>
// using namespace std ;

// int getMax(int num[] , int n) {
//     int maxi = INT_MIN ;
//     for(int i=0 ; i<n ; i++) {

//         maxi = max(maxi , num[i]) ;
//     // if(num[i] > max) {
//     //     max = num[i] ;
//     // }
// }
// // returnig the max value 
//     return maxi ;
// }  
// int getMin(int num[] , int n) {
//     int mini = INT_MAX ;
//     for(int i=0 ; i<n ; i++) {
//         mini = min(mini , num[i]) ;
//     // if(num[i] < min) {
//     //     min = num[i] ;
//     // }
// }
// // returnig the min value 
//     return mini ;
// }  
// int main () {  
    
//     int size ;
//     cin >> size ;
//     int num[100] ;
//     // taking input 
//     for(int i=0 ; i<size ; i++) {
//         cin >> num[i] ;
//     }
//     cout<< "Maximum value is :" << getMax(num , size) << endl ;
//     cout<< "minimum value is :" << getMin(num , size) << endl ;
// }


// for a sum of array


// #include<iostream>
// using namespace std ;

//            int  Array_sum(int num[] , int n) {
//             int sum = 0 ;
//             for (int i=0  ; i<n ; i++) {
//                     sum  = sum + i ;
//             }
//             return sum ;
//            }

// int main () {

      
//     int size ;
//     cin>> size ;

//     int num[100] ;
//     // taking input
//     for(int i=0 ; i< size ; i++) {
//         cin >> num[i] ;

//     }
//     cout << "enter the sum of the array :" << Array_sum(num , size) ;
// }

// linear search 

// #include <iostream>
// using namespace std ;

//    int search (int arr[] , int size , int key) {
//     for (int i=0 ; i<size ; i++) {
//     if (arr[i] == key ) {
//         return 1;
//     }
// }
//     return 0 ;
//    }


// int main () {
 
//      int arr[7] = {1 , 2 ,3 ,  2 ,-12 ,34 ,23,} ;

//      cout<<" enter the element to search for :" << endl ;
//      int key ;
//      cin >> key ;

//      bool found = search(arr , 7 , key ) ;

//      if (found ) {
//         cout << "Key is present" ;
    
//      }
//      else {
//        cout<< "Key is not present";
//      }
// }

// #include<iostream>
// using namespace std ;

// void reverse(int arr[] , int size) {
//         int start = 0  ;
//         int end = size-1 ;

//         while(start <= end){
//             swap(arr[start] , arr[end]);
//             start++ ;
//             end-- ;
//         }
// }

// int printArray(int arr[] , int size) {
//    for(int i=0 ; i<size ; i++) {
       
//     cout<< arr[i] << " " ;

//    }
//    cout<< endl ;
// }

// int main () {

//     int arr[6] = {23,32,1,24,2,90};
//     int brr[5] = {12,54,33,1,5} ;

//     reverse(arr , 6) ;
//     reverse(brr , 5);

//     printArray(arr , 6) ;
//     printArray(brr,5) ;

//     return 0 ;

// }

#include<iostream>
using namespace std ; 

void printArray(int arr[] , int size) {
    for(int i=0 ; i<size ; i++) {
        cout<< arr[i] << " " ;
    }
    cout<<endl ;
}

void swapAlternate(int arr[] , int size) {
    for(int i=0 ; i<size ; i+=2) {
        if(i+1 < size) {
            swap(arr[i] , arr[i+1]) ; 
        }
    } 
}

int main () {

    int arr[6] = {10,34,22,20,33,30} ;
    int brr[5] = {10,30,20,40,50} ;

    swapAlternate(arr , 6) ;
    swapAlternate(brr , 5)  ;


    printArray(arr, 6) ;
    printArray(brr , 5) ;

    return 0 ;
}