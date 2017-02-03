#include <iostream>
#include <string>
using namespace std;
// import std so that you print using cout instead std:: cout

#include <iomanip>
using std::setw;

double getProduct(double arr1[], double arr2[]){
    double localanswer = 0;
    for(int i =0; i< sizeof(arr1); i++){
        double clear = 0;
        clear = arr1[i]*arr2[i];
        localanswer += clear;
    }

    return localanswer;
}

int main() {

    double arrayOne[3] = {1.23, 3.45, 6.00};
    double arrayTwo[3] = {3.0, 6.0, 9.0};

    double answer = getProduct(arrayOne, arrayTwo);

    cout << answer <<::endl;

    return 0;
}




//    int n[ 10 ]; // n is an array of 10 integers
//
//    // initialize elements of array n to 0
//    for ( int i = 0; i < 10; i++ ) {
//        n[ i ] = i + 100; // set element at location i to i + 100
//    }
//
//    cout << "Element" << setw( 13 ) << "Value" << endl;
//
//    // output each array element's value
//    for ( int j = 0; j < 10; j++ ) {
//        cout << setw( 7 )<< j << setw( 13 ) << n[ j ] << endl;
//    }
