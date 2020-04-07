#include <iostream>
#include <math.h>

using namespace std;

int main() {
  char nombre[100];
  int edad;
  char direccion[100];
  int telefono;
  char hobby[100];
  float a,b, resultado = 0,resultado1 = 0,resultado2 = 0,resultado3 = 0,resultado4 = 0,r,areac = 0,pi,la,areacu = 0,ba,h,areat = 0,la1,areate = 0,lai,lab,areati = 0; 

  cout<<"ponga su nombre: "; cin>>nombre;  
  cout<<"ponga su edad: "; cin>>edad;  
  cout<<"ponga su direccion: "; cin>>direccion;  
  cout<<"ponga su telefono: "; cin>>telefono;  
  cout<<"cual es su hobby: "; cin>>hobby;

  cout<<"\nNombre: " <<nombre<<endl;
  cout<<"\nEdad: " <<edad<<endl;
  cout<<"\nDireccion: " <<direccion<<endl;
  cout<<"\nTelefono: " <<telefono<<endl;
  cout<<"\nHobby: " <<hobby<<endl;

  cout<<"\nEjerccio2:";

  cout<<"\nPonga su numero para a:"; cin>>a;
  cout<<"Ponga su numero para b:"; cin>>b;

  resultado = (a+b);
  resultado1 = (a-b);
  resultado2 = (a*b);
  resultado3 = (a/b);
  resultado4 = (sqrt(a+b));

  cout<<"\nResultado: " <<resultado<<endl;
  cout<<"\nResultado1: " <<resultado1<<endl;
  cout<<"\nResultado2: " <<resultado2<<endl;
  cout<<"\nResultado3: " <<resultado3<<endl;
  cout<<"\nResultado4: " <<resultado4<<endl;

  cout<<"\nEjercicio3";

  cout<<"\ncirculo";

  cout<<"\nde un valor para r:"; cin>>r;
  cout<<"de el valor de pi:"; cin>>pi;

  areac = (pi)*(pow(r,2));

  cout<<"\nAreac: " <<areac<<endl;

  cout<<"\nArea de un cuadrado:";

  cout<<"\nvalor para la:"; cin>>la;

  areacu = (pow(la,2));

  cout<<"\nAreacu: " <<areacu<<endl;

  cout<<"\nArea de un triangulo:";

  cout<<"valor para ba:"; cin>>ba;
  cout<<"valor para h:"; cin>>h;
  
  areat = (ba*h)/(2);
  
  cout<<"\nAreat: " <<areat<<endl;


  cout<<"\nArea de un triangulo equilatero:";

  cout<<"\nvalor para la1:"; cin>>la1;

  areate = (sqrt(3)*pow(la1,2))/(4);

  cout<<"\nAreate: " <<areate<<endl;


  cout<<"\nArea de un triangulo isosceles:";

  cout<<"\nvalor para lai:"; cin>>lai;
  cout<<"\nvalor para lab:"; cin>>lab;

  
  areati = (b*(sqrt(pow(a,2)-(pow(b,2)/4)))/2);
  
  cout<<"\nAreati: " <<areati<<endl;

  return 0;
}