#include <stdio.h>
#include <string.h>   // to use strlen and strcpy
int main() {
    int n;
    printf("\nHow many foods do you want to enter? : "); //size of string
    scanf("%d", &n);
    char foods[n][30];               
    printf("Enter %d food names:\n", n); //input from user on foods :)
    for (int i = 0; i < n; i++) {    //loop
        printf("Food %d: ", i + 1);
        scanf("%s", foods[i]);
    }
    char temp[30];   //swap variable 
    for (int i = 0; i < n - 1; i++) {      // bubble sort 
        for (int j = 0; j < n - i - 1; j++) {
            if (strlen(foods[j]) > strlen(foods[j + 1])) {
                strcpy(temp, foods[j]);            //swap
                strcpy(foods[j], foods[j + 1]);
                strcpy(foods[j + 1], temp);
            }
        }
    }
    printf("\n SORTED FOODS (shortest to longest):\n");     //output 
    for (int i = 0; i < n; i++) { 
        printf("%d. %s (%d)\n", i + 1, foods[i], (int)strlen(foods[i]));
    }
    return 0;
}