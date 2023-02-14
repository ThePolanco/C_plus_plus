#include <iostream>
#include <math.h>
using namespace std;

float VF, VP, n, i;
/*** VF = Valor Futuro, VP = Valor Presente,  i = interes, n = tiempo  **/

int opcion;
int main()

{
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
   
    cout <<"Digite la opcion 1 = Valor Futuro, 2 = Valor Presente, 3 = Tiempo, 4 = Interes  :  ";
    cin >> opcion;
   
    if (opcion == 1)
    {
        cout <<" Digite el Valor Presente :  " << endl;
        cin >> VP;
       
        cout <<" Digite el interes i :  " << endl;
        cin >> i;
       
        cout <<" Digite el periodo n :  " << endl;
        cin >> n;
       
        VF = VP * pow((1+i),n);
       
        cout <<"El Valor Futuro es :  " << VF << endl;
    }
        else if (opcion == 2)
        {
            cout <<" Digite el Valor Futuro :  " << endl;
            cin >> VF;
           
            cout <<"\n Digite el interes i : " << endl;
            cin >> i;
           
            cout <<"\n Digite el periodo n :  " << endl;
            cin >> n;
           
            VP = VF * pow((1+i),-n);
           
            cout <<"\n El Valor Presente es :  " << VP << endl;
        }
        else if (opcion == 3)
        {
            cout <<"\n Digite el Valor Futuro :  " << endl;
            cin >> VF;
           
            cout <<"\n Digite el Valor Presente :  " << endl;
            cin >> VP;
           
            cout <<"\n Digite el interes i :  " << endl;
            cin >> i;
           
            n = (log (VF/VP)/ log(1+i));
           
            cout <<"\n El valor del periodo es :  " << n << endl;
        }
        else if (opcion == 4)
        {
            cout <<"\n Digite el Valor Futuro :  " << endl;
            cin >> VF;
           
            cout <<"\n Digite el Valor Presente :  " << endl;
            cin >> VP;
           
            cout <<"\n Digite el periodo n :  " << endl;
            cin >> n;
           
            i = pow ((VF/VP),(1/n))-1;
           
            cout <<"\n El valor del interes es :  " << i << endl;
        }
        else
        {
            cout <<"\n OPCION ERRADA";
           
        }
}