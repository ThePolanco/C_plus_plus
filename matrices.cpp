#include <iostream>
#include <iomanip>
using namespace std;

float matA[3][3];
float vector [3]={0,0,0};
float diagonal = 0;
int main()

{
    cout <<"Digite los valores de la matriz :  " << endl;
    /** i es el eje x, j es el eje y **/
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++ )
        {
            cin >> matA[i][j];
        }
    }
    for (int i = 0; i < 3; i ++)
    {
        for (int j = 0; j < 3; j++ )
        {
            cout << setw (3) << matA[i][j] << "\t";
        }
        cout << " " << endl;
    }
   
    /**suma por filas**/
   
    for (int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            vector[i] = vector[i] + matA[i][j];
        }
    }
   
    cout <<"Suma de filas :  ";
    for (int i = 0; i < 3; i++)
    {
        cout << vector[i] <<"\t";
    }
   
    /**suma por columnas**/
   
    float vector1[3]={0,0,0};
   
    for (int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            vector1[j] = vector1[j] + matA[i][j];
        }
    }
   
    cout <<"\nSuma de columnas :  ";
    for (int j = 0; j < 3; j++)
    {
        cout << vector1[j] <<"\t";
    }
   
    /**suma en diagonal**/
 
   
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if(i == j)
            {
                diagonal = diagonal + matA[i][j];
            }
        }
    }
    cout <<"\nSuma en diagonal :  " << diagonal;
} 
