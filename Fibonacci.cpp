using namespace std;
#include<iostream>

float Funcion(float n)
{
	if (n == 1)
	{
		return 0;
	}
	
	else 
	{
		if (n == 2)
		{
			return 1;
		}
		
		else
		{
			return Funcion(n - 1) + Funcion(n - 2);
		}
	}
}

int main()
{
	cout<<Funcion(9);
}
