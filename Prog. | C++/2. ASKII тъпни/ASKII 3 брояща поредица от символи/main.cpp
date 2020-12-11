#include <iostream>

using namespace std;

int main()
{
    unsigned char a;
    int n,m,k;
    n=0;
    m=0;
    k=0;

    while (1) {
        cout<<"Vyvedi simvol >> ";
        cin>>a;
        if (a>='a' && a<='z')
            n++;
        else if (a>='A' && a<='Z')
            m++;
        else if (a>='1' && a<='9')
            k++;
        else if (a=='.')
            break;
        else
            cout<<"IMA GRESHKA!"<<endl;
    }
    cout<<"Broq na MALKITE BUKVI e >> "<<n<<endl;
    cout<<"Broq na GLAVNITE BUKVI e >> "<<m<<endl;
    cout<<"Broq na CHISLATA e >> "<<k<<endl;
}
