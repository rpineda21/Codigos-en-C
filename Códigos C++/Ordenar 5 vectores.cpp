//Rodrigo Pienda
//Ordenar 5 vectores
//OrdenarVectores.cpp
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int vector[5];
    int i, j , temp;
    cout<<" Ingrese 5 numeros para ser ordenados: "<<endl;
    {
        for(i=0;i<5;i++)
        {
            cout<<i+1<<" -> ";
            cin>>vector[i];
            cout<<endl;
        }
    }
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(vector[j]<vector[i])
            {
                temp=vector[j];
                vector[j]=vector[i];
                vector[i]=vector[j];
                vector[i]=temp;
            }
        }
    }
    for(i=0;i<5;i++)
    {
        cout<<vector[i]<<" ";
    }
    return 0;
}
