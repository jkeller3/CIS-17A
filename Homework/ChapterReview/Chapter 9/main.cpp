/* 
 * File:   main.cpp
 * Author: Joseph Keller
 *
 * Created on March 2, 2015, 3:36 PM
 */

#include <iostream>

using namespace std;

void menu();
int getN();
void problem1();
void problem2();
void problem3();
void def(int);

int main(int argc, char** argv) {
    int inN;
    do{
        menu();
        inN=getN();
        switch(inN){
            case 1:
                problem1();
                break;
            case 2:
                problem2();
                break;
            case 3:
                problem3();
                break;
            default:
                def(inN);
        }    
    }while(inN<4);

    return 0;
}

void menu()
{
    cout<<"Type 1 for Problem 9.2\n";
    cout<<"Type 2 for Problem 9.6\n";
    cout<<"Type 3 for Problem 9.7\n";
    cout<<"Type 4 to exit\n";
}

int getN()
{
    int inN;
    cin>>inN;
    return inN;
}

//Problem 9.2
void problem1()
{
    cout<<"On average, with an array of 20,000 elements, how many comparisons"
            " will the linear search perform? (Assume the items being search "
            "for are consistently found in the array.)\n";
}

//Problem 9.6
void problem2()
{
    cout<<"What one line of code would need to be modified in the bubble sort"
            " to make it sort in descending, rather than ascending order? "
            "How would the revised line be written?\n";
    cout<<"The line that needs to be modified is line 46 which should be "
            "changed to 'if(array[index]>minValue'.\n\n";
}

//Problem 9.7
void problem3()
{
    cout<<"After one pass of bubble sort, which value is in order?\n";
    cout<<"The value 1 will be in the right place.\n\n";
}

void def(int inN)
{
    cout<<"You entered "<<inN<<" to exit the program"<<endl;
} 