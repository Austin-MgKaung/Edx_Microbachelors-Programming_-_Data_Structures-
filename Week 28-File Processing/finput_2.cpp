#include<iostream>
#include<string>
#include<fstream>
#include<vector>

using namespace std;

void openInputFile (ifstream & inFile);

struct student{
    int id;
    double testscore;
    string name;
};

int main()
{
    ifstream inFile;
    openInputFile(inFile);
    vector <student> vs;
    student temp;

    while(inFile>>temp.id)
    {
        inFile>>temp.testscore;
        //inFile.ignore(9999,'\t');
        getline(inFile,temp.name);
        vs.push_back(temp);
    }
    cout<<"Students with test scores over 90:"<<endl;
    for(student s : vs)
    {   
        //cout<<s.testscore<<endl;
        //cout<<s.name<<endl;
        if(s.testscore > 90)
        {
            //cout<<"Hello";
            cout<<s.name<<endl;
        }
    }
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

