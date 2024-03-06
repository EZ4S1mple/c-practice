/*There are four numbers 1, 2, 3, and 4. 
How many different three-digit numbers can be 
formed without repeated numbers? 
How many are they?*/

#include <stdio.h>

int main()
{
int c;
for(c = 1; c<5; c++){
    for(int a =1; a<5; a++){
        for (int b =1; b<5; b++){
            if(c!=a&&c!=b&&a!=b)
            printf("%d%d%d\n", c, a, b);
        }
    }
}
return 0;
}
