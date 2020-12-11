#include <iostream>

using namespace std;

int main()
{
    int n,i;
    cout<<"Wywedi N >> ";
    cin>>n;
    i=0;
    if (n<0) n*=(-1);
    if (n!=0){
        while (n>0){
            n/=10;
            i++;
        }
    }else i++;
    cout<<"Broq na cifrite w N e >> "<<i;
}
