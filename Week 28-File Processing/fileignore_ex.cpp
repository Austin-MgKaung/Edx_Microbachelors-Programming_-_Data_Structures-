#include<iostream>
#include<string>
#include<fstream>
#include<vector>

using namespace std;

void openInputFile (ifstream & inFile);


int main()
{
    ifstream inFile;
    vector <char> c;
    openInputFile(inFile);
    char temp;
    while(inFile>>temp)
    {
        c.push_back(temp);
    }

    for (char i : c)
    {
        if(i==".")
            {
                inFile.ignore(20,".");
            }
    }

    

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
