# include <iostream>
using namespace std;
int main ()
{
  int a;
  int c;
  int d;
  int e;
  cin>>a;
  e = a%10;
  a=a/10;
  d = a%10;
  a=a/10;
  c=a%10;
  a=a/10;
  if(a>c && c>d && d>e){cout<<"Yes";}
  else {cout<<"No";}
  
}