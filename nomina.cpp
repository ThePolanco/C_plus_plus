/***Codigo sobre la nomina de una empresa, POR : JEISON POLANCO***/

#include<iostream>
using namespace std;

int main()
{
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
   
    float sueldo,transporte,fsol,retencion,pension,salud,totdev,totdes,totneto;
    /*** fsol: fondo de solidaridad, totdev : total devengado, totdes : total descuento, totneto: total neto ***/
   
    cout <<"Digite el sueldo :  " ;
    cin >> sueldo;
   
    if(sueldo >= 900000)
    {
        if(sueldo <= 1800000)
        {
            transporte = 90000;
        }
        else
        {
            transporte = 0;
        }
   
    if ((sueldo >= 900000)&(sueldo < 3600000))
    {
        fsol = 0;
        }
        else if ((sueldo > 3600000)&(sueldo <= 5400000))
        {
            fsol = sueldo * 0.01;
        }
        else
        {
            fsol = sueldo * 0.015;
        }
    if ((sueldo >= 900000)&(sueldo <=3600000))
        {
            retencion = 0;
        }
        else if((sueldo > 3600000)&(sueldo <= 3700000))
        {
            retencion = sueldo * 0.01;
        }
        else if ((sueldo > 3700000)&(sueldo <= 3900000))
        {
            retencion = sueldo * 0.02;
        }
        else if((sueldo > 3900000)&(sueldo <= 500000))
        {
            retencion = sueldo * 0.04;
        }
        else
        {
            retencion = sueldo * 0.05;
        }
    pension = sueldo * 0.04;
    salud = sueldo * 0.04;
    totdev = sueldo + transporte;
    totdes = fsol + retencion + pension + salud;
    totneto = totdev - totdes;
   
    cout <<"\nEl Sueldo es :  " << sueldo;
    cout <<"\nEl Subsidio de transporte es : " << transporte;
    cout <<"\nEl Fondo de solidaridad es :  " << fsol;
    cout <<"\nLa Retencion es :  " << retencion;
    cout <<"\nLa Pension es :  " << pension;
    cout <<"\nLa Seguridad social es :  " << salud;
    cout <<"\nEl Total devengado es :  " << totdev;
    cout <<"\nEl Total de descuento es :  " << totdes;
    cout <<"\nEl Total neto es :  " << totneto;
    }
    else {cout << "¡El sueldo debe ser mayor o igual a 900000!" << endl;
    }
}