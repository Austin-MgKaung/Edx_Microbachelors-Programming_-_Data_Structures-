#include<iostream>
#include<string>
using namespace std;
class ShowTicket 
{
    public:
        bool sold_flag;
        string row;
        string seat_num;
    public :
        ShowTicket(string c_row,string c_seat_num)
        {
            row = c_row;
            seat_num = c_seat_num;
            sold_flag = false;
        }
        void sell_seat()
        {
            sold_flag = true;
        }
        bool is_sold()
        {
            if (sold_flag)
                return true;
            else
                return false;
        }
        virtual string print_ticket()
        {
            if (sold_flag)
                return (row +" " + seat_num + " sold");
            else
               return (row +" " + seat_num + " available");

        }

};