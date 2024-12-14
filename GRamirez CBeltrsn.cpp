//Geovanni Joel Ramirez Rivas
//24041219
//Cristian Emmanuel Beltran Luevanos
//24041157
#include<iostream>
#include<windows.h>
#include <time.h>
using namespace std;
int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	int n,i,j,matriz[10][10];
	do
	{
		cout<<"Cuantos elementos por lado tiene la matriz (2 a 10)";
		cin>>n;
	}
	while(n>10 or n<2);
	for(i=0;i<n;i++) //ciclo para renglones
		for(j=0;j<n;j++) //ciclo para columnas
		matriz[i][j]=rand()%10;
	cout<<"Impresión de la matriz"<<endl;
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
				printf("%3d",matriz[i][j]);
		cout<<"\n";
		}
		system("pause");
	for(i=0;i<n;i++) //ciclo para renglones
		for(j=0;j<n;j++) //ciclo para columnas
			if(i!=j)
			{
			for(i=0;i<n;i++)
			{	
				for(j=0;j<n;j++)
				{
		printf("%3d",matriz[i][j]);
		cout<<"\n";
			}
		}
	}

return 0;
}
