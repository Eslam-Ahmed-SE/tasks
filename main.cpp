#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    start :

system ("cls") ;

cout << "**NOTE : to exit enter 0 in all of the numbers" ;

double n1, n2 ;
cout << "\n\n  input the first number  :" ;
cin >> n1 ;
cout << "  input the second number :" ;
cin >> n2 ;

if ((n1!=0) && (n2!=0)) {

double a, s, m, d, md ;
a = n1+n2 ;
s = n1-n2 ;
m = n1*n2 ;
d = n1/n2 ;
//md = n1%n2 ;

cout << "\n  addition operation (n1+n2)       = " << a << "\n  subtraction operation (n1-n2)    = " << s << "\n  multiplication operation (n1*n2) = " << m << "\n  division operation (n1/n2)       = " << d /*<< "\n  modulus (n1%n2) = " << md*/ << "\n\n" << "\t\t\t\t\t\t\t\t\t\t\tEslam Ahmed Samir - Sec#3\n\n" ;

system ("pause") ;
goto start ;

}

else {
    return 0;
}

}
