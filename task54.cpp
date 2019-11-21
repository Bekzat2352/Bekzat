#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(((a<5)&&(b<5)&&(c>5))||((b<5)&&(c<5)&&(a>5))||(a<5)&&(c<5)&&(b>5)){
        cout<<"yes";
    }else cout<<"no";
return 0;
}
