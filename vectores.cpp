#include <iostream>
using namespace std;

float vector [10], suma = 0, aux;
int main()

{
    cout <<"Digite los datos del vector :  " << endl;

    for(int i = 0; i < 10; i++)
    {
        cin >> vector [i];
    }
    for (int i = 0; i < 10; i++)
    {
        cout << vector [i] <<"\t";
    }      
    for(int i = 0; i < 10; i++)
    {
        suma = suma + vector [i];
}
cout <<"\nLa suma del vector es :  " << suma;
cout <<" " << endl;

for (int i = 0; i < 9; i ++)
   {
   for (int j = i + 1; j < 10; j++)
            {
       if (vector[i] > vector[j])
           {
           aux = vector [i];
       vector [i] = vector [j];
        vector [j]= aux;    
                }
            }
   }
for(int i = 0; i < 10; i++)
{
   cout << vector [i] << "\t";
    }
cout <<" " << endl;
    system("pause");  
}