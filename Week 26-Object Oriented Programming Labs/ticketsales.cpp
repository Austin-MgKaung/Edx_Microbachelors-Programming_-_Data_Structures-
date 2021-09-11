#include<iostream>
#include<string>
#include "ticketsales.h"
using namespace std;

int main () {
  TicketSales ts;
  ShowTicket myticket1("AA","101");
  SportTicket myticket2("AA","102");
  SportTicket myticket3("AA","103");
  myticket1.sell_seat();
  myticket2.sell_seat();
  myticket2.sell_beer();
  cout << ts.print_ticket(&myticket1);
  cout << ts.print_ticket(&myticket3);
  cout << ts.print_ticket(&myticket2);
  return 0;
}