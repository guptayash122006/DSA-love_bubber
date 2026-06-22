#include<iostream>
using namespace std ;

bool isPresent(int arr[][4] , int target , int row ,int col) {
    for(int i=0 ;i<3 ; i++) {
    for(int j=0 ; j<4 ; j++) {
       if(arr[i][j]== target)  {
        return 1 ;
       }
    }

}
        return 0 ;
}
// void printSum(int arr[][4] , int row , int col){
//    cout<<"Printing Sum" <<endl ;
//     for(int j=0 ; j<4 ; j++) {
//         int sum =0 ;
//         for(int i=0 ;i<3 ; i++) {
//             sum+= arr[i][j] ;
//         }
//         cout<<sum<<" " ;
//     }
// }

void printSum(int arr[][4] , int row , int col){
   cout<<"Printing Sum" <<endl ;
    for(int i=0 ; i<3 ; i++) {
        int sum =0 ;
        for(int j=0 ;j<4 ; j++) {
            sum+= arr[i][j] ;
        }
        cout<<sum<<" " ;
    }
}

int largestRowSum(int arr[][4] , int row , int col) {
    int maxi = INT8_MIN ;
    int rowIndex = -1; 
    for(int i=0 ; i<3 ; i++) {
        int sum=0 ;
        for(int j=0 ; j<4 ; j++) {
            sum += arr[i][j] ;
        }
        if(sum > maxi) {
            maxi = sum ;
            rowIndex = i ;
        }
    }
    cout<<"the maximum sum is"<<maxi <<endl ;
    return rowIndex ;
}
int main () {

    // create 2d array
// int arr[3][4] = {1 ,2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12} ;
// int arr[3][4] = {{1 ,11, 111, 1111}, {2, 22, 222, 2222}, {3, 33, 333, 3333}} ;
 int arr[3][4] ;
// taking input // row wise
cout<<"Enter the element :"<<endl ;
for(int i=0 ; i<3 ; i++) {
    for(int j=0 ; j<4 ; j++) {
        cin >> arr[i][j]  ;
    }

}

// taking input // col wise
// for(int i=0 ;i<4 ; i++) {
//     for(int j=0 ; j<3 ; j++) {
//         cin>> arr[j][i] ;
//     }

// }

// print
cout<<"Printing the array:"<<endl ;
for(int i=0 ; i<3 ; i++) {
    for(int j=0 ; j<4 ; j++) {
        cout << arr[i][j] <<" " ;
    }
    cout<<endl ;
}

// cout<<"Enter the element to search:" <<endl ;
// int target ;
// cin>> target ;

// if(isPresent(arr,target,3,4)) {
//     cout<<"Element found"<<endl ;
// }
// else{
//     cout<<"Not found"<<endl ;
// }

printSum(arr ,3,4);
cout<<"Max Row is at index"<< largestRowSum(arr,3,4) <<endl ;
    return  0 ;
}