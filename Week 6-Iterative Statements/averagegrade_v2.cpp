#include<iostream>
using namespace std;

int main()
{
    bool seenEndofInput;
    int sum, numofStudents;
    int curr;
    double average;

    cout<<"Enter the grades separated by a space"<<endl;
    cout<<"End the sequence by typing -1:"<<endl;
    sum = 0;
    numofStudents = 0;
    seenEndofInput = false;

    while (seenEndofInput == false)
    {
        cin>>curr;
        if(curr == -1)
        {
            seenEndofInput = true;
        }
        else
        {
            sum += curr;
            numofStudents++;
        }
    }
    average = (double)sum/(double)numofStudents;
    cout<<"The average is "<<average<<endl;

    return 0;
}