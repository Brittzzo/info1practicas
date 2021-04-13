#include <stdio.h>
#include <math.h>
#define PI 3.14159265359

// Estoy probando manosearte el codigo e.e

float AreaCilindro(float r,float h)
{
  float AreaCilindro;
  AreaCilindro=2*PI*r*r+r*h;
  return AreaCilindro;  

}

float VolumenCubo(float l)
{
  float VolumenCubo;
  VolumenCubo=l*l*l;
  return VolumenCubo;  

}

float AreaCubo(float l)
{
  float AreaCubo;
  AreaCubo=6*l*l;
  return AreaCubo;  

}

float VolumenEsfera(float r)
{
  float VolumenEsfera;
  VolumenEsfera=PI*r*r*r*4/3;
  return VolumenEsfera;  

}

float AreaEsfera(float r)
{
  float AreaEsfera;
  AreaEsfera=4*PI*r*r;
  return AreaEsfera;  

}

float VolumenDodecaedro(float l)
{
  float VolumenDodecaedro;
  VolumenDodecaedro=(15+7*sqrt(5))*l*l*l*1/4;
  return VolumenDodecaedro;  

}

float AreaDodecaedro(float l)
{
  float AreaDodecaedro;
  AreaDodecaedro=3*sqrt(25+10*sqrt(5))*l*l;
  return AreaDodecaedro;  

}

int main(void)
{
  float r,h,l,resultadoareacilindro,resultadovolumencubo,resultadoareacubo,resultadovolumenesfera,resultadoareaesfera,resultadovolumendodecaedro,resultadoareadodecaedro;
  int menu;
  printf("Calculo de cuerpos. Presione el numero del calculo que desee realizar y luego Enter\n\t1_Area de un Cilindro\n\t2_Volumen de un Cubo\n\t3_Area de un Cubo\n\t4_Volumen de una Esfera\n\t5_Area de una Esfera\n\t6_Volumen de un Dodecaedro\n\t7_Area de un Dodecaedro\n");
  scanf("%d",&menu);
  switch(menu)
  {
    case 1:
      printf("Ingrese un valor para el radio \n");
      scanf("%f",&r); 
      printf("Ingrese un valor para la altura \n");
      scanf("%f",&h);
  
      resultadoareacilindro=AreaCilindro(r,h);
      printf("El area del cilindro es: %f",resultadoareacilindro);
    
    break;

    case 2:
      printf("Ingrese un valor para el lado \n");
      scanf("%f",&l); 

      resultadovolumencubo=VolumenCubo(l);
      printf("El volumen del cubo es: %f",resultadovolumencubo);

    break;

    case 3:
      printf("Ingrese un valor para el lado \n");
      scanf("%f",&l); 

      resultadoareacubo=AreaCubo(l);
      printf("El area del cubo es: %f",resultadoareacubo);

    break;

    case 4:
      printf("Ingrese un valor para el radio \n");
      scanf("%f",&r); 

      resultadovolumenesfera=VolumenEsfera(r);
      printf("El volumen de la esfera es: %f",resultadovolumenesfera);

    break;

    case 5:
      printf("Ingrese un valor para el radio \n");
      scanf("%f",&r); 

      resultadoareaesfera=AreaEsfera(r);
      printf("El area de la esfera es: %f",resultadoareaesfera);

    break;
    
    case 6:
      printf("Ingrese un valor para el lado \n");
      scanf("%f",&l); 

      resultadovolumendodecaedro=VolumenDodecaedro(l);
      printf("El volumen del dodecaedro es: %f",resultadovolumendodecaedro);

    break;

    case 7:
      printf("Ingrese un valor para el lado \n");
      scanf("%f",&l); 

      resultadoareadodecaedro=AreaDodecaedro(l);
      printf("El volumen del dodecaedro es: %f",resultadoareadodecaedro);

    break;

    default:
      printf("Valor incorrecto\n");
  }
  
  return 0;

}
