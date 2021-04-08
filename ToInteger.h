#ifndef ToInteger_h
#define ToInteger_h

#include<string>
using std::stoi;

int ToInteger(std::string num)
{
    int len=num.length();
    int i;
    if(len>11)
    {
        return -2147483648;
    }
    else
    {
        int arr[len];
        if(num[0]=='-')
        {
            arr[0]=-1;
            for(int i=1;i<len;i++)
			{
				int ascii=(int)num[i];
				if(ascii>=48 && ascii<=57)
				{

					arr[i]=(int)num[i] % 48;
				}
				else
				{
					return -2147483648;
				}
			}
        }
        else
        {
            for(int i;i<len;i++)
			{
				int ascii=(int)num[i];
				if(ascii>=48 && ascii<=57)
				{

					arr[i]=(int)num[i] % 48;
				}
				else
				{
					return -2147483648;
				}
			}
        }
        if(arr[0]=-1)
        {
            if(len==11)
            {
				if(arr[1]>2)
				{
					return -2147483648;
				}
				else if (arr[1]==2 && arr[2]>1)
				{
					return -2147483648;
				}
				else if (arr[1]==2 && arr[2]==1 && arr[3]>4)
				{
					return -2147483648;
				}
				else if (arr[1]==2 && arr[2]==1 && arr[3]==4 && arr[4]>7)
				{
					return -2147483648;
				}
				else if (arr[1]==2 && arr[2]==1 && arr[3]==4 && arr[4]==7 && arr[5]>4)
				{
					return -2147483648;
				}
				else if (arr[1]==2 && arr[2]==1 && arr[3]==4 && arr[4]==7 && arr[5]==4 && arr[6]>8)
				{
					return -2147483648;
				}
				else if (arr[1]==2 && arr[2]==1 && arr[3]==4 && arr[4]==7 && arr[5]==4 && arr[6]==8 && arr[7]>3)
				{
					return -2147483648;
				}
				else if (arr[1]==2 && arr[2]==1 && arr[3]==4 && arr[4]==7 && arr[5]==4 && arr[6]==8 && arr[7]==3 && arr[8]>6)
				{
					return -2147483648;
				}
				else if (arr[1]==2 && arr[2]==1 && arr[3]==4 && arr[4]==7 && arr[5]==4 && arr[6]==8 && arr[7]==3 && arr[8]==6 && arr[9]>4)
				{
					return -2147483648;
				}
				else if (arr[1]==2 && arr[2]==1 && arr[3]==4 && arr[4]==7 && arr[5]==4 && arr[6]==8 && arr[7]==3 && arr[8]==6 && arr[9]==4 && arr[10]>=7)
				{
					return -2147483648;
				}
				else
				{
					int result=stoi(num);
                	return result;
				}
            }
            else if(len<11)
            {
                int result=stoi(num);
                return result;
            }
            else
            {
                return -2147483648;
            }
        }
        else
        {
			if(len==10)
            {
				if(arr[0]>2)
				{
					return -2147483648;
				}
				else if (arr[0]==2 && arr[1]>1)
				{
					return -2147483648;
				}
				else if (arr[0]==2 && arr[1]==1 && arr[2]>4)
				{
					return -2147483648;
				}
				else if (arr[0]==2 && arr[1]==1 && arr[2]==4 && arr[3]>7)
				{
					return -2147483648;
				}
				else if (arr[0]==2 && arr[1]==1 && arr[2]==4 && arr[3]==7 && arr[4]>4)
				{
					return -2147483648;
				}
				else if (arr[0]==2 && arr[1]==1 && arr[2]==4 && arr[3]==7 && arr[4]==4 && arr[5]>8)
				{
					return -2147483648;
				}
				else if (arr[0]==2 && arr[1]==1 && arr[2]==4 && arr[3]==7 && arr[4]==4 && arr[5]==8 && arr[6]>3)
				{
					return -2147483648;
				}
				else if (arr[0]==2 && arr[1]==1 && arr[2]==4 && arr[3]==7 && arr[4]==4 && arr[5]==8 && arr[6]==3 && arr[7]>6)
				{
					return -2147483648;
				}
				else if (arr[0]==2 && arr[1]==1 && arr[2]==4 && arr[3]==7 && arr[4]==4 && arr[5]==8 && arr[6]==3 && arr[7]==6 && arr[8]>4)
				{
					return -2147483648;
				}
				else if (arr[0]==2 && arr[1]==1 && arr[2]==4 && arr[3]==7 && arr[4]==4 && arr[5]==8 && arr[6]==3 && arr[7]==6 && arr[8]==4 && arr[9]>=7)
				{
					return -2147483648;
				}
				else
				{
					int result=stoi(num);
                	return result;
				}
            }
			else if(len<10)
            {
                int result=stoi(num);
                return result;
            }
			else
            {
                return -2147483648;
            }
        }
    }
}

#endif