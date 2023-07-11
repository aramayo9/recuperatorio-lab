#include<stdio.h>
#include<string.h>

int main()
{
	int cupo[4];
	char clase[20];
	int total=0, cont=0, cont2=0, cont3=0, cont4=0;
	char clase1[20]="top ride", clase2[20]="zumba", clase3[20]="entrenamiento", clase4[20]="abdominales";
	
	for(int i=0 ; i<4 ; i++)
	{
		printf("Ingrese el cupo maximo de la actividad: ");
		scanf("%d", &cupo[i]);
		total+=cupo[i];
	}
	total=total/2;
	
	for(int i=0 ; i<total ; i++)
	{
		for(int j=0 ; j<total ; j++)
		{
			printf("Ingrese la clase a la que se anoto el alumno |%d||%d|", i+1, j+1);
			fgets(clase, 20, stdin);
			getchar();
			clase[strcspn(clase, "\n")]='\0';
	
	if(strcmp(clase, "top ride")==0)
	{
		printf("\n Ningun alumno concurrio a la clase Top Ride\n");
		cont+=1;
	}
	
	if(strcmp(clase, "zumba")==0)
	{
		printf("Ningun alumno concurrio a la clase Zumba\n");
		cont2+=1;
	}
	
	if(strcmp(clase, "entrenamiento")==0)
	{
		printf("Ningun alumno concurrio a la clase Entrenamiento\n");
		cont3+=1;
	}
	
	if(strcmp(clase, "abdominales")==0)
	{
		printf("Ningun alumno concurrio a la clase Abdominales");
		cont4+=1;
	}
			
		}
	}
	printf("La cantidad de alumnos que asistieron a abdominales fueron %d", cont4);
	printf("La cantidad de alumnos que asistieron a entrenamiento fueron %d", cont3);
	printf("La cantidad de alumnos que asistieron a zumba fueron %d", cont2);
	printf("La cantidad de alumnos que asistieron a top ride fueron %d", cont);

	
}
