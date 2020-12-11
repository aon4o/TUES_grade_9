#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cout << "Wywedi N >> ";
    cin>>n;
    m=0;
    if (n<0) n*=(-1);

    while (n>0){
        m=m*10+n%10;
        n/=10;
    }
    cout<<"M = "<<m;
}
