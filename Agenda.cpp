#include <iostream>
#include <stdlib.h>
using namespace std;
int main ()
{
	int mm;
	int op;
	
	cout<<"1- escolher mm"<<endl;
	cout<<"2- SAIR"<<endl;
	cout<<"selecione a op"<<endl;
	cin>>op;
	
	if(op==2)
	{
		exit(0);
	}
	else{
		cout<<"selecione o num do mm"<<endl;
		cin>>mm;
		
		switch(mm){
		case 1:
			cout<<"jan"<<endl;
			break;
			case 2:
			cout<<"fev"<<endl;
			break;
			case 3:
			cout<<"mar"<<endl;
			break;
			case 4:
			cout<<"abr"<<endl;
			break;
			case 5:
			cout<<"mai"<<endl;
			break;
			case 6:
			cout<<"jun"<<endl;
			break;
			case 7:
			cout<<"jul"<<endl;
			break;
			case 8:
			cout<<"ago"<<endl;
			break;
			case 9:
			cout<<"set"<<endl;
			break;
			case 10:
			cout<<"out"<<endl;
			break;
			case 11:
			cout<<"nov"<<endl;
			break;
			case 12:
			cout<<"dez"<<endl;
			break;
			
			default:
				cout<<"num inv"<<endl;
				break;
				
				return(0);
	}
	}
	}
