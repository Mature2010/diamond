#include <stdio.h>

int loop(int length, char letter){
    for (int s = 0; s <= length; s++){
        printf("%c", letter);
    }
    return 0;
}

int main(){
    int length = 0;
    int draw = -2;
    printf("Length: ");
    scanf("%d", &length);
    int lengthDouble = (length * 2);

    for (int i = 0; i <= lengthDouble; i++){
        if (i <= lengthDouble / 2){
            length -= 1;
            draw += 2;
            loop(length, ' ');
            loop(draw, '*');
            printf("\n");
        } else {
            length += 1;
            draw -= 2;
            loop(length, ' ');
            loop(draw, '*');
            printf("\n");
        }
    }
    getchar();
}
