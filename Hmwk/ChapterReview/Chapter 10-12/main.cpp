/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on March 30, 2015, 2:37 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

void problem1();
void problem2();
void problem3();
void problem4();

int main(int argc, char** argv) {
    
    problem1();
    problem2();
    problem3();
    problem4();
    return 0;
}

//Problem 10.4
void problem1()
{
    int x=50, y=60, z=70;
    int *ptr;
    ptr=&x;
    *ptr *=10;
    ptr = &y;
    *ptr *=5;
    ptr = &z;
    *ptr *=2;
    cout<<x<<" "<<y<<" "<<z<<endl;
    cout<<"10.4) This is the output of the program in 10.4. The pointer takes "
            "in the values of xyz, and multiplies them by different amounts, "
            "changing the original values and outputting them.\n\n";
}

//Problem 10.6
void problem2()
{
    cout<<"10.6) Assume ptr is a pointer to an int and holds the address 12000."
            " On a system with 4-byte integers, what address will be in ptr "
            "after the following statement? 'ptr+=10;'\n";
    cout<<"-Since each int would take up 4 bytes, it would increase by "
            "4 for everyone 1 it adds. By adding 10, it would add 40. "
            "The address in ptr after the statement would be 12040.\n\n";
}

//Problem 11.9
void problem3()
{
    cout<<"11.9) Describe two scenarios in which memberwise assignment occurs."
            "\n";
    cout<<"-Memberwise assignment is used to assign one object to another, "
            "or to initialize one object with another object's data.\n\n";
}

//Problem 12.7
void problem4()
{
    const int LENGTH = 20;
    char iceCream[LENGTH];
    cout<<"12.7) What flavor of ice cream do you like best? ";
    cout<<"Chocolate, Vanilla, or Pralines and Pecan? ";
    cin.getline(iceCream,LENGTH);
    cout<<"Here is the number of fat grams for half ";
    cout<<"cup serving:\n";
    if(iceCream[0] == 'C' || iceCream[0] == 'c')
        cout<<"Chocolate: 9 fat grams.\n";
    else if(iceCream[0] == 'V' || iceCream[0] == 'v')
        cout<<"Vanilla: 10 fat grams.\n";
    else if(iceCream[0] == 'P' || iceCream[0] == 'p')
        cout<<"Pralines and Pecan: 14 fat grams.\n";
    else
        cout<<"That's not one of our flavors!\n";
}