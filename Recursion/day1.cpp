// #include<iostream>
// using namespace std ;

// int factorial(int n) {
//     //base case 

//     if(n == 0) {
//         return 1 ;
//     }

//     // int smallestProblem = factorial(n-1) ;
//     // int biggestProblem = n * smallestProblem ;

//    // return biggestProblem ;
//         return n * factorial(n-1) ;

// }

// int main() {
// int n ;
// cin >> n ;

// int ans = factorial(n) ;

// cout << ans << endl;

// }




/*#include<iostream>
using namespace std ;

int power(int n) {
    //base case 

    if(n == 0) {
        return 1 ;
    }

    int smallestProblem = power(n-1) ;
    int biggestProblem = 2 * smallestProblem ;

return biggestProblem ;
        // return n * factorial(n-1) ;

}

int main() {
int n ;
cin >> n ;

int ans = power(n) ;

cout << ans << endl;

} */

#include<iostream>
using namespace std ;

void print(int n) {
    // base case 
    if(n == 0 ) {
        return  ;
    }

    cout << n << endl ;

    print(n-1) ;
}

int main () {

int n ;
cin >> n ;
cout << endl ;
print(n) ;

return 0 ;


}