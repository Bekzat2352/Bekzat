#include <iostream>
#include <cmath>
using namespace std;
int main() {
double a,b,c,area,mid;
cin>>a>>b>>c;
if(a+b>c || b+c>a || a+c>b){
    mid=(a+b+c)/2;
    area = sqrt(mid*(mid-a)*(mid-b)*(mid-c));
    cout<<area;
}else {cout<<"does not exist";}
}