# include <iostream>
using namespace std;
 
int main ()
 
{
  int d;
  int m;
  int y;
  cin>>d>>m>>y;
  if(d>0 && d<32 && m>0 && m<13 && y>0){
      cout<<"Yes";
  } else {
      cout<<"No";
  }
}