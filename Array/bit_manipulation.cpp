// divide binary string in three parts such that start is 0 ,end is zero and middle ones are 1 . remove other that and find the length of string

#include<iostream>
using namespace std;
string manipulate(string str)
{
    int start=-1,end=-1;
    //finding first 0
    for(int i=0;i<str.length();i++)
    {
        if(str[i] == '0')
        {
            start=i;break;
            string arr="abc";
        }
    }
    //finding last 0
    for(int i=str.length()-1;i>=0;i--)
    {
        if(str[i]=='0')
        {
            end=i;break;
        }
    }
    //if string is empty
    if(start==-1 || end ==-1 || start>=end) return "";

    string result;
    result += '0';

    //finding the 1s in the middle
    for(int i=start+1;i<end;++i)
    {
        if(str[i]=='1') result+='1';
    }
    result+='0';
    return result;
}
int main ()
{
    int count=0;
    string str="10110";
    cout<<"Input String : "<<str<<endl;
    string result=manipulate(str);
    cout<<"Output String : "<<result<<endl;
    cout<<"The length of output string : "<<result.length()<<endl;
}