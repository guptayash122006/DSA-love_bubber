#include<iostream>
using namespace std ;

#define min(a,b) ((a)<(b) ? (a):(b)) 

int main () {

    int a=42 , b=32 ;

    cout<<"minimum:" <<min(a,b)<<endl ;
return 0;
}