#include <iostream>

using namespace std;

int main(){
    int n,m;
    cout<<"Wywedi N >> ";
    cin>>n;

    if (n<0)
        n=n*(-1);
    m=0;
    while (n>0){
        m+=n%10;
        n/=10;
    }
    return m;
}
