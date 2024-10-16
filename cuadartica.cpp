#include<bits/stdc++.h>
using namespace std;
int main()
{
    double A, B, C;
    double d;
    double x1, x2;

    cout<<"Coloca los valores de A, B y C: "<<endl;
    cin>>A;
    cin>>B;
    cin>>C;

    d=B*B-4*A*C;


    if(d>0)
    {
        x1 = (-B+sqrt(d))/(2*A);
        x2 = (-B-sqrt(d))/(2*A);
        cout<<"Las raíces son: x1 = "<<x1<<" y x2 = "<<x2<<endl;
    }
    else if(d==0)
    {
        x1=-B/(2*A);
        cout<<"La raíz doble es: x1 = x2 = " <<x1<< endl;
    }
    else
    {
        cout<<"Las raíces son complejas."<<endl;
    }
    return 0;
}
