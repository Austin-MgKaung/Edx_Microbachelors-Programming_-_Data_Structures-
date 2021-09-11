#include<iostream>
#include<string>
using namespace std;


class ShowTickets 
{

    private:
        int i = 0;
        const int size = 10 ;
        string * row= new string [size];
        string * seat = new string [size];
        bool sold_flag [10] = {false}; 

         int find_index(string u_row, string u_seat)
        {
            for (int j = 0 ; j< size ; j++)
            {
                if (row[j] == u_row && seat[j] == u_seat )
                {
                   // cout<<"OK"<<endl;
                    return j;
                }
                    
                else
                {
                   // cout<<" NOT OK"<<endl;
                    return -1;
                }
            }
        }
        void create_place(string c_row,string c_seat_num)
        {
            if( i <  10 )
            {   row[i] = c_row;
                seat[i] = c_seat_num;
                //cout<<row[i]<<" "<<seat[i]<<" "<<i<<endl;
                i++;
            }
        }
    public :
        ShowTickets() 
        {
            for (int j = 0 ; j< size ; j++)
            {
                row[j]="kmt";
                seat[j]="kmt";
            }
        }
        ~ShowTickets()
        {
            delete [] row;
            delete [] seat;
        }
        void sell_seat(string row ,string seat)
        {
            if (find_index(row,seat) == -1)
                create_place(row,seat);
            sold_flag[find_index(row,seat)] = true;
        }
        bool is_sold(string row ,string seat)
        {
            if (find_index(row,seat) == -1)
                create_place(row,seat);
            if (sold_flag[find_index(row,seat)])
                return true;
            else
                return false;
        }
        string print_ticket(string row, string seat)
        {   
            if (find_index(row,seat) == -1)
                create_place(row,seat);
            if (is_sold(row,seat))
            {
               // cout<<sold_flag[find_index(row,seat)]<<endl;
                return (row +" " + seat+ " sold");
            }
            else
            {
                //cout<<sold_flag[find_index(row,seat)]<<endl;
                return (row +" " + seat + " available");
            }
              

        }

};