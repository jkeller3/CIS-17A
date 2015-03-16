#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

vector<int> obtainValues();
//Obtain values via vector since it is unknown how many numbers will be input.
void outputArray(int num[], int size); 
//Simple array output
void sort(int num[], int size); 
//Uses bubble sort to sort from least to most.
void mean(int num[], int size);
//Finds the mean, or average of the array.
void median(int num[], int size);
//Finds the median, or middle number(s) of the array
void findMode(int num[], int size);
//Searches for the most repeating number(s) of the array
int findMaxRepeat(int num[], int size);
//Searches for the highest frequency of repeating numbers.
int findModeCount(int num[], int size, int maxRepeat);
//Finds the amount of numbers that reach the highest frequency.
void displayMode(int num[], int size);
//Displays the output for the mode.


int main(int argc, char** argv) {
    
    vector<int>numbers = obtainValues();
    int size = numbers.size();
    int *array = numbers.data();
    outputArray(array,size);
    sort(array,size);
    outputArray(array,size);
    mean(array,size);
    median(array,size);
    findMode(array,size);
    array = new int;
    delete array;
    array = NULL;

    return 0;
}

vector<int> obtainValues()
{
    vector<int>numbers;
    int input = 0;
    cout<<"Enter as many numbers as you would like.\n";
    cout<<"Enter -1 when you would like to stop.\n";
    do{
        cin>>input;
        if(input!=-1)
        {
            numbers.push_back(input);
        }    
    }while(input!=-1);
    return numbers;
}

//Outputs the values in the array.
void outputArray(int num[], int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<num[i]<<" ";
    }
    cout<<endl;
}

//Bubble sort. Lowest to highest number.
void sort(int num[], int size)
{
    int i, j, flag = 1;
    int temp;
    for(i = 1; (i <= size) && flag; i++)
    {
        flag = 0;
        for (j=0; j < (size -1); j++)
        {
            if (num[j+1] < num[j])
            {
                temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
                flag = 1;
            }
        }
    }
    return;
}

void mean(int num[], int size)
{
    int sum = 0;
    for(int i=0; i<size; i++)
    {
        sum+=num[i];
    }
    float mean = sum/static_cast<float>(size);
    cout<<"The mean is: "<<mean<<".\n";
}

void median(int num[], int size)
{
    float median=0;
    if(size%2==1)
    {
        median=num[size/2];
        cout<<"The median is: "<<median<<".\n";
    }
    if(size%2==0)
    {
        median=(num[size/2]+num[(size/2)-1])/static_cast<float>(2);
        cout<<"The median is: "<<median<<".\n";
    }
}

void findMode(int num[], int size)
{
    int maxRepeat = findMaxRepeat(num, size); 
    //Finds highest frequency of repeating numbers
    if(maxRepeat==1)//If highest frequency is 1, quits searching here.
    {
        displayMode(0,0);
        return;
    }
    int modeCount = findModeCount(num, size, maxRepeat);
    //Finds the amount of numbers that reach the highest frequency of repeats.
    int mode[modeCount-1];
    //Inserts the amount of modes there are.
    modeCount=0;
    int repeat=1;
    int number=num[0];
    for(int i=1; i<=size; i++)
    {
        if(num[i] == number)
        {
            repeat++;
        }
        else
        {
            if(repeat == maxRepeat)
            //Places the modes inside the mode array.
            {
                mode[modeCount]=number;
                modeCount++;
            }
            repeat = 1;
            number = num[i];
        }
    }
    displayMode(mode, modeCount);    
    //Outputs the results of the mode search.
}

//Searches for the highest frequency of repeating numbers
int findMaxRepeat(int num[], int size)
{
    int number = num[0];
    int repeat = 1;
    int maxRepeat = 1;
    for (int i=1; i<=size; i++)
    {
        if(num[i] == number)
        {
            repeat++;
        }
        else
        {
            if(repeat>maxRepeat)
            {
                maxRepeat=repeat;
            }
            repeat = 1;
            number = num[i];
        }
    }
    return maxRepeat;
}

//Checks to see how many numbers reach the max frequency
int findModeCount(int num[], int size, int maxRepeat)
{
    int modeCount = 0;
    int repeat = 1;
    int number = num[0];
    for (int i=1; i<=size; i++)
    {
        if(num[i] == number)
        {
            repeat++;
        }
        else
        {
            if(repeat == maxRepeat)
            {
                modeCount++;
            }
            repeat = 1;
            number = num[i];
        }
    }
    return modeCount;
}

void displayMode(int array[], int size)
{
    if(size==0)
    {
        cout<<"There is no mode.\n";
    }
    else if(size==1)
    {
        cout<<"The mode is: "<<array[0]<<".\n";
    }
    else
    {
        cout<<"The modes are: ";
        outputArray(array, size);
    }
}