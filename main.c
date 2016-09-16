#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{





    char seguir='s';
    int codigo[3]={0};
    int auxCod;
    int i;
    char descripcion[3][30];
    int precio[3];
    int opcion;

    while(seguir=='s')
    {

        printf("1- Ingresar productos\n");
        printf("2- Borrar Producto\n");
        printf("3- Listar Productos\n");
        printf("4- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                for(i=0;i<3;i++)
                {

                    printf("ingrese el codigo\n");
                    scanf("%d",&auxCod);
                   if(auxCod!=codigo[i])
                   {
                    codigo[i]=auxCod;
                    printf("\ningrese descripcion\n");
                    fflush(stdin);
                    gets(descripcion[i]);
                    printf("ingrese precio\n");
                    scanf("%d",&precio[i]);
                   }

                }



                break;
            case 2:
                for(i=0;i<3;i++)
                {

                printf("ingrese el codigo a borrar");
                scanf("%d",&auxCod);
                    if(auxCod==codigo[i])
                    {
                        codigo[i]=-1;
                        break;
                    }
                    else
                    {
                        printf("El codigo no existe.\n Ningun codigo fue borrado\n");
                        break;
                    }

                }

                break;
            case 3:
                for(i=0;i<3;i++)
                {
                    if(codigo[i]!=-1)
                    {
                        printf("\ncodigo %d descripcion %s precio %d\n",codigo[i],descripcion[i],precio[i]);
                    }
                }


                break;
            case 4:
                seguir = 'n';
                printf("\n");
                break;



        }







    }






    return 0;
}
