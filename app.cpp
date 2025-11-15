#include <iostream>
#include <vector>
#include <iterator>
#include <string>
using namespace std ;

int main() {
string x1, x2 ;

cout << "enter first name: " ;
getline(cin, x1) ;

cout << "enter second name: " ;
getline(cin, x2) ;

string result = x1 + x2 ;

cout << "concentrated string: " << result << endl ;



}