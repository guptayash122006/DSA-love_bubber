// #include<iostream>
// using namespace std ;

// int binarySearch(int arr[] ,int size , int key) {
//     int start = 0 ;
//     int end = size-1 ;

//     int mid = start+(end-start)/2 ; 
//     while(start <= end) {
//         if(arr[mid] == key) {
//             return mid ;
//         }
//         // go to right part
//         if(key > arr[mid]) {
//             start = mid +1 ;
//         }
//         else{
//             end = mid -1 ;
//         }
//         mid = start + (end-start)/2;
//     }
//     return -1 ;
// }

// int main() {

//     int even[6] = {2,4,6,8,10,12} ;
//     int odd[5] = {3,6,9,12,15} ;

//     int index = binarySearch(even , 6 , 19) ;
//     cout<<"Enter the even 19 index are:" << index <<endl ;
    
//      index = binarySearch(odd , 5 , 9) ;
//     cout<<"Enter the even 9 index are:" << index ;
    
// }


// First and last position of the element in sorted array

#include<iostream>
using namespace std ;

int Binary_Function_left(int arr[] , int size , int key) {
    int s = 0;
    int e = size -1 ;
    int ans = -1 ;

    int mid = s + (e-s)/2 ;

    while(s <= e) {
        if(arr[mid] == key) {
                ans = mid ;  // for left occurence 
                e = mid-1 ;
        }
        else if(arr[mid] < key) {
                s = mid+1 ;   // mid are move to right 

        }
        else if(arr[mid] > key) {
                e = mid -1 ;
        }
        mid = s+(e-s)/2 ;
    } 
    return ans ;
}

    int Binary_Function_right(int arr[] , int size , int key) {
    int s = 0;
    int e = size -1 ;
    int ans = -1 ;

    int mid = s + (e-s)/2 ;
    while(s <= e) {
        if(arr[mid] == key) {
                ans = mid ;  // for right occurence 
                s = mid+1 ;
        }
        else if(arr[mid] < key) {
                s = mid+1 ;   // mid are move to right 

        }
        else if(arr[mid] > key) {
                e = mid -1 ;
        }
        mid = s+(e-s)/2 ;
    }
        return ans ;
}

int main () {

    int arr[9] = {1,2,3,3,3,3,3,5,7} ;

    int index = Binary_Function_left(arr ,9 ,3) ;
    cout<<"the occurence of 3 the left index are:" <<index<<endl ;

        index = Binary_Function_right(arr ,9 ,3) ;
    cout<<"the occurence of 3 the right index are:" <<index ;



}