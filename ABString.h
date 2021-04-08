#ifndef ABString_h
#define ABString_h

#include<string>
using std::string;

string ABStringWithExceptions(int m, int n)
{
    string str; 
    while (m && n) 
    {
        if (m > n) 
        {
            str += "aab";
            m--;
            m--;
            n--;
            if(n==0 && m>=2)
            {
                return {};
            }
        } 
        else if (n > m) 
        {
            str += "bba";
            n--;
            m--;
            n--;
            if(n>=2 && m==0)
            {
                return {};
            }
        }
        else
        {
            str += "ab";
            m--;
            n--;
        }
    }
    while(m) 
    {
        str += "a";
        m--;
    }
    while (n) 
    {
        str += "b";
        n--;
    }
    return str;
}

#endif