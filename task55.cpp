#include <iostream>
using namespace std;
int main(){
    int a,b,c, count=0;
    cin>>a>>b>>c;
    if(a>0){
        count++;
    }
    if(b>0){
        count++;
    }
    if(c>0){
        count++;
    }
    cout<<count;
return 0;
}
