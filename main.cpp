#include <iostream>
#include <cmath>
#include <String>
using namespace std;


int main(int argc, char** argv) 
{
	string nombre[5], apellidop[5],apellidom[5], buscar,buscara,buscarm;
	int opcion, opcion2;
	char res='s';
	cout<<"opcion 1: agregar, eliminar, actualizar clientes\nopcion 2: agregar, actualizar,eliminar empleados"<<endl;
	cin>>opcion;
	switch(opcion)
	{
		case 1:
			while(res=='s')
			{
		   cout<<"1=agregar cliente \n2=eliminar y actualizar cliente"<<endl;
		   cin>>opcion2;
		   switch(opcion2)
	 	   {
		     case 1: 
		     cout<<"ingrese el nombre y apellidos del cliente a agregar: "<<endl;
	         for(int i=0; i<3; i++)
	         {
		       cin>>nombre[i];
		       cin>>apellidop[i];
		       cin>>apellidom[i];
	         }
	          cout<<"                     LISTA DE CLIENTES      "<<endl;
	        for(int i=0; i<4; i++)
	       {  
		     cout<<nombre[i]<<" "<<apellidop[i]<<" "<<apellidom[i]<<endl;
	       }
	       break;
	       case 2:
	       	cout<<"ingrese el nombre y apellidos que desea buscar y eliminar"<<endl;
	       	cin>>buscar;
	       	cin>>buscara;
	       	cin>>buscarm;
	       	 for(int i=0; i<3; i++)
	       {  
	          if(nombre[i]==buscar)
	          {
	          	if(apellidop[i]==buscara)
	          	{
	          		if(apellidom[i]==buscarm)
	          		{
	          		   	 apellidop[i].clear();
	          		     nombre[i].clear();
	          		     apellidom[i].clear();
	          		   
					}
				}
				
	          	
			  }
	       }
	        cout<<"                     LISTA DE CLIENTES  ACTUALIZADA    "<<endl;
	       for(int i=0; i<3; i++)
	       {  
		     cout<<nombre[i]<<" "<<apellidop[i]<<" "<<apellidom[i]<<endl;
	       }
	       break;
	       default:
	       	cout<<"ingrese una opcion valida";
		   }
		   cout<<"desea otra opcion? s/N"<<endl;
		   cin>>res;
	       }
	    break;
	    case 2:
	    	while(res=='s')
			{
		   cout<<"1=agregar empleado \n2=eliminar y actualizar empleado"<<endl;
		   cin>>opcion2;
		   switch(opcion2)
	 	   {
		     case 1: 
		     cout<<"ingrese el nombre y apellido del empleado a agregar: "<<endl;
	         for(int i=0; i<4; i++)
	         {
		       cin>>nombre[i];
		       cin>>apellidop[i];
		       cin>>apellidom[i];
	         }
	          cout<<"                     LISTA DE EMPLEADOS    "<<endl;
	        for(int i=0; i<4; i++)
	       {  
		     cout<<nombre[i]<<" "<<apellidop[i]<<" "<<apellidom[i]<<endl;
	       }
	       break;
	       case 2:
	       	cout<<"ingrese el nombre y apellido que desea buscar y eliminar"<<endl;
	       	cin>>buscar;
	       	cin>>buscara;
	       	cin>>buscarm;
	       	 for(int i=0; i<4; i++)
	       {  
	          if(nombre[i]==buscar)
	          {
	          	if(apellidop[i]==buscara)
	          	{
	          		if(apellidom[i]==buscarm)
	          		{
	          		   	apellidop[i].clear();
	          		    nombre[i].clear();
	          		    apellidom[i].clear();
	          		   	  
					}
				}
	          	
			  }
	       }
	       cout<<"                     LISTA DE EMPLEADOS  ACTUALIZADA  "<<endl;
	       for(int i=0; i<3; i++)
	       {  
		     cout<<nombre[i]<<" "<<apellidop[i]<<" "<<apellidom[i]<<endl;
	       }
	       break;
	       default:
	       	cout<<"ingrese una opcion valida";
		   }
		   cout<<"desea otra opcion? s/N"<<endl;
		   cin>>res;
	       }
	    break;
	    default:
	    cout<<"ingrese una opcion valida: ";
} 

	return 0;
}
