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
void problem4();
void problem5();
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
            case 4:
                problem4();
                break;
            case 5:
                problem5();
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
    cout<<"Type 2 for Problem 9.5\n";
    cout<<"Type 3 for Problem 9.6\n";
    cout<<"Type 4 for Problem 9.7\n";
    cout<<"Type 5 for Problem 9.8\n";
    cout<<"Type 6 to exit\n";
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

//Problem 9.5
void problem2()
{
    
}

//Problem 9.6
void problem3()
{
    cout<<"What one line of code would need to be modified in the bubble sort"
            " to make it sort in descending, rather than ascending order? "
            "How would the revised line be written?\n";
    cout<<"The line that needs to be modified is line 46 which should be "
            "changed to 'if(array[index]>minValue'.\n\n";
}

//Problem 9.7
void problem4()
{
    cout<<"After one pass of bubble sort, which value is in order?\n";
    cout<<"The unsorted values are: 7 2 3 8 9 1\n";
    cout<<"After 1 pass: 1 7 3 8 9 2\n";
    cout<<"The 1 and 3 will be in the correct spot.\n\n";
}

//Problem 9.8
void problem5()
{
    cout<<"After one pass of selection sort, which value is in order?\n";
    cout<<"The unsorted values are: 5 7 2 8 9 1\n";
    cout<<"After 1 pass: 1 7 2 8 9 5\n";
    cout<<"The 1 will be in the correct spot.\n\n";
}

void def(int inN)
{
    cout<<"You entered "<<inN<<" to exit the program"<<endl;
} 