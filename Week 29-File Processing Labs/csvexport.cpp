#include<iostream>
#include<string>
#include<fstream>

using namespace std;

void csv_export(string data[][10],int reconds,int columns,string filename);

int main()
{
    string data[10][10] = {{"aspen","olmsted","aspen@pleasedonotemail.com"},{"sally","jones","sally@gmail.com"},{"fred","smith","fsmith@aol.com"}};

    csv_export(data,3,3,"customers.csv");
  
    return 0;  
}

void csv_export(string data[][10],int records,int columns,string filename)
{
    ofstream  outfile;//ofstream outfile("outfile.txt")
    outfile.open(filename,ios::out | ios::app);
    for(int i = 0; i < records ; i++)
    {
        for (int j = 0; j < columns ; j++)
        {
            if (j == columns-1)
                outfile<<data[i][j]<<"\n";
            else
                outfile<<data[i][j]<<",";
        }
    }

}