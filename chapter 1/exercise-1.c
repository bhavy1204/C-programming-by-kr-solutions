// Exercise 1.2
// #include <stdio.h>
// int main()
// {
//     printf("\ehel\llo\t world\z");
//     return 0;
// }

//--------------------------------------------------------------------------------------------

// #include <stdio.h>
// void main()
// {
//     printf("hello world");
// }

//-------------------------------------Exercise 1.5-------------------------------------------

// #include <stdio.h>
// #define LOWER 0; //try this as well and observe the error
// #define LOWER 0
// #define UPPER 300
// #define STEP 20
// #define H "Hello"
// int main()
// {
//     printf("%s", H);
//     for (int fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP){
//         printf("%3d %8.2f\n", fahr, (5.0 / 9.0) * (fahr - 32));
//     }

//     return 0;
// }

//----------------------------------------1.6 + 1.7 -----------------------------------------

#include <stdio.h>
int main()
{
    int c;

    // Press ctrl + z or ctrl + D and observe
    c = getchar();
    printf("%d", (c != EOF));
    printf("\nValue of EOF : %d", EOF);
    return 0;
}
