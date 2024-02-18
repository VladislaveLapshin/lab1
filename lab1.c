#include <stdio.h>

int swap(int number) {

    int swapped = 0, tool = 1;

    while (number >= 10) {
        int variable1 = (number % 10);
        number /= 10;
        int variable2 = (number % 10);
        number /= 10;

        swapped += variable2 * tool;
        swapped += variable1 * (tool * 10);
        tool *= 100;
    }

    if (number > 0) {
        swapped += number * tool;
    }

    return swapped;
}

int main() {
    int number;

    printf("Введите число: ");
    scanf("%d", &number);
    if(number < 0){
	printf("Ошибка!\n");
	return 0;}
    int result = swap(number);

    printf("Число с попарно переставленными цифрами: %d\n", result);

    return 0;
}
