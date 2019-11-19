#include <iostream>
using namespace std;
int main(){
    double sum, p;
    cin>>sum>>p;
    sum=sum+(sum*(p/100)*5);
    cout<<sum;
return 0;
}
