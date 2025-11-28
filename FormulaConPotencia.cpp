#include <bits/stdc++.h>
using namespace std;

int main()
{
    double x,y,z,resultado;
    cin>>x>>y>>z;
    double Ecuacion = 2*x+y-z;
    //Me di cuenta de que "2x+y-z" se repetia siempre asi que lo simplifique
    //El "pow()" lo tuve que investigar porque no saba como elevarlo usando el "^"
    double Potencia = pow(Ecuacion, Ecuacion);
    double Operacion = 7+Potencia;
    resultado = Operacion/Ecuacion;
    cout<<resultado<<endl;

    return 0;
}
