#include<iostream>
using namespace std;
int main(){
    int n,i,a[10];
    cout<<"Enter the number which you want to covert : ";
    cin>>n;
    for ( i = 0; n>0 ; i++)
    {
        a[i]=n%2;
        n/=2;
    }
    cout<<"The binary number is : ";
    for ( i =i-1; i >=0; i--)
    {
        cout<<a[i];
    }
    
    
    
}