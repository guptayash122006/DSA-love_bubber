#include<iostream>
using namespace std ;

int pro = 5 ;

void a(int& i){

    cout<<i<<endl;
    b(i) ;
        cout<<pro<<endl;

}

void b(int& i){
    cout<<i << endl; 
     cout<<pro<<endl;
}

int main() {

int i = 5;
a(i);
 cout<<pro<<endl;
return 0 ;

}