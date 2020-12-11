#include <iostream>

using namespace std;

int main()
{
    int n,m,a,i;
    cout<<"Wywedi N >> ";
    cin>>n;
    cout<<"Wywedi A >> ";
    cin>>a;
    if (n<0)
        n=n*(-1);
    i=0;
    while (n>0){
        m=n%10;
        if (m==a){
            i++;
            break;
        }
        n/=10;
    }
    if (i==0)
        cout<<"A NE SE sreshta w N!";
    else if (i>0)
        cout<<"A SE sydyrja w N!";
}
