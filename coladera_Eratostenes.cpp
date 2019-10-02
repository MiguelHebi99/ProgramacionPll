using namespace std;
#include<iostream>

void llenar_Uno(int V[], int n);
void MostrarVector(int V[], int n);
void ColocarCeros(int V[], int n);

int main()
{
    int Vector[1000];
    llenar_Uno(Vector, 1000);
    ColocarCeros(Vector, 1000);
    MostrarVector(Vector, 1000);
}

void llenar_Uno(int V[],int n)
{
    for(int i = 2; i < 1000; i++)
        V[i] = 1;
}

void MostrarVector(int V[], int n)
{
    for(int i = 0; i < 1000; i++)
    {
        if(V[i] == 1)
        cout<<i<<endl;
        
    }

}

void ColocarCeros(int V[], int n)
{
    for(int i = 2; i < 1000; i++)
    {
        if(V[i] == 1)
        {
            for(int j = i + 1; j < 1000; j++)
            {
                if(j % i == 0)
                V[j] = 0;
                
            }
            
        }
        
    }
}
