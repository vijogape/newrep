#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	string name;
	float var1, var2;
	double total;
	int opt;
	
	cout<<"inserte su nombre aqui"<<endl;
	cin>> name;
	system("cls");
	
	cout<<"Inserte el primer numero"<<endl;
	cin>>var1;
	
	cout<<"Inserte el segundo numero"<<endl;
	cin>>var2;

	do
	{
		system("cls");
		cout<<"Inserte el numero de la operacion que quiere realizar"<<endl<<"1.suma"<<endl<<"2.resta"<<endl<<"3.multiplicacion"<<endl<<"4.division"<<endl<<"5.Potencia"<<endl;
		cin>>opt;
		system("cls");
	
	
		switch(opt) 		
		{
			case  1:
			{
				total=var1+var2;
				cout<<total;
				break;
				
			}
			case 2:
			{
				total=var1-var2;
				cout<<total;
				break;
			}
			case 3:
			{
				total=var1*var2;
				cout<<total;
				break;
			}
			case 4:
			{
				total=var1/var2;
				cout<<total;
				break;
			}
			case 5:
			{
				total=pow(var1,var2);
				cout<<total;
				break;	
			}
		}
	}
	while(!(opt==1 || opt==2 || opt==3 || opt==4 || opt==5));
}
