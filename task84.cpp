#include <iostream>
using namespace std;
int main () {
    double rub=1;
    double dol=1;
    double kg=1;
    for (int i=1; i<=100; i++){
        dol=70*rub;
        kg=dol/20;
    cout<<rub<<"|"<<dol<<"|"<<kg<<endl; 
    rub=rub+1;
}
}