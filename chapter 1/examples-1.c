//-------------------------------------Example 2------------------------------------------

// #include <stdio.h>
// int main()
// {
//     float fahr, cel;
//     int lower,upper,step;

//     lower=0;
//     upper=300;
//     step=20;

//     fahr= lower;
//     printf("Table ");
//     while (fahr<=upper)
//     {
//         cel = (5.0/9) * (fahr-32);
//         printf("%3.0f %8.1f\n",fahr,cel);
//         fahr = fahr+step;
//     }

//     return 0;
// }

//--------------------------------------Section 1.3 The for statement--------------------------------------

// #include <stdio.h>
// int main()
// {
//     for (int fahr = 0; fahr < 300; fahr=fahr+20){
//         printf("%3d %8.2f\n", fahr, (5.0/9.0)* (fahr-32));
//     }

//     return 0;
// }

//--------------------------------------------------------------------------------------------

// #include <stdio.h>
// int main()
// {
//     int c; //Try to makke it to char and observe

//     c = getchar();
//     while (c != EOF)
//     {
//         putchar(c);
//         c = getchar();
//     }
//     return 0;
// }

//--------------------------------------------------------------------------------------------

// #include <stdio.h>
// int main()
// {
//     int c;
//     while ((c = getchar()) != EOF)
//         putchar(c);

//     return 0;
// }

//--------------------------------------------------------------------------------------------

// #include <stdio.h>
// int main()
// {
//     long nc;
//     nc = 0;
//     while (getchar() != EOF)
//         ++nc;
//     printf("%d", nc);
//     return 0;
// }

//--------------------------------------------------------------------------------------------

// #include <stdio.h>
// int main()
// {
//     double cnt;

//     for (cnt = 0; getchar() != EOF; ++cnt);
//     printf("%f", cnt);

//     return 0;
// }

//--------------------------------------------------------------------------------------------

#include <stdio.h>
int main()
{
    int lineCnt, c;
    lineCnt = 0;
    while ((c = getchar()) != EOF)
        if (c == '\n')
            ++lineCnt;
    printf("%d", lineCnt);

    return 0;
}