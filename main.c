//Eyup KORURER 14.01.2018
//GNU GCC compiler ile derlenmiþtir.

#include <stdio.h>
#include <stdlib.h>

#define UP_ARROW    72
#define LEFT_ARROW  75
#define DOWN_ARROW  80
#define RIGHT_ARROW 77

int main()
{
    char a=getch();
      a=getch();

    switch (a){

case 72:
    printf("UST");
    break;
case 75:
    printf("SOL");
    break;
case 80:
    printf("ALT");
    break;
case 77:
    printf("SAG");
    break;

    }

    return 0;
}
