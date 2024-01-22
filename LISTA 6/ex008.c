#include<stdio.h>
#include<stdlib.h>

int main()
{
    int RESP, SEXO, OPINIAO, GOST, N_GOST;
    float FEM_SIM, MASC_NAO, HOM, MUL;
    GOST = N_GOST = FEM_SIM = MASC_NAO = HOM = MUL = 0;
    do
    {
        do
        {
            printf("Qual o seu sexo?\n[1]MASCULINO\n[2]FEMININO\n");
            scanf("%d",&SEXO);
        }
        while((SEXO!=1) && (SEXO!=2));
        if (SEXO == 1)
        {
            HOM++;
        }
        else
        {
            MUL++;
        }
        do
        {
            printf("Gostou do filme?\n[1]SIM\n[2]NAO\n");
            scanf("%d",&OPINIAO);
        }
        while((OPINIAO!=1) && (OPINIAO!=2));
        if (OPINIAO == 1)
        {
            GOST++;
            if(SEXO == 2)
            {
                FEM_SIM++;
            }
        }
        else
        {
            N_GOST++;
            if(SEXO == 1)
            {
                MASC_NAO++;
            }
        }
        do
        {
            printf("Deseja continuar?\n[1]SIM\n[2]NAO\n");
            scanf("%d",&RESP);
        }
        while((RESP!=1) && (RESP!=2));
    }
    while(RESP!=2);
    printf("%d pessoas gostaram do filme.\n",GOST);
    printf("%d pessoas nao gostaram do filme.\n", N_GOST);
    printf("%.1f por cento das mulheres gostaram do filme.\n",(FEM_SIM/MUL)*100);
    printf("%.1f por cento dos homens nao gostaram do filme.\n",(MASC_NAO/HOM)*100);
    system("pause");
    return 0;
}
