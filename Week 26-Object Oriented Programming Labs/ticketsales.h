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

class SportTicket : public ShowTicket 
{
    public :
        bool beer_status ;
        SportTicket (string row, string seat): ShowTicket(row,seat)
        {
            sold_flag = false;
            beer_status = false;
        }
        void sell_beer()
        {
            beer_status = true;
        }
        bool beer_sold()
        {
            if (beer_status)
                return true;
            else
                return false;
        }
         string print_ticket()
        {
            if (sold_flag && beer_status)
                return (row +" " + seat_num + " sold "+ "beer");
            else if (sold_flag && !beer_status)
                return (row +" " + seat_num + " sold "+ "nobeer");
            else if (!sold_flag && beer_status)
                return (row +" " + seat_num+ " available");
            else if (!sold_flag && !beer_status)
               return (row +" " + seat_num + " available");
            else 
            return " ";

        }

};
class  TicketSales 
{
    public:
        TicketSales() {}
        string print_ticket( ShowTicket *myticket)
        {
            return myticket->print_ticket();
        }

};

