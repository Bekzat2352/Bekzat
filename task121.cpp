#include <iostream>
using namespace std;
int main () {
    int n,k=0;
    cin>>n;
   while(n>0) {
        if (n%2==0)
        k++;
        n=n/10;
   }
   cout<<k<<endl;
    return 0;
}

using namespace std;
int main () {
    int a,n,k=0;
    cin>>n;
   while(n>0) {
        a=n%10;
        n=n/10;
        if (a>3 && a<8)
        k++;
   }
   cout<<k<<endl;
    return 0;
}
