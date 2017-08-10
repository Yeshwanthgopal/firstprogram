#include <iostream>
using namespace std;
int main()
{
    int m,n,l,sum=0,i;
cout<<"enter number";
cin>>m;
int num=m;
while(m!=0)
{
n=m%10;
l=n*n*n;
sum=sum+l;
m=m/10;
}
if(sum==num)
    cout<<"armstrong";
else
    cout<<"not armstrong";
}
