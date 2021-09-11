#include<iostream>
#include<string>
#include<fstream>
#include<vector>

using namespace std;

void openInputFile (ifstream & inFile);

int main()
{
    ifstream infile;
    openInputFile(infile);
    vector <int> v;
    int temp;

    while(infile>>temp)
    {
        v.push_back(temp);
    }

    double sum;
    for (int item : v)
        sum+=item;
    cout<<"The average of the integers in the file is: "<<sum/v.size()<<endl;
    
    return 0;
}

void openInputFile (ifstream & inFile)
{
    string filename;
    cout<<"What is Filename? ";
    cin>>filename;
    inFile.open(filename);
    while(!inFile)
    {
        cout<<"FILE FAILED TO OPEN!"<<endl;
        cout<<"What filename?";
        cin>>filename;
        inFile.clear();
        inFile.open(filename);
    }
}
