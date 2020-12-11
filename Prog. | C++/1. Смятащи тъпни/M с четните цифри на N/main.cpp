#include <iostream>

using namespace std;

int main()
{
    int n,m,i;

    cout << "Wywedi N >> ";
    cin>>n;
    m=0;
    i=0;
    if (n<0) n*=(-1);

    while (n>0){
        if((n%10)==0){
            i++;
            m=m*10+n%10;
            n/=10;
        }else break;
    }
    cout<<"I = "<<i<<endl;

    while (n>0){
        if((n%10)%2==0)
            m=m*10+n%10;
        n/=10;
    }
    cout<<"M = "<<m<<endl;
    n=m;
    m=0;

    while (n>0){
        m=m*10+n%10;
        n/=10;
    }
    cout<<"M = "<<m<<endl;

    while(i>0){
        m*=10;
        i--;
    }
    cout<<"M = "<<m<<endl;
}
