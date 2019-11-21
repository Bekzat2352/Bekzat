 #include <iostream>
using namespace std;
 
int main() {
    int d,m,g,z;
    cin >>d>>m>>g>>z;
    if (d==m || m==g || g==z || d==g || d==z || m==z){
        cout<<"Yes";
    }
return 0;
}