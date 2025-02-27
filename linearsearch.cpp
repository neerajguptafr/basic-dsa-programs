//inear search
#include<iostream>
using namespace std;
int main(){
int arr[]={1,5,7,6,9,3,4,10};
int n= sizeof(arr)/sizeof(arr[0]);
int a;
cout<<" enter the value of element";
cin>>a;
for (int i = 0; i < 8; i++)
    {
        if (arr[i]==a)
        {
            cout<<i;
        }
        
    }
    return 0;
}