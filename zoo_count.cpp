#include<iostream>
#include<string>
using namespace std;
int main()
{
 string str;
 getline(cin,str);
 int count_z=0,count_o=0;
 if(str.length()<=20)
 {
     for(int i=0;i<str.length();i++)
     {
         if(str[i]=='z')
            count_z++;
         else if(str[i]=='o')
            count_o++;
     }
     if(count_o==2*count_z)
        cout<<"Yes";
     else
        cout<<"No";
 }
 return 0;
}
