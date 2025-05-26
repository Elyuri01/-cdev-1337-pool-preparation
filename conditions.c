# include <stdio.h>

int main()
{
    int note;

    printf("Donne moi ta note :  ");
    scanf("%d", &note);

    if (note > 20 )
    {
        printf("INCORRECT! Note maximale est 20\n ");
    }
    else if (note >= 18)
    {
        printf("tres bien\n");
    }
    else if (note >= 15)
    {
        printf("bien\n");

    }
    else if(note >= 12)
    {
        printf("assez bien\n");
    }
    else if (note >= 10)
    {
        printf("passable\n");

    
    }
    else if (note < 10) 
    {
        printf("non valide\n");
    }

return 0;

}
