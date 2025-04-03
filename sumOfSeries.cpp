#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number";
    cin>>n;
    int sum=0;
    for(int i=1;i<n;i++)
    {
        if(n%2!=0)
        sum+=i;
        else if(n%2==0)
        sum-=i;

    }
    cout<<sum;
}