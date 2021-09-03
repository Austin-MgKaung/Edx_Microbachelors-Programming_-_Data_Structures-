#include<iostream>
using namespace std;

const int MAX_CLASS_SIZE = 60;

int main()
{
    int numOfStudents;
    int gradeList[MAX_CLASS_SIZE];
    int currGrade;
    int ind,sum;
    double average;
    cout<<"Please enter the number of Students in class (no more than "<<MAX_CLASS_SIZE<<")"<<endl;
    cin>>numOfStudents;

    cout<<"Enter the Students' grades (separated by a place):"<<endl;

    //reading the grades
    for (ind = 0 ; ind < numOfStudents ; ind++)
    {
        cin>>currGrade;
        gradeList[ind] = currGrade;
    }

    //Calculate the average
    sum = 0;
    for (ind = 0 ; ind < numOfStudents; ind++)
    {
        sum += gradeList[ind];
    }

    average = (double)sum / (double)numOfStudents;
    cout<<"The class average is "<<average<<endl;

    //print grades above the average 
    cout<<"The grades above the average are ";
    for(ind = 0 ; ind < numOfStudents; ind++ )
    {
        if (gradeList[ind] > average)
        {
            cout<<gradeList[ind]<<" ";
        }
    }
    cout<<endl;
    return 0;
    
}