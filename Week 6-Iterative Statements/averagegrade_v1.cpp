#include<iostream>
using namespace std;


int main()
{
    int numofStudents;
    int count;
    int curr,sum;
    double average;

    cout<<"Please enter the number of students in class"<<endl;
    cin>>numofStudents;

    cout<<"Enter the students' grades(separate by a space)"<<endl;
    sum = 0;
    
    for(count = 1;count <= numofStudents;count++)
    {
        cin>>curr;
        sum+=curr;
    }
    average = (double)sum/(double)numofStudents;
    cout<<"The average is "<<average<<endl;

    return 0;
}