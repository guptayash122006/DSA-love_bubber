// #include<iostream>
// using namespace std ;

// int merge(int arr1[] , int n , int arr2[] , int m , int arr3[]) {

//     int i= 0 , j=0 ;
//     int k= 0 ;

//     while(i<n && j<m) {
//         if(arr1[i] < arr2[j]) {
//             arr3[k++] = arr1[i++] ;
         
//         }
//         else{
//             arr3[k++] = arr2[j++] ;


//         }
//     }

//     // copy ker do array k element ko 
//     while(i<n ) {
//         arr3[k++] = arr1[i++] ;

//     }

//     // copy ker do array k element ko
//     while(j<m) {
//         arr3[k++] = arr2[i++] ;
//     }

// }
//     void print(int ans[] , int x) {
//         for(int i=0 ; i<x ; i++) {
//             cout<< ans[i] << " " ;
//         }
//         cout<<endl ;
//     }


// int main () {

//     int arr1[5] = {1,2,3,7,8} ;
//     int arr2[3] = {2,4,6} ;

//     int arr3[8] = {0} ;


//     merge(arr1 , 5 ,arr2 , 3, arr3) ;

//     print(arr3, 8) ;

//     return 0 ;

// }



#include<iostream>
using namespace std ;

int merge(int arr1[] , int n , int arr2[] , int m ) {

    int i= 0 , j=0 ;


    while(i<n && j<m) {
        if(arr1[i] < arr2[j]) {
            arr1[i++] ;
         
        }
        else{
            arr1[i++] = arr2[j++] ;


        }
    }

    
} 

 void print(int ans[] , int x) {
        for(int i=0 ; i<x ; i++) {
            cout<< ans[i] << " " ;
        }
        cout<<endl ;
    }

int main () {

    int arr1[6] = {1,5,3,0,0,0} ;
    int arr2[3] = {2,5,6} ;

   


    merge(arr1 , 6 ,arr2 , 3 ) ;

   print(arr1 ,9) ;

    return 0 ;

}