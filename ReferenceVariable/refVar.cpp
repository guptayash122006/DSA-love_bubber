#include<iostream>
using namespace std ;

// int& func(int a) {
//     int num = a ;
//     int& ans = num ;
   
//     return ans ;
// }      this one is a bad practice for reference var

int* fun(int n ) {
    int* ptr = &n ;
    return ptr ;
}

void update2(int& n ) {
    n++ ;
}

void update(int n ) {
    n++ ;
}


int main () {

// int i = 5 ;
// // create a ref variable 

// int &j = i ;

// cout<< i << endl ;
// i++;
// cout<< j << endl ;
// j++ ;
// cout<< i << endl ;
// cout<< j << endl ;

int n = 5 ;
cout<< "Before "<< n << endl ;
update2(n);
cout<<"After" << n << endl ;

cout<<fun(n) ;

}