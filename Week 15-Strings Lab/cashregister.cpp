#include<iostream>
#include<string>
#include<cctype>
#include <iomanip>
using namespace std;


float final_pirce(int f_price, int s_price,char m_card, float tax_rate,float &base_price,float &dis_price); 

int main()
{
    int f_price,s_price;
    float tax_rate;
    char m_card;
    float base_price = 0.0,dis_price = 0.0,total_price;
    cout<<"Enter price of the first item: ";
    cin>>f_price;
    cout<<"Enter price of the second item: ";
    cin>>s_price;
    cout<<"Does customer have a club card? (Y/N): ";
    cin>>m_card;
    cout<<"Enter tax rate, e.g. 5.5 for 5.5% tax: ";
    cin>>tax_rate;
    total_price = final_pirce(f_price,s_price,m_card,tax_rate,base_price,dis_price);
    cout<<fixed<<setprecision(2);
    cout<<"Base price = "<<base_price<<endl;
    cout<<"Price after discounts = "<<dis_price<<endl;
    cout<<"Total price = "<<total_price<<endl;

    return 0;
}

float final_pirce(int f_price, int s_price,char m_card, float tax_rate,float &base_price,float &dis_price)
{
    base_price = f_price + s_price;
    int buf_price = 0;
    if (f_price >= s_price)
    {
        dis_price = (float)f_price + (s_price/2.0);
        if ( tolower(m_card) == 'y' )
                dis_price -= dis_price/10;
        else;
    }
    else if (f_price < s_price)
    {
        dis_price = (float)s_price + (f_price/2.0);
        if ( tolower(m_card) == 'y' )
                dis_price -= dis_price/10;
        else;
    }
    return dis_price + (tax_rate * (dis_price/100));
}