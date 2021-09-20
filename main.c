#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>
int Clave()
{
 int y;
 int i;
 char pal [9],c[9];//esta es la clave 
 pal [0] = 'g';
 pal [1] = 'r';
 pal [2] = 'u';
 pal [3] = 'p';
 pal [4] = 'o';
 pal [5] = '6';
 pal [6] = 'x';
 pal [7] = 'x';
 pal [8] = '2';
 
 scanf("%s",c); /* No hace eco */
 if (c[0]==pal[0] || c[1]==pal[1] || c[2]==pal[2] || c[3]==pal[3] || c[4]==pal[4] || c[5]==pal[5] || c[6]==pal[6] || c[7]==pal[7] || c[8]==pal[8])
 {
 printf ("\nClave correcta...\n");
 y=1;
 }
 else
 {
   printf ("\nClave incorrecta.ADIOS..\n");
  exit(1);
  y=0;
 }
 
 return y;
}
typedef struct GamaAlta
{
 int id;
 char Modelo[10];
 char Marca[10];
 float precio;
 int numeroproductos;
}GamaAlta;
typedef struct GamaMedia
{
 int id;
 char Modelo[10];
 char Marca[10];
 float precio;
 int numeroproductos;
}GamaMedia;
typedef struct GamaBaja
{
 int id;
 char Modelo[10];
 char Marca[10];
 float precio;
 int numeroproductos;
}GamaBaja;
typedef struct Clientes
{
 int id;
 char nombres[100];
 char apellidos[100];
 char direcciones[100];
 char correos[100];
 int cedulas;
 int telefonos;
 int ncompraGA;
 int ncompraGM;
 int ncompraGB;
 int idGA;
 int idGM;
 int idGB;
 float pGA;
 float pGM;
 float pGB;
 int car;
 int aud;
 int usb;
 int mic;
 float nmic;
 float naud;
 float nusb;
 float ncar;
 int otroproga;
 int otroprogm;
 int otroprogb;
}Clientes;
GamaAlta ingresoProductosGA(int y)
{
 GamaAlta pro;
 char modelo[10];
 char marca[10];
 int n;
 float cost;
 pro.id=y;
 printf("Ingrese la marca del telefono:\n");
 scanf("%s",marca);
 strcpy(pro.Marca,marca);
 printf("Ingrese el modelo del telefono:\n");
 scanf("%s",modelo);
 strcpy(pro.Modelo,modelo);
 printf("Ingrese el numero de celulares obtenidos\n");
 scanf("%d",&n);
 pro.numeroproductos=n;
 printf("Ingrese el costo del telefono:\n");
 scanf("%f",&cost);
 pro.precio=cost;
 return pro;
}
GamaMedia ingresoProductosGM(int y)
{
 GamaMedia pro;
 char modelo[10];
 char marca[10];
 int n;
 float cost;
 pro.id=y;
 printf("Ingrese la marca del telefono:\n");
 scanf("%s",marca);
 strcpy(pro.Marca,marca);
 printf("Ingrese el modelo del telefono:\n");
 scanf("%s",modelo);
 strcpy(pro.Modelo,modelo);
 printf("Ingrese el numero de celulares obtenidos\n");
 scanf("%d",&n);
 pro.numeroproductos=n;
 printf("Ingrese el costo del telefono:\n");
 scanf("%f",&cost);
 pro.precio=cost;
 return pro;
}
GamaBaja ingresoProductosGB(int y)
{
 GamaBaja pro;
 char modelo[10];
 char marca[10];
 int n;
 float cost;
 pro.id=y;
 printf("Ingrese la marca del telefono:\n");
 scanf("%s",marca);
 strcpy(pro.Marca,marca);
 printf("Ingrese el modelo del telefono:\n");
 scanf("%s",modelo);
 strcpy(pro.Modelo,modelo);
 printf("Ingrese el numero de celulares obtenidos\n");
 scanf("%d",&n);
 pro.numeroproductos=n;
 printf("Ingrese el costo del telefono:\n");
 scanf("%f",&cost);
 pro.precio=cost;
 return pro;
}
Clientes ingresoDatos(int lon)
{
 Clientes cli;
 int ced,tlf;
 char nombre[20];
 char apellido[20];
 char correo[100];
 char direccion[20];
 cli.id=lon;
 printf("Ingresar nombre y apellido del cliente:\n");
 scanf("%s""%s",nombre,apellido);
 strcpy(cli.nombres,nombre);
 strcpy(cli.apellidos,apellido);
 printf("Ingresar numero de cedula:\n");
 scanf("%d",&ced);
 cli.cedulas=ced;
 printf("Ingresar direccion:\n");
 scanf("%s",direccion);
 strcpy(cli.direcciones,direccion);
 printf("Ingresar correo electronico:\n");
 scanf("%s",correo);
 strcpy(cli.correos,correo);
 printf("Ingrese el numero telefonico:\n");
 scanf("%d",&tlf);
 cli.telefonos=tlf;
 cli.ncompraGA=0;
 cli.idGA=0;
 cli.pGA=0;
 cli.ncompraGM=0;
 cli.idGM=0;
 cli.pGM=0;
 cli.ncompraGB=0;
 cli.idGB=0;
 cli.pGB=0;
 cli.nusb=0;
 cli.naud=0;
 cli.nmic=0;
 cli.ncar=0;
 cli.otroproga=0;
 cli.otroprogm=0;
 cli.otroprogb=0;
 return cli;
}
GamaAlta eliminarProductoGA(int h)
{
 GamaAlta eliga;
 int s,j;
 j=' ';
 s=strlen(eliga.Marca);
 for(int i=0;i<s;i++)
 {
 eliga.Marca[i]=j;
 }
 s=strlen(eliga.Modelo);
 for(int i=0;i<s;i++)
 {
 eliga.Modelo[i]=j;
 }
 eliga.numeroproductos=0;
 eliga.precio=0;
 return eliga;
}
GamaMedia eliminarProductoGM(int h)
{
 GamaMedia eliga;
 int s,j;
 j=' ';
 s=strlen(eliga.Marca);
 for(int i=0;i<s;i++)
 {
 eliga.Marca[i]=j;
 }
 s=strlen(eliga.Modelo);
 for(int i=0;i<s;i++)
 {
 eliga.Modelo[i]=j;
 }
 eliga.numeroproductos=0;
 eliga.precio=0;
 return eliga;
}
GamaBaja eliminarProductoGB(int h)
{
 GamaBaja eliga;
 int s,j;
 j=' ';
 s=strlen(eliga.Marca);
 for(int i=0;i<s;i++)
 {
 eliga.Marca[i]=j;
 }
 s=strlen(eliga.Modelo);
 for(int i=0;i<s;i++)
 {
 eliga.Modelo[i]=j;
 }
 eliga.numeroproductos=0;
 eliga.precio=0;
 return eliga;
}
Clientes eliminarCliente(int g)
{
 Clientes clien;
 int s,j;
 j=' ';
 s=strlen(clien.nombres);
 for(int i=0;i<s;i++)
 {
 clien.nombres[i]=j;
 }
 s=strlen(clien.apellidos);
 for(int i=0;i<s;i++)
 {
 clien.apellidos[i]=j;
 }
 s=strlen(clien.direcciones);
 for(int i=0;i<s;i++)
 {
 clien.direcciones[i]=j;
 }
 s=strlen(clien.correos);
 for(int i=0;i<s;i++)
 {
 clien.correos[i]=j;
 }
 clien.cedulas=0;
 clien.telefonos=0;
 clien.id=g;
 return clien;
}
int main(void)
{
 int men1,men2,menP,menC,menV,menF,ret,cell,modp,modpro,vent,idv,fac;
 int c=0,modi,opc,ga=0,gm=0,gb=0,clave,j=0,ja=0,jb=0,jm=0;
 float cA,cM,cB,cargp=0,micasp=0,audp=0,usbp=0,subtotal,iva,precio;
 float pA,pM,pB;
 int dia,mes,anio;
 int ced,tlf,nA=0,nM=0,nB=0,ccA=0,ccM=0,ccB=0,carg=0,micas=0,aud=0,usb=0;
 Clientes cliente[100];
 GamaAlta GA[100];
 GamaMedia GM[100];
 GamaBaja GB[100];
 time_t sisTime; //time_t es un typedef, asigno una varible de este tipo (sisTime);
struct tm *tiempo; //Creo un puntero a la estructura tm, (ya definida en time.h).
time(&sisTime); //time obtiene el tiempo del sistema y se lo pasa a la direccion de sisTime.
tiempo=localtime(&sisTime);
//Convierte los valores de sisTime a compatibles con la estructura tm y luego asigno ese valor a tiempo.
//Una estructura tm, esta compuesta por datos de tipo int (vean la seccion de time.h)
 FILE *datos;
 dia=tiempo->tm_mday; //accedo al valor de dia de la estructura tm y se la asigno a dia
 mes=tiempo->tm_mon; //accedo a mes de la estrutura tm y se la asigno a mes
 anio=(tiempo->tm_year)+1900; //year es un contador a partir de 1900.
 datos=fopen("Clientes.txt","r+");

 if (datos==NULL)
 {
 datos=fopen("Clientes.txt","w+");
 }
 else
 {
   while(!feof(datos))
 {
 fscanf(datos,"%d",&cliente[j].id);
 fscanf(datos,"%s",cliente[j].nombres);
 fscanf(datos,"%s",cliente[j].apellidos);
 fscanf(datos,"%s",cliente[j].correos);
 fscanf(datos,"%s",cliente[j].direcciones);
 fscanf(datos,"%d",&cliente[j].cedulas);
 fscanf(datos,"%d",&cliente[j].telefonos);
 j++;
 }
 c=j-1;
 }
 fclose(datos);
 FILE *GamAl;
 GamAl=fopen("GamaAlta.txt","r+");

 if (GamAl==NULL)
 {
 GamAl=fopen("GamaAlta.txt","w+");
 }
 else
 {
 while(!feof(GamAl))
 {
 fscanf(GamAl,"%d",&GA[ja].id);
 fscanf(GamAl,"%s",GA[ja].Marca);
 fscanf(GamAl,"%s",GA[ja].Modelo);
 fscanf(GamAl,"%d",&GA[ja].numeroproductos);
 fscanf(GamAl,"%f",&GA[ja].precio);
 ja++;
 }
 ga=ja-1;
 nA=ga;
 }
 fclose(GamAl);
 FILE *GamMe;
 GamMe=fopen("GamaMedia.txt","r+");

 if (GamMe==NULL)
 {
 GamMe=fopen("GamaMedia.txt","w+");
 }
 else
 {
   while(!feof(GamMe))
 {
 fscanf(GamMe,"%d",&GM[jm].id);
 fscanf(GamMe,"%s",GM[jm].Marca);
 fscanf(GamMe,"%s",GM[jm].Modelo);
 fscanf(GamMe,"%d",&GM[jm].numeroproductos);
 fscanf(GamMe,"%f",&GM[jm].precio);
 jm++;
 }
 gm=jm-1;
 nM=gm;
 }
 fclose(GamMe);
 FILE *GamBa;
 GamBa=fopen("GamaBaja.txt","r+");

 if (GamBa==NULL)
 {
 GamBa=fopen("GamaBaja.txt","w+");
 }
 else
 {
 while(!feof(GamBa))
 {
 fscanf(GamBa,"%d",&GB[jb].id);
 fscanf(GamBa,"%s",GB[jb].Marca);
 fscanf(GamBa,"%s",GB[jb].Modelo);
 fscanf(GamBa,"%d",&GB[jb].numeroproductos);
 fscanf(GamBa,"%f",&GB[jb].precio);
 jb++;
 }
 gb=jb-1;
 nB=gb;
 }
 fclose(GamBa);
 do
 {
 printf("\t\t\t\t**CEL TEGNOLOGY S.A** \n");
 printf("1. Administrador \n");
 printf("2. Salir \n");
 printf("Escoja una opcion [1-2]: ");
 scanf("%d",&men1);
 switch(men1)
 {
   case 1:
 {
 printf("\t\t\t\t**CEL TEGNOLOGY S.A** \n");
 printf("Administrador \n");
 clave=Clave();
 if(clave==1)
 {
 do
 {
 printf("\t\t\t\t**CEL TEGNOLOGY S.A** \n");
 printf("Administrador \n");
 printf("1. Clientes \n");
 printf("2. Producto \n");
 printf("3. Ventas \n");
 printf("4. Factura \n");
 printf("5. Regresar \n");
 printf("Escoja una opcion [1-5]: ");
 scanf("%d",&men2);

 switch(men2)
 {
 case 1:
 {
 do
 {
 printf("\t\t\t\t**CEL TEGNOLOGY S.A** \n");
 printf("Clientes \n");
 printf("1. Ingresar Nuevo Cliente\n");
 printf("2. Lista de Clientes \n");
 printf("3. Modificar Cliente \n");
 printf("4. Eliminar Cliente \n");
 printf("5. Regresar\n");
 printf("Escoja una opcion [1-5]: ");
 scanf("%d",&menC);
 
 switch(menC)
 {
 case 1:
 {
 do
{

printf("\t\t\t\t**CEL TEGNOLOGY S.A** \n");
 printf("Ingresar Nuevo Cliente\n");
 cliente[c]=ingresoDatos (c);
c++;
printf("\nPulse 0 para regresar:");
 scanf("%d",&ret);
 }
while(ret!=0);
 }
 break;
 case 2:
 {
 do
{
 printf("\t\t\t\t**CEL TEGNOLOGY S.A** \n");
 printf("Lista de Clientes\n");
printf("ID\tNombre\t\tCedula\t\tDireccion\tCorreo\t\t\tTelefono\n");

printf("__________________________________\n");
 for(int n=0;n<c;n++)
 {
 printf("%d\t%s %s \t%d \t%s \t%s \t0%d\n",cliente[n].id,cliente[n].nombres,cliente[n].apellidos,cliente[n].cedulas,cliente[n].direcciones,cliente[n].correos,cliente[n].telefonos);
 }
printf("\nPulse 0 para regresar:");
scanf("%d",&ret);
 }
while(ret!=0);
 }
 break;
 case 3:
 {
 do
{
 printf("\t\t\t\t**CEL TEGNOLOGY S.A** \n");
 printf("Modificar Cliente\n");
 printf("ID\tNombre\t\tCedula\t\tDireccion\tCorreo\t\t\tTelefono\n");

printf("__________________________________\n");
 for(int n=0;n<c;n++)
{
  printf("%d\t%s %s \t%d \t%s \t%s \t0%d\n",cliente[n].id,cliente[n].nombres,cliente[n].apellidos,cliente[n].cedulas,cliente[n].direcciones,cliente[n].correos,cliente[n].telefonos);
 }
 printf("Ingrese el id del cliente que desea modificar:\n");
scanf("%d",&modi);
printf("Nombre\t\tCedula\t\tDireccion\tCorreo\t\tTelefono\n");

printf("__________________________________\n");
 printf("%s %s \t%d \t%s \t%s \t\t0%d\n",cliente[modi].nombres,cliente[modi].apellidos,cliente[modi].cedulas,cliente[modi].direcciones,cliente[modi].correos,cliente[modi].telefonos);
 cliente[modi]=ingresoDatos (modi);
 printf("\nPulse 0 para regresar:");
 scanf("%d",&ret);

 }
 while(ret!=0);
 }
 break;
 case 4:
 {
 do
 {
 printf("\t\t\t\t**CEL TEGNOLOGY S.A** \n");
 printf("Eliminar Cliente\n");
printf("ID\tNombre\t\tCedula\t\tDireccion\tCorreo\t\t\tTelefono\n");

printf("__________________________________\n");
 for(int n=0;n<c;n++)
{
 printf("%d\t%s %s \t%d \t%s \t%s \t0%d\n",cliente[n].id,cliente[n].nombres,cliente[n].apellidos,cliente[n].cedulas,cliente[n].direcciones,cliente[n].correos,cliente[n].telefonos);
 }
printf("Ingrese el id del cliente que desea Eliminar:\n");
scanf("%d",&modi);
cliente[modi]=eliminarCliente (modi);
printf("\nPulse 0 para regresar:");
 scanf("%d",&ret);

 }
while(ret!=0);
}
 break;
 }
 break;
 }
 while(menC!=5);
 }
 break;
 case 2:
 {
 do
 {
 printf("\t\t\t\t**CEL TEGNOLOGY S.A** \n");
 printf("Productos \n");
 printf("1. Entrada de producto \n");
 printf("2. Mercaderia Disponible\n");
 printf("3. Modificar Producto\n");
 printf("4. Eliminar Producto\n");
 printf("5. Regresar \n");
 printf("Escoja una opcion [1-5]: ");
 scanf("%d",&menP);
 
 switch(menP)
 {
 case 1:
 {
 do
{
 printf("\t\t\t\t**CEL TEGNOLOGY S.A** \n");
 printf("Entrada de Producto\n");
printf("Celulares:\n");
 printf("1.Gama Alta\n");
 printf("2.Gama Media\n");
printf("3.Gama Baja\n");
printf("4.Salir\n");
 printf("Escoja una opcion [1-4]: ");
 scanf("%d",&cell);
switch(cell)
 {
 case 1:
{
 do
{
 printf("\t\t\t\t**CEL TEGNOLOGY S.A** \n");
 printf("Entrada de Producto\n");
printf("Celulares:\n");
 printf("Gama Alta\n");
GA[ga]=ingresoProductosGA(ga);
ga++;
 nA++;
 printf("\nPulse 0 para regresar:");
scanf("%d",&ret);

 }
while(ret!=0);
 }
break;
case 2:
 {
 do
{
 printf("\t\t\t\t**CEL TEGNOLOGY S.A** \n");
 printf("Entrada de Producto\n");
 printf("Celulares:\n");
printf("Gama Media\n");
 GM[gm]=ingresoProductosGM(gm);
gm++;
nM++;
 printf("\nPulse 0 para regresar:");
 scanf("%d",&ret);

 }
 while(ret!=0);
 }
break;
case 3:
 {
 do
{
 printf("\t\t\t\t**CEL TEGNOLOGY S.A** \n");
 printf("Entrada de Producto\n");
printf("Celulares:\n");
 printf("Gama Baja\n");
GB[gb]=ingresoProductosGB(gb);
 gb++;
 nB++;
printf("\nPulse 0 para regresar:");
scanf("%d",&ret);

}
while(ret!=0);
 }
break;
 }
break;
printf("\nPulse 0 para regresar:");
 scanf("%d",&ret);

 }
while(cell!=4);
 }
 break;
 case 2:
 {
 do
{
 printf("\t\t\t\t**CEL TEGNOLOGY S.A** \n");
 printf("Mercaderia Disponible\n");
if(nA==0)
{

printf("__________________________\n");
 printf("STOCK AGOTADO en Gama ALta\n");

printf("__________________________\n");
 }
else
{

printf("__________________________\n");
 printf("Gama Alta\n");
 printf("ID\t#p\tMarca\t\tModelo\n");

printf("__________________________\n");
 for(int j=0;j<nA;j++)
{

printf("%d\t%d\t%s\t\t%s\n",GA[j].id,GA[j].numeroproductos,GA[j].Marca,GA[j].Modelo);
 }
 printf("__________________________\n");
 }
 if(nM==0)
{

printf("__________________________\n");
 printf("STOCK AGOTADO en Gama Media\n");

printf("__________________________\n");
 }
 else
{

printf("__________________________\n");
 printf("Gama Media\n");
 printf("ID\t#p\tMarca\t\tModelo\n");

printf("__________________________\n");
 for(int j=0;j<nM;j++)
 {

printf("%d\t%d\t%s\t\t%s\n",GM[j].id,GM[j].numeroproductos,GM[j].Marca,GM[j].Modelo);
 }
printf("__________________________\n");
 }
if(nB==0)
{

printf("__________________________\n");
 printf("STOCK AGOTADO en Gama Baja\n");
printf("__________________________\n");
 }
else
{
  printf("__________________________\n");
 printf("Gama Baja\n");
printf("ID\t#p\tMarca\t\tModelo\n");

printf("__________________________\n");
 for(int j=0;j<nB;j++)
 {

printf("%d\t%d\t%s\t\t%s\n",GB[j].id,GB[j].numeroproductos,GB[j].Marca,GB[j].Modelo);
 }
printf("__________________________\n");
 }
printf("\nPulse 0 para regresar:");
scanf("%d",&ret);
 }
while(ret!=0);
 }
 break;
 case 3:
 {
 do
{
 printf("\t\t\t\t**CEL TEGNOLOGY S.A** \n");
 printf("Modificar Producto\n");
printf("1.Gama Alta\n2.Gama Media\n3.Gama Baja\n4.Salir\n");
 scanf("%d",&modp);
 switch(modp)
{
 case 1:
{
 if(nA==0)
 {

printf("__________________________\n");
 printf("STOCK AGOTADO en Gama ALta\n");

printf("__________________________\n");
}
 else
{

printf("__________________________\n");
 printf("GAMA ALTA\n");
printf("ID\t#p\tMarca\t\tModelo\tPrecio\n");

printf("__________________________\n");
 for(int j=0;j<nA;j++)
{

printf("%d\t%d\t%s\t\t%s\t%.2f\n",GA[j].id,GA[j].numeroproductos,GA[j].Marca,GA[j].Modelo
,GA[j].precio);
 }

printf("__________________________\n");
 printf("Ingrese Id del producto que desea modificar:\n");
 scanf("%d",&modpro);
 GA[modpro]=ingresoProductosGA(modpro);
 }
 }
 break;
case 2:
{
 if(nM==0)
 {

printf("__________________________\n");
 printf("STOCK AGOTADO en Gama Media\n");

printf("__________________________\n");
 }
 else
{

printf("__________________________\n");
 printf("GAMA MEDIA\n");
 printf("ID\t#p\tMarca\t\tModelo\tPrecio\n");

printf("__________________________\n");
 for(int j=0;j<nM;j++)
{

printf("%d\t%d\t%s\t\t%s\t%.2f\n",GM[j].id,GM[j].numeroproductos,GM[j].Marca,GM[j].Modelo,GM[j].precio);
 }
printf("__________________________\n");
 printf("Ingrese Id del producto que desea modificar:\n");
scanf("%d",&modpro);
GM[modpro]=ingresoProductosGM(modpro);
 }
 }
 break;
case 3:
{
 if(nB==0)
 {

printf("__________________________\n");
 printf("STOCK AGOTADO en Gama Baja\n");

printf("__________________________\n");
 }
else
 {

printf("__________________________\n");
 printf("GAMA BAJA\n");
 printf("ID\t#p\tMarca\t\tModelo\tPrecio\n");

printf("__________________________\n");
 for(int j=0;j<nB;j++)
 {
   printf("%d\t%d\t%s\t\t%s\t%.2f\n",GB[j].id,GB[j].numeroproductos,GB[j].Marca,GB[j].Modelo,GB[j].precio);
 }
printf("__________________________\n");
 printf("Ingrese Id del producto que desea modificar:\n");
 scanf("%d",&modpro);
GB[modpro]=ingresoProductosGB(modpro);
 }
 }
break;
 }
 printf("\nPulse 0 para regresar:");
scanf("%d",&ret);
 }
 while(ret!=0 & modp!=4);
 }
 break;
 case 4:
 {
 do
 {
 printf("\t\t\t\t**CEL TEGNOLOGY S.A** \n");
 printf("Eliminar Producto\n");
 printf("1.Gama Alta\n2.Gama Media\n3.Gama Baja\n4.Salir\n");
 scanf("%d",&modp);
switch(modp)
{
 case 1:
 {
 if(nA==0)
{

printf("__________________________\n");
 printf("STOCK AGOTADO en Gama ALta\n");
printf("__________________________\n");
 }
else
{
printf("__________________________\n");
 printf("GAMA ALTA\n");
 printf("ID\t#p\tMarca\t\tModelo\tPrecio\n");

printf("__________________________\n");
 for(int j=0;j<nA;j++)
{

printf("%d\t%d\t%s\t\t%s\t%.2f\n",GA[j].id,GA[j].numeroproductos,GA[j].Marca,GA[j].Modelo,GA[j].precio);
 }
printf("__________________________\n");
 printf("Ingrese Id del producto que desea eliminar:\n");
scanf("%d",&modpro);
 GA[modpro]=eliminarProductoGA(modpro);
 }
 }
break;
 case 2:
 {
 if(nM==0)
{

printf("__________________________\n");
 printf("STOCK AGOTADO en Gama Media\n");

printf("__________________________\n");
 }
else
 {

printf("__________________________\n");
 printf("GAMA MEDIA\n");
printf("ID\t#p\tMarca\t\tModelo\tPrecio\n");
printf("__________________________\n");
 for(int j=0;j<nM;j++)
 {

printf("%d\t%d\t%s\t\t%s\t%.2f\n",GM[j].id,GM[j].numeroproductos,GM[j].Marca,GM[j].Modelo,GM[j].precio);
 }
printf("__________________________\n");
 printf("Ingrese Id del producto que desea eliminar:\n");
 scanf("%d",&modpro);
GM[modpro]=eliminarProductoGM(modpro);
 }
 }
break;
case 3:
 {
 if(nB==0)
{

printf("__________________________\n");
 printf("STOCK AGOTADO en Gama Baja\n");
printf("__________________________\n");
 }
 else
{

printf("__________________________\n");
 printf("GAMA BAJA\n");
printf("ID\t#p\tMarca\t\tModelo\tPrecio\n");

printf("__________________________\n");
 for(int j=0;j<nB;j++)
{

printf("%d\t%d\t%s\t\t%s\t%.2f\n",GB[j].id,GB[j].numeroproductos,GB[j].Marca,GB[j].Modelo,GB[j].precio);
}

printf("__________________________\n");
 printf("Ingrese Id del producto que desea eliminar:\n");
 scanf("%d",&modpro);
 GB[modpro]=eliminarProductoGB(modpro);
 }
 }
 break;
}
printf("\nPulse 0 para regresar:");
scanf("%d",&ret);
 }
 while(ret!=0 & modp!=4);
 }
 break;
 }
 break;
 }
 while(menP!=5);
 }
 break;
 case 3:
 {

 printf("\t\t\t\t**CEL TEGNOLOGY S.A** \n");
 printf("Ventas \n");
 printf("ID\tNombre\t\tCedula\t\tDireccion\tCorreo\t\t\tTelefono\n");

printf("__________________________________\n");
 for(int n=0;n<c;n++)
 {
 printf("%d\t%s %s \t%d \t%s \t%s \t0%d\n",cliente[n].id,cliente[n].nombres,cliente[n].apellidos,cliente[n].cedulas,cliente[n].direcciones,cliente[n].correos,cliente[n].telefonos);
 }
 printf("Ingrese el ID del cliente que va hacer la compra:\n");
 scanf("%d",&vent);
 do
 {
 printf("\t\t\t\t**CEL TEGNOLOGY S.A** \n");
 printf("Ventas \n");
 printf("Celulares:\n");
 printf("1.Gama Alta\n");
 printf("2.Gama Media\n");
 printf("3.Gama Baja\n");
 printf("4.Accesorios \n");
 printf("5.Regresar\n");
 printf("Escoja una opcion [1-5]: ");
 scanf("%d",&menV);
 switch(menV)
 {
 case 1:
 {
 do
 {
 printf("\t\t\t\t**CEL TEGNOLOGY S.A** \n");
 printf("Ventas \n");
printf("Celulares:\n");
printf("Gama Alta\n");
if(nA==0)
{

printf("__________________________\n");
 printf("No hay celulares en STOCK");
printf("__________________________\n");
 }
else
{
 printf("Celulares en Stock:\n");

printf("__________________________\n");
 printf("ID\t#p\tMarca\t\tModelo\tPrecio\n");

printf("__________________________\n");
 for(int j=0;j<nA;j++)
{

printf("%d\t%d\t%s\t\t%s\t%.2f\n",GA[j].id,GA[j].numeroproductos,GA[j].Marca,GA[j].Modelo,GA[j].precio);
 }
 printf("__________________________\n");
 printf("Ingrese el Id del telefono que desea comprar:\n");
scanf("%d",&idv);
 printf("\nQue cantidad de telefonos desea llevar:\n");
 scanf("%d",&ccA);
cliente[vent].ncompraGA=ccA;
 cliente[vent].idGA=idv;
 cliente[vent].pGA=GA[idv].precio*ccA; //Costo total de los celulares
 GA[idv].numeroproductos=GA[idv].numeroproductos-ccA;
 }
 printf("\nGracias.\n");
 printf("\nPulse 0 para regresar:");
scanf("%d",&ret);
 }
while(ret!=0);
 }
 break;
 case 2:
 {
 do
{
 printf("\t\t\t\t**CEL TEGNOLOGY S.A** \n");
 printf("Ventas \n");
printf("Celulares:\n");
 printf("Gama Media\n");
 if(nM==0)
{

printf("__________________________\n");
 printf("No hay celulares en STOCK");
printf("__________________________\n");
 }
 else
{
 printf("Celulares en Stock:\n");

printf("__________________________\n");
printf("ID\t#p\tMarca\t\tModelo\tPrecio\n");

printf("__________________________\n");
 for(int j=0;j<nA;j++)
{

printf("%d\t%d\t%s\t\t%s\t%.2f\n",GA[j].id,GA[j].numeroproductos,GA[j].Marca,GA[j].Modelo
,GA[j].precio);
 }
printf("__________________________\n");
 printf("Ingrese el Id del telefono que desea comprar:\n");
 scanf("%d",&idv);
 printf("\nQue cantidad de telefonos desea llevar:\n");
 scanf("%d",&ccA);
 cliente[vent].ncompraGM=ccA;
 cliente[vent].idGM=idv;
cliente[vent].pGM=GM[idv].precio*ccA; //Costo total de los celulares
 GM[idv].numeroproductos=GM[idv].numeroproductos-ccA;
 }
printf("\nGracias.\n");
 printf("\nPulse 0 para regresar:");
 scanf("%d",&ret);
 }
 while(ret!=0);
 }
 break;
 case 3:
 {
 do
 {
 printf("\t\t\t\t**CEL TEGNOLOGY S.A** \n");
 printf("Ventas \n");
printf("Celulares:\n");
 printf("Gama Baja\n");
 if(nB==0)
{

printf("__________________________\n");
 printf("No hay celulares en STOCK");
 printf("__________________________\n");
 }
else
{
 printf("Celulares en Stock:\n");

printf("__________________________\n");
 printf("ID\t#p\tMarca\t\tModelo\tPrecio\n");

printf("__________________________\n");
 for(int j=0;j<nA;j++)
{

printf("%d\t%d\t%s\t\t%s\t%.2f\n",GA[j].id,GA[j].numeroproductos,GA[j].Marca,GA[j].Modelo,GA[j].precio);
 }

printf("__________________________\n");
 printf("Ingrese el Id del telefono que desea comprar:\n");
 scanf("%d",&idv);
 printf("\nQue cantidad de telefonos desea llevar:\n");
 scanf("%d",&ccA);
 cliente[vent].ncompraGB=ccA;
 cliente[vent].idGB=idv;
cliente[vent].pGB=GB[idv].precio*ccA; //Costo total de los celulares
 GB[idv].numeroproductos=GB[idv].numeroproductos-ccA;
 }
printf("\nGracias.\n");
 printf("\nPulse 0 para regresar:");
 scanf("%d",&ret);

 }
 while(ret!=0);
 }
 break;
 case 4:
 {
 do
{
  printf("\t\t\t\t**CEL TEGNOLOGY S.A** \n");
 printf("Ventas \n");
 printf("Accesorios:\n");
printf("Mercaderia Costo\n");
printf("Micas 5.50$\n");
 printf("Cargadores 10.50$\n");
 printf("Cable USB 5.25$\n");
printf("Audifonos 15.50$\n");
 printf("La instalacion de la mica es gratuita:\n");
 printf("Cuantos cargadores desea comprar:\n");
scanf("%d",&carg);
 cliente[vent].car=carg;
 cliente[vent].ncar=carg*10.5;
printf("Cuantas micas desea comprar:\n");
 scanf("%d",&micas);
 cliente[vent].mic=micas;
cliente[vent].nmic=micas*5.5;
 printf("Cuantos cables USB desea comprar:\n");
 scanf("%d",&usb);
cliente[vent].usb=usb;
cliente[vent].nusb=usb*5.25;
printf("Cuantos audifonos desea comprar:\n");
scanf("%d",&aud);
cliente[vent].aud=aud;
cliente[vent].naud=aud*15.5;
printf("\nGracias.\n");
 printf("\nPulse 0 para regresar:");
 scanf("%d",&ret);

 }
 while(ret!=0);
 }
 break;
 }
 break;
 }
 while(menV!=5);
 }
 break;
 case 4:
 {
 do
 {
 printf("ID\tNombre\t\tCedula\t\tDireccion\tCorreo\t\t\tTelefono\n");
 printf("__________________________________\n");
 for(int n=0;n<c;n++)
 {
 printf("%d\t%s %s \t%d \t%s \t%s \t0%d\n",cliente[n].id,cliente[n].nombres,cliente[n].apellidos,cliente[n].cedulas,cliente[n].direcciones,cliente[n].correos,cliente[n].telefonos);
 }
 printf("Ingrese el id del cliente que desea ver la Factura:\n");
 scanf("%d",&modi);
 fac=modi;
 printf("\t\t\t\t**CEL TEGNOLOGY S.A** \n");
 printf("\t\t\t\t\t\t\t#factura: 000-001\n");
 printf("\t\tLadron de Guevera E11-253, Quito 170517\n");
 printf("\t\t\tFecha: %d/%d/%d\n",dia,mes+1,anio);//imprime las variables,mes+1?, es por que cuenta los meses desde 0
 printf("\t\t\tTelf: 095060755\n");

printf("__________________________\n");
 printf("Nombre del cliente: %s %s\n",cliente[fac].nombres,cliente[fac].apellidos);
 printf("Cedula/RUC: %d Telefono: 0%d\n",cliente[fac].cedulas,cliente[fac].telefonos);
 printf("Direccion: %s\n",cliente[fac].direcciones);

printf("__________________________\n");
 printf("CANTIDAD\tDETALLE\t\t\tPRECIO C/U\tPRECIO\n");
 if(cliente[fac].ncompraGA>=1)
 {
 printf("%d\t%s %s\t\t\t%.2f$\t\t%.2f$\n",cliente[fac].ncompraGA,GA[cliente[fac].idGA].Marca,GA[cliente[fac].idGA].Modelo,GA[cliente[fac].idGA].precio,cliente[fac].pGA);
 }
 if(cliente[fac].ncompraGM>=1)
 {
 printf("%d\t%s %s\t\t\t%.2f$\t\t%.2f$\n",cliente[fac].ncompraGM,GM[cliente[fac].idGM].Marca,GM[cliente[fac].idGM].Modelo,GM[cliente[fac].idGM].precio,cliente[fac].pGM);
 }
 if(cliente[fac].ncompraGB>=1)
 {
   printf("%d\t%s %s\t\t\t%.2f$\t\t%.2f$\n",cliente[fac].ncompraGB,GB[cliente[fac].idGB].Marca,GB[cliente[fac].
idGB].Modelo,GB[cliente[fac].idGB].precio,cliente[fac].pGB);
 }
 if(cliente[fac].ncar>=1)
 {

printf("%d\tCargadores\t\t\t10.50$\t\t%.2f$\n",cliente[fac].car,cliente[fac].ncar);
 }
 if(cliente[fac].nmic>=1)
 {

printf("%d\tMicas\t\t\t\t5.50$\t\t%.2f$\n",cliente[fac].mic,cliente[fac].nmic);
 }
 if(cliente[fac].naud>=1)
 {

printf("%d\tAudifonos\t\t\t15.50$\t\t%.2f$\n",cliente[fac].aud,cliente[fac].naud);
 }
 if(cliente[fac].nusb>=1)
 {
 printf("%d\tCables USB\t\t\t5.25$\t\t%.2f$\n",cliente[fac].usb,cliente[fac].nusb);
 }

subtotal=cliente[fac].pGA+cliente[fac].pGM+cliente[fac].pGB+cliente[fac].ncar+cliente[fac].nmic+cliente[fac].naud+cliente[fac].nusb;
  iva=subtotal*0.12;
 precio=subtotal+iva;

printf("__________________________\n");
 printf("\n\t\t\t\t\tSubtotal:\t%.2f$\n",subtotal);
 printf("\t\t\t\t\tIVA:\t\t%.2f$\n",iva);
 printf("\t\t\t\t\tTotal:\t\t%.2f$\n", precio);

printf("__________________________\n\n\n");
 printf("\t\t\t_______\n");
 printf("\t\t\t Recibi conforme\n");
 printf("\nPulse 0 para regresar:");
 scanf("%d",&ret);

 }
 while(ret!=0);
 }
 break;
 }
 }
 while(men2!=5);
 }
 }
 break;
 }
 }
 while(men1!=2);
 datos=fopen("Clientes.txt","w+");
 for(int n=0; n<c; n++)
 {
 fprintf(datos,"%d %s %s %s %s %d %d\n",cliente[n].id,cliente[n].nombres,cliente[n].apellidos,cliente[n].correos,cliente[n].direcciones,cliente[n].cedulas,cliente[n].telefonos);
 }
 fclose(datos);
 GamAl=fopen("GamaAlta.txt","w+");
 for(int n=0; n<nA; n++)
 {
 fprintf(GamAl,"%d %s %s %d %f\n",GA[n].id,GA[n].Marca,GA[n].Modelo,GA[n].numeroproductos,GA[n].precio);
 }
 fclose(GamAl);
 GamMe=fopen("GamaMedia.txt","w+");
 for(int n=0; n<nM; n++)
 {
 fprintf(GamMe,"%d %s %s %d %f\n",GM[n].id,GM[n].Marca,GM[n].Modelo,GM[n].numeroproductos,GM[n].precio);
 }
 fclose(GamMe);
 GamBa=fopen("GamaBaja.txt","w+");
 for(int n=0; n<nB; n++)
 {
 fprintf(GamBa,"%d %s %s %d %f\n",GB[n].id,GB[n].Marca,GB[n].Modelo,GB[n].numeroproductos,GB[n].precio);
 }
 fclose(GamBa);
 system("pause");
 return 0;
}