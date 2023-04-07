


//dlala
#include <stdio.h>
#include <stdlib.h>

int main()
{

//here I declare the variable
    int hours,minutes,seconds;

    //we get the input (seconds) from user
    scanf("%d",&seconds);


//now we make the algorithm to convert seconds to into hours,minutes and seconds
   hours=seconds/3600;
   seconds=seconds%3600;
   minutes=seconds/60;
   seconds=seconds%60;

//now show the result
    printf("%d ",hours,minutes);
    printf("%d ",minutes);
    printf("%d",seconds);


    return 0;
}
