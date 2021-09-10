#include<iostream>
#include<string>
#include<cmath>
#include <iomanip>
using namespace std;

float notbet_weekday_calc(int time);
float bet_weeekday_calc(int time);
float weekend_calc(int time);
int divide_time (string day ,int s_time, int d_time);
float divide_day(string day, int s_time ,int d_time);
int main ()
{
    
    string day ;
    int s_time ,d_time;  
    int hour= 0 ,min= 0;
    float total_cost = 0;
    cout<<"Enter the day the call started at: ";
    cin>>day;
    cout<<"Enter the time the call started at (hhmm): ";
    cin>>s_time;
    int u_hour = floor(s_time/100);
    int u_min = s_time %100;
    cout<<"Enter the duration of the call (in minutes): ";
    cin>>d_time;
    cout<<fixed<<setprecision(2);
    cout<<"This call will cost $"<<divide_day(day,s_time,d_time)<<endl;
    return 0;

}
int divide_time (string day ,int s_time, int d_time)
{
    int hour = floor(s_time/100);
    int min = s_time %100;
    int res ;
     int after_min = min +d_time;
        int after_hour = hour;
        while (after_min > 60 )
        {
            after_min =min - 60;
            after_hour += 1;
        }
    if ((day == "Fri" && after_hour >= 18 ) || day == "Sun" )
    {
         if(after_hour > 24)
        {
            after_hour -= 24;
            res = after_hour * 60 + after_min;
            return res;
        }
        else 
            return 0;

    }
    else if(day=="Sat")
        return 0;
    else
    {   
        if(after_hour > 24)
        {
            after_hour -= 24;
        }

        if(after_hour < 8 && hour >= 8 )
        {
            res =(after_hour - 8)* 60 + after_min;
            return res;
        }
        else if (after_hour < 18 && hour >= 18 )
        {
            res = (after_hour- 18)*60 +after_min;
            return res;
        }
        else
            return 0;


    }
}

float divide_day(string day, int s_time ,int d_time)
{
    if (day == "Sat" or day == "Sun")
    {
        if (divide_time(day,s_time,d_time)==0)
        {
            return weekend_calc(d_time);
        }
        else 
        {
            return weekend_calc(d_time - divide_time(day,s_time,d_time)) + notbet_weekday_calc(divide_time(day,s_time,d_time));
        }
    }
    else
    {
        if (divide_time(day,s_time,d_time)==0)   
        {
            if (s_time >= 800 && s_time <=1800)
            {
                return bet_weeekday_calc(d_time);
            }
            else 
            {
                return notbet_weekday_calc(d_time);
            }
        }
        else
        {
            if (s_time >= 800 && s_time <=1800)
            {
                return bet_weeekday_calc(d_time -divide_time(day,s_time,d_time))+notbet_weekday_calc(divide_time(day,s_time,d_time)) ;
            }
            else
            {
                return notbet_weekday_calc(d_time - divide_time(day,s_time,d_time)) +  bet_weeekday_calc(divide_time(day,s_time,d_time)) ;
            }
        }
    }
}
float weekend_calc(int time)

{
    return (float) time * 0.15;
}

float bet_weeekday_calc(int time)
{
    return (float) time * 0.40;
}

float notbet_weekday_calc(int time)
{
    return (float) time * 0.25;
}