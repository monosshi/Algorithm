#include<bits/stdc++.h>
using namespace std;
int main()
{
 string str = "WJJysxtwjwjwhsbwhhnjuwsyhjsijwihbhhappycyueSECFEJJBGCFX";
 string str1 = "hhgswyjjsiowyeubirthdaysowinx";
int skip = 34;
int skip1 = 15;
int final = str .size()-16; 
int final1 = str1.size()-6; 
for(int i=skip;i<final;i++){
str[i]=toupper(str[i]);
cout<<str[i];
}
cout<<" ";
for(int i=skip1;i<final1;i++){
str1[i]=toupper(str1[i]);
cout<<str1[i];
}
cout<<" !";
return 0;
}