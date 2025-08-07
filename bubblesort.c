#include <stdio.h>
#include <string.h>
int main() {
    int n;
    printf("\nHow many foods do you want to enter? : ");
    scanf("%d", &n);
    char foods[n][30];               
    printf("Enter %d food names:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Food %d: ", i + 1);
        scanf("%s", foods[i]);
    }
    char temp[30];
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strlen(foods[j]) > strlen(foods[j + 1])) {
                strcpy(temp, foods[j]);
                strcpy(foods[j], foods[j + 1]);
                strcpy(foods[j + 1], temp);
            }
        }
    }
    printf("\n SORTED FOODS (shortest to longest):\n");
    for (int i = 0; i < n; i++) {
        printf("%d. %s (%d)\n", i + 1, foods[i], (int)strlen(foods[i]));
    }
    return 0;
}