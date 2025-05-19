//Producto punto entre dos vectores

#include <stdio.h>

#define max 30

int i;

int Damenumero()
	{
		int n;
		scanf("%i",&n);

		return n;
	}

void componentes(float array[],int comp)
    {
        for(i=0;i<comp;i++)
        {
            scanf("%f", &array[i]);
        }
    }
    
void imprVec(float array[],int vector)
    {
        for(i=0;i<vector;i++)
        {
            printf("%.1f   ",array[i]);
        }
        printf("\n"); 
    }

float prodpunt(float vec1[],float vec2[],int n)
    {
        float suma;
        suma=0;
        
        for(i=0;i<n;i++)
        {
            suma=suma+(vec1[i]*vec2[i]);
        }
        return suma;
    }

int main()
{
    int n;
    float v1[max];
    float v2[max];
    float ProductoPunto;

    printf("\nIngresa la dimensión de los vectores \n");
    n=Damenumero();
    
    printf("\nIngresa los componentes de tu primer vector \n");
    componentes(v1,n);
    
    printf("\nIngresa los componentes de tu segundo vector \n");
    componentes(v2,n);
    
    printf("\nVector 1:\n");
    imprVec(v1,n);
    
    printf("\nVector 2:\n");
    imprVec(v2,n);
    
    ProductoPunto=prodpunt(v1,v2,n);
    printf("\nEl producto punto entre los vectores es:\n %.1f \n",ProductoPunto);
    
    return 0;
}
