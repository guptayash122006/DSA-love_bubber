/*#include<iostream>
using namespace std ;

void reverse(string& str , int i  ) {
    int j = str.length() - i - 1 ;
    // base case 
    if(i > j ) {
        return ;
    }

    swap(str[i] , str[j]) ;
    i++ ;
    j-- ;

    // recursive call
    reverse(str , i+1) ;
}

int main () {

string name  = "YASH" ;

cout << name << endl ;

reverse(name , 0  ) ;

cout << name << endl ;

return 0 ;

} */

#include<iostream>
using namespace std ;

bool isPalindrome(string str , int i ) {

int j = str.length()- i - 1 ;
// base case 
if( i  >= j) {
    return true ;
}

// recursion
if(str[i] != str[j]) {
    return false ;
}

// recursive call 

else {
    return isPalindrome(str  , i+1 ) ;
}

}


int main () {

    string name = "abba" ;
    cout<< endl ;

   bool checkpalindrome = isPalindrome(name  , 0 ) ;

if(checkpalindrome) {
    cout << "it is a palindrome" << endl ;
}

else {
    cout << "not a palindrome" << endl;
}

return 0 ;
}