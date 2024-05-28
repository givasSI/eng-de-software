#include <stdio.h>

int main() {
    char string[12], string2[12];
    char *prima = string, *duas = string2;
    int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0;
    int a2 = 0, b2 = 0, c2 = 0, d2 = 0, e2 = 0, f2 = 0;
    int count, count2, number;
    scanf("%d", &number);
    for (count2 = 0; count2<number; count2++)
    {
    scanf("%s", prima);
    scanf("%s", duas);
    for (count = 0; count<12; count++)
    {
        if(prima[count] == 'A'){
            a++;
        }
        if(prima[count] == 'B'){
            b++;
        }
        if(prima[count] == 'C'){
            c++;
        }
        if(prima[count] == 'D'){
            d++;
        }
        if(prima[count] == 'E'){
            e++;
        }
        if(prima[count] == 'F'){
            f++;
        }
    }

    for (count = 0; count<12; count++)
    {
        if(duas[count] == 'A'){
            a2++;
        }
        if(duas[count] == 'B'){
            b2++;
        }
        if(duas[count] == 'C'){
            c2++;
        }
        if(duas[count] == 'D'){
            d2++;
        }
        if(duas[count] == 'E'){
            e2++;
        }
        if(duas[count] == 'F'){
            f2++;
        }
    }
    if( a == a2 && b == b2 && c == c2 && d == d2 && e == e2 && f == f2 )
    {
        printf("Caracteristicas Iguais\n");
    }
    else{
        printf("Caracteristicas Diferentes\n");
    }
    a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, a2 = 0, b2 = 0, c2 = 0, d2 = 0, e2 = 0, f2 = 0;
    }

    return 0;
}
