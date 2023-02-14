/** CODIGO MODIFICADO POR JEISON POLANCO **/
#include <iostream>
#include<math.h>
using namespace std;

int opc;
float vp,vf,i,n;
//vp = valor presente, vf valor futuro,i= interes, n = periodo: ojo variable globales.

int main()
{
  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(2);
  do {
 cout <<"\n1: Valor fututo "<<endl;
 cout <<"2: Valor presente "<<endl;
 cout <<"3: Valor periodo "<<endl;
 cout <<"4: valor interes "<<endl;
 cout <<"-------------------------------"<<endl;
   cout<<"digite la opcion  :";cin>>opc;
 cout <<"-------------------------------"<<endl;  
 
 switch(opc){
       case 1:
              cout<<"digite el valor presente va   :";cin>>vp;
         cout<<"digite el numero de periodo   :";cin>>n;
         cout<<"digite el valor del interes   :";cin>>i;
         vf = vp*pow((1+i),n);
         cout <<"\nel valor futuro es   :"<<vf<<endl;
              break;
 
      case 2:
                cout<<"digite el valor futuro vf     :";cin>>vf;
           cout<<"digite el numero de periodo   :";cin>>n;
           cout<<"digite el valor del interes   :";cin>>i;
           vp = vf*pow((1+i),-n);
           cout <<"\nEl valor presente es   :"<<vp<<endl;
                break;
       
          case 3:
                    cout<<"digite el valor futuro vf     :";cin>>vf;
               cout<<"digite el valor preesente vp  :";cin>>vp;
               cout<<"digite el valor del interes   :";cin>>i;
               n = (log(vf/vp)/(log(1+i)));
               cout <<"\nEl periodo n  es    :"<<n<<endl;
                    break;
           
           case 4:
                  cout<<"digite el valor futuro vf     :";cin>>vf;
                      cout<<"digite el valor preesente vp  :";cin>>vp;
                      cout<<"digite el valor del perido n  :";cin>>n;
                      i = pow((vf/vp),(1/n))-1;
                      cout <<"\nEl valor del interes i es    :"<<i<<endl;
                  break;
                 
                     default:
                             cout << "DIGITACION ERRONEA";
                             break;
                }
        }while(opc !=0);
       
        return 0;
}
