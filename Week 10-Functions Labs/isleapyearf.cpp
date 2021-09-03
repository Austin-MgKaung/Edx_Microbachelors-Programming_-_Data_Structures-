bool isleapyear(int inyear)
{
    if (inyear % 4== 0 && inyear % 100 != 0)
    {   
        return true;
    }
    else 
    {   
        if ( inyear % 100 == 0 && inyear % 400 == 0)
        {
            return true;
        }
        else
            return false;
    }
}