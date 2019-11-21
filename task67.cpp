#include <iostream>
using namespace std;

int main() {
    int n;
    int e,f;
    int arr[4];
    int max=0;
    int min=9999;
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
    if(arr[i]<min){
       min=arr[i]; 
       } 
       
       else if (arr[i]>max){
        max=arr[i]; 
       } 
    }
    for (int i=0; i<4; i++){
        if(arr[i]==max){
            i=e;
        } else if(arr[i]==min){
            i=f;
        }  
    
    for (int i = 0; i<4; i++){
       arr[e]=min;
       arr[f]=max;
    }   
    cout<<arr[0]*1000+arr[1]*100+arr[2]*10+arr[3];
    }
}