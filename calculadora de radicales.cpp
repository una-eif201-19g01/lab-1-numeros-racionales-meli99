#include <iostream>
#include <string>
#include <sstream>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
using namespace std;
class Racional{
private:
	float operando1;
	float operando2;
	float objeto3;
	float objeto4;
public:
	Racional(){
		operando1=0;
		operando2=0;
		objeto3=0;
		objeto4=0;
	}
	
	~Racional(){
}

void setOperando1(float op1){
	operando1=op1;
}
void setOperando2(float op2){
	operando2=op2;
}
void setObjeto3(float ob3){
	objeto3=ob3;
}
void setObjeto4(float ob4){
	objeto4=ob4;
}

  float getOperando1(){
	return (operando1);  
  }
  float getOperando2(){
	  return (operando2);  
  }
  float getObjeto3(){
	  return (objeto3);  
  }
  float getObjeto4(){
	  return (objeto4);  
  }

  int maximoComunDiv(float operando1, float objeto3){
	  int residuo = (int)operando1 % (int)objeto3;
	  while(residuo != 0){
		  objeto3 = operando1;
		  operando1 = residuo;
		  residuo = (int)objeto3 % (int)operando1;
	  }
	  return(operando1);
  }
  float sumar(float operando1,float operando2,float objeto3,float objeto4){
	  return (((operando1*objeto4)+(operando2*objeto3))/operando2*objeto4);
  }
  float restar(float operando1,float operando2,float objeto3,float objeto4){
	  return (((operando1*objeto4)-(operando2*objeto3))/operando2*objeto4);
  }
  float multiplicar(float operando1,float operando2,float objeto3,float objeto4){
	  return ((operando1*objeto3)/(operando2*objeto4));
  }
  float divison(float operando1,float operando2,float objeto3,float objeto4){
	  return ((operando1*objeto4)/(operando2*objeto3));
  }
  float elevar(float operando1,float operando2){
	  return ((operando1*operando1)/(operando2*operando2));
  }
  float elevarequi(float operando1,float operando2,float objeto3,float objeto4){
	  float a=(operando2*objeto3);
	  float b=(operando1*objeto4);
	  return ((a*a)/(b*b));
  }
};

int main() {
	int opc;
	float operando1, operando2, objeto3, objeto4;

	do{
	cout<<"Bienvenido a la calculadora"<<endl;
	cout<<"MENU:"<<endl;
	cout<<"1.Maximo comun divisor."<<endl;
	cout<<"2. Sumar."<<endl;
	cout<<"3. Restar."<<endl;
	cout<<"4. Multiplicar."<<endl;
	cout<<"5. Dividir."<<endl;
	cout<<"6. Elevar."<<endl;
	cout<<"7. Elevar Equivalent."<<endl;
	cout<<"8. Salir."<<endl;
	cout<<"\n"<<endl;
	cout<<"Digite el numero de la opcion que desea:"<<endl;
	cin>>opc;
	system("cls");
	Racional miOperacion;
	switch(opc){
	case 1:{
		char x;
		cout<<"Digite el divisor"<<endl;
		cin>>operando1;
		cout<<"Digite el dividendo"<<endl;
		cin>>objeto3;
		cout<< "El resultado es:"<<endl;
		cout<<miOperacion.maximoComunDiv(operando1, objeto3)<<endl;
		cout<<"Ingrese una tecla y enter para continuar..."<<endl;
		cin>>x;	
	}break;
	case 2:{
		char x;
		cout<<"Digite el primer numero"<<endl;
		cin>>operando1;
		cout<<"Digite el segundo numero"<<endl;
		cin>>operando2;
		cout<<"Digite el tercer numero"<<endl;
		cin>>objeto3;
		cout<<"Digite el cuarto numero"<<endl;
		cin>>objeto4;
		cout<< "El resultado es:"<<endl;
	cout<<miOperacion.sumar(operando1,operando2,objeto3,objeto4)<<endl;
	cout<<"Ingrese una tecla y enter para continuar..."<<endl;
	cin>>x;	
	}break;
	case 3:{
		char x;
		cout<<"Digite el primer numero"<<endl;
		cin>>operando1;
		cout<<"Digite el segundo numero"<<endl;
		cin>>operando2;
		cout<<"Digite el tercer numero"<<endl;
		cin>>objeto3;
		cout<<"Digite el cuarto numero"<<endl;
		cin>>objeto4;
		cout<< "El resultado es:"<<endl;
		cout<<miOperacion.restar(operando1,operando2,objeto3,objeto4)<<endl;
		cout<<"Ingrese una tecla y enter para continuar..."<<endl;
		cin>>x;
		
	}break;
	case 4:{
		char x;
		cout<<"Digite el primer numero"<<endl;
		cin>>operando1;
		cout<<"Digite el segundo numero"<<endl;
		cin>>operando2;
		cout<<"Digite el tercer numero"<<endl;
		cin>>objeto3;
		cout<<"Digite el cuarto numero"<<endl;
		cin>>objeto4;
		cout<< "El resultado es:"<<endl;
		cout<<miOperacion.multiplicar(operando1,operando2,objeto3,objeto4)<<endl;
		cout<<"Ingrese una tecla y enter para continuar..."<<endl;
		cin>>x;
		
	}break;
	case 5:{
		char x;
		cout<<"Digite el primer numero"<<endl;
		cin>>operando1;
		cout<<"Digite el segundo numero"<<endl;
		cin>>operando2;
		cout<<"Digite el tercer numero"<<endl;
		cin>>objeto3;
		cout<<"Digite el cuarto numero"<<endl;
		cin>>objeto4;
		cout<< "El resultado es:"<<endl;
		cout<<miOperacion.divison(operando1,operando2,objeto3,objeto4)<<endl;
		cout<<"Ingrese una tecla y enter para continuar..."<<endl;
		cin>>x;
		
	}break;
	case 6:{
		char x;
		cout<<"Digite el primer numero"<<endl;
		cin>>operando1;
		cout<<"Digite el segundo numero"<<endl;
		cin>>operando2;
		cout<< "El resultado es:"<<endl;
		cout<<miOperacion.elevar(operando1,operando2)<<endl;
		cout<<"Ingrese una tecla y enter para continuar..."<<endl;
		cin>>x;
		
	}break;
	case 7:{
		char x;
		cout<<"Digite el primer numero"<<endl;
		cin>>operando1;
		cout<<"Digite el segundo numero"<<endl;
		cin>>operando2;
		cout<<"Digite el tercer numero"<<endl;
		cin>>objeto3;
		cout<<"Digite el cuarto numero"<<endl;
		cin>>objeto4;
		cout<< "El resultado es:"<<endl;
		cout<<miOperacion.elevarequi(operando1,operando2,objeto3,objeto4)<<endl;
		cout<<"Ingrese una tecla y enter para continuar..."<<endl;
		cin>>x;
		
	}break;
	}	system("cls");
	} while(opc<8&&opc>=1);{
	cout<<"Gracias"<<endl;
	}
	return 0;
}

