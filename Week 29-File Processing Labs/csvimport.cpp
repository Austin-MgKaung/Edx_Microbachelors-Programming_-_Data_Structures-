#include<iostream>
#include<string>
#include<fstream>
#include <vector>

using namespace std;

void csv_import(string data[][10],int columns,int * records,string filename);

/*
int main ()
{
    int records;
    string data[10][10];
    csv_import(data,4,&records,"customers.csv");

    //cout<<data[1][2]<<endl;
    cout<<records<<endl;
    for (int i = 0 ; i < records; i++)
    {
        for (int j= 0 ; j < 4 ; j++)
            cout<<data[i][j]<<endl;
    }
    //cout<<"HI";
    return 0;
}
*/
void csv_import(string data[][10],int columns,int * records,string filename)
{
    ifstream incsv;
    
    incsv.open(filename);
    while(!incsv)
    {
        incsv.clear();
        incsv.open(filename);
    }
    string temp;
    vector <string> f_data ;
    int i=0,k=0;
    //incsv.ignore(8,'@');
    while (getline(incsv,temp,','))
    {  
        if(temp.find("\n")==string::npos)
            f_data.push_back(temp);
        else
        {
            f_data.push_back(temp.substr(0,temp.find("\n")));
            f_data.push_back(temp.substr(temp.find("\n")+1));
        }
    }

    for (string s_data : f_data)
    {
        if (k>columns-1)
        {
            i++;
            k=0;
        }
        //cout<<i<<" "<<k<<endl;
        if (s_data != "\n");
            data[i][k] = s_data;
        //cout<<data[i][k]<<endl;
        k++;
    }

    *records = i+1;
}
