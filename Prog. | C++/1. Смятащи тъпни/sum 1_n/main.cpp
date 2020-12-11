#include <iostream>

using namespace std;

int main()
{
    float n,i,x;
    cout<<"Put in the number 'till which you want to sum >> ";
    cin>>n;
    i=1;
    x=0;
    while(i<=n){
        x+=i;
        i++;
    }
    cout<<"The SUM >> "<<x;
}
