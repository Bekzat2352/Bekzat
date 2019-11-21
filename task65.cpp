#include <iostream>
using namespace std;

int main() {
    int n;
    int arr[4];
    int a,b,c,d;
    cin >>n;
    a = n/1000;
    b = (n % 1000)/100;
    c = (n % 100)/10;
    d= n%10;
    arr[0]=a;
    arr[1]=b;
    arr[2]=c;
    arr[3]=d;
    for (int i = 0; i<4; i++){
        if(arr[i]>5){
            cout<<arr[i];
        }
    }
    for (int i = 0; i<4; i++){
        if(arr[i]<=5){
            cout<<arr[i];
        }
    }
    return 0;
}