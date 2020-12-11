#include <iostream>

using namespace std;

int main()
{
    float a,b,x;
    cout<<"Vywedi 'a' >> ";
    cin>>a;
    cout<<"Vywedi 'b' >> ";
    cin>>b;

    if(a==0){
        if(b==0){
            cout<<"'x' moje da e vsqko chislo";
        }else{
            cout<<"n.r.";
        }
    }else{
        x=-b/a;
        cout<<"x = "<<x;
    }
}

