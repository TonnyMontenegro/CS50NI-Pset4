#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

#define BUFFER 512

int main(int argc, char *argv[])
{

    char *IMG = argv[1];

    if (argc != 2)
    {
        fprintf(stderr, "usage ./recover card.raw ");
        return 1;
    }

    //abre el archivo raw
    FILE *inp = fopen(IMG, "r");
    if (inp == NULL)
    {
        printf("no se puede abrir card.raw \n ");
        return 2;
    }

    unsigned char buffer[BUFFER];

    // cuenta el nombre de los archivos
    int Narchivos = 0;

    FILE *foto = NULL;

    // revisa si se encontro un JPG
    int jpg = 0; //false

    while (fread(buffer, BUFFER, 1, inp) == 1)
    {
        if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] & 0xe0) == 0xe0)
        {
            if (jpg == 1)
            {
                //se termino la primera foto asi que se cierra
                fclose(foto);
            }
            else
            {
                //se encontro un JPG
                jpg = 1;
            }

            char nombre[8];
            sprintf(nombre, "%03d.jpg", Narchivos);
            foto = fopen(nombre, "a");
            Narchivos++;
        }

        if (jpg == 1)
        {
            fwrite(&buffer, BUFFER, 1, foto);
        }

    }

    // cierra los archivos
    fclose(inp);
    fclose(foto);

    return 0;
}