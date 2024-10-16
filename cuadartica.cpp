#include<bits/stdc++.h>
using namespace std;
int main()
{
    ///SE DECLARARAN LAS VARIABLES PARA LA ECUACIÓN (A, B, C)
    ///Y LAS VARIABLES PARA LA DISCRIMINANTE(d) Y (x1 Y x2)
    double A, B, C;
    double d;
    double x1, x2;
    ///AQUI LE PEDIMOS AL USUARIO LOS VALORES DE A, B Y C
    cout<<"Coloca los valores de A, B y C: "<<endl;
    cin>>A;
    cin>>B;
    cin>>C;
    ///AQUI HACER EL CALCULO DE (d) EN LA ECUACION CUADRATICA
    d=B*B-4*A*C;
    ///SI d ES IGUAL A 0, X1 Y X2 SERIAN REALES O DISTINTAS
    if(d>0)
    {
        ///POSTERIORMENTE USAMOS LA FORMULA GENERAL PARA
        ///CALCUALR LAS DOS RAICES
        x1 = (-B+sqrt(d))/(2*A);
        x2 = (-B-sqrt(d))/(2*A);
        cout<<"Las raíces son: x1 = "<<x1<<" y x2 = "<<x2<<endl;
    }
    ///SI d ES IGUAL A 0, X1 Y X2 SERIAN REALES Y IGUALES
    else if(d==0)
    {
        ///AQUI COMO d ES , AMBAS RAICES SON IGUALES
        x1=-B/(2*A);
        cout<<"La raíz doble es: x1 = x2 = " <<x1<< endl;
    }
    ///SI d ES MENOR QUE 0, LAS RAICES SON COMPLEJAS
    else
    {
        ///LAS RAICES NO SON REALES PORQUE EL d ES NEGATIVO
        cout<<"Las raíces son complejas."<<endl;
    }
    return 0;
}
