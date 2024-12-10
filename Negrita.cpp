#include <iostream>
using namespace std;
struct Producto{
	int cantidad;
	double precio;
};
int main(){
	Producto inventario [15];
	string nombres [15];
	int numProductos=0;
	int opcion;
	cout<<"Hola"<<endl;
	cout<<"Bienvenido al sistema de invetario"<<endl;
	
	do{
		cout<<"Menu del invetario"<<endl;
		cout<<"1. Ingresar un nuevo producto"<<endl;
		cout<<"2.Ingresar un producto existente y actualizar su cantidad"<<endl;
		cout<<"3.Mostrar inventario actualizado"<<endl;
		cout<<"4.Buscar un producto"<<endl;
		cout<<"5.Salir"<<endl;
		cout<<"Seleccione una opcion"<<endl;
		cin>> opcion;
	switch (opcion){
		case 1: {
			if (numProductos<15){
				cout<<"Ingrese el nombre del producto:"<<endl;
				cin>>nombres[numProductos];
				cout<<"Ingrese la cantidad:"<<endl;
				cin>>inventario[numProductos].cantidad;
				cout<<"Ingrese el precio:"<<endl;
				cin>>inventario[numProductos].precio;
				numProductos++;
				cout<<"Producto agregado correctamente."<<endl;
			}else{
				cout<<"No hay espacio para mas productos."<<endl;
			}
		break;
		}
	case 2:{
		string productoExistente;
		bool encontrado=false;
		cin>>productoExistente;
	for (int i=0;i<numProductos; i++){
	if (nombres[i] == productoExistente){
			cout<<"Producto encontrado."<<endl;
			cout<<"Ingrese la cantidad a agregar:"<<endl;
			int cantidadAdicional;
			cin>> cantidadAdicional;
			cout<<"Ingrese el nuevo precio(si lo desea actualizar):"<<endl;
			double nuevoPrecio;
			cin>>nuevoPrecio;
			
			inventario[i].cantidad+=cantidadAdicional;
			inventario [i].precio=nuevoPrecio;
			encontrado=true;
			cout<<"Producto actualizado correctamente."<<endl;
			break;
		}
	}
	if (!encontrado){
		cout<<"El producto no esta en el inventario."<<endl;
	}
	break;
	}
	case 3: {
		cout<<"Inventario actualizado:"<<endl;
		for(int i=0; i<numProductos;i++){
			cout<<"Producto:"<<nombres[i]<<"Cantidad:"<<inventario[i].cantidad
			<<"Precio:"<<inventario[i].precio<<endl;
		}
		break;
	}
	case 4: {
		string productoBuscar;
		bool encontrado=false;
		cout<<"Ingrese el nombre del producto a buscar:";
		cin>>productoBuscar;
	for (int i=0;i<numProductos;i++){
		if(nombres[i]==productoBuscar){
			cout<<"Producto encontrado"<<nombres[i]<<" | Cantidad:"<<inventario[i].cantidad
			<<" | Precio:"<<inventario[i].precio<<endl;
			encontrado=true;
			break;
		}	
	}
	if (!encontrado){
		cout<<"El producto no esta en el inventario."<<endl;
	}
	break;
	}
	case 5: 
	cout<<"Gracias por usar el sistema de inventario "<<endl;
	cout<<"tenga buen dia "<<endl;
	break;
	default:
		cout<<"Opcion no valida. Intente nuevamente."<<endl;
		}
	}while (opcion !=5);
	return 0;
	}

