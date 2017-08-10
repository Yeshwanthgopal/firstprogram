#include <iostream>
using namespace std;
int main()
{
    int j,n,l,sum=0,i;
cout<<"enter number";
cin>>j;
int num=j;
while(m!=0)
{
n=j%10;
l=n*n*n;
sum=sum+l;
j=j/10;
}
if(sum==num)
    cout<<"armstrong";
else
    cout<<"not armstrong";
}
