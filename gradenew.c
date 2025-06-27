#include <stdio.h>

int main() {
    int phy, chem, math, bio, bangali, eng;

    printf("Enter marks for chemistry: ");
    scanf("%d", &chem);

    printf("Enter marks for mathematics: ");
    scanf("%d", &math);

    printf("Enter marks for biology: ");
    scanf("%d", &bio);

    printf("Enter marks for Bengali: ");
    scanf("%d", &bangali);

    printf("Enter marks for English: ");
    scanf("%d", &eng);

    printf("Enter marks for physics: ");
    scanf("%d", &phy);

    float avg = (phy + chem + math + bio + bangali + eng) / 6.0f; // Use float for division

    if (avg <= 100 && avg >= 90) {
        printf("Grade: A\n");
    } else if (avg < 90 && avg >= 80) {
        printf("Grade: B\n");
    } else if (avg < 80 && avg >= 70) {
        printf("Grade: C\n");
    } else if (avg < 70 && avg >= 60) {
        printf("Grade: D\n");
    } else if (avg < 60 && avg >= 0) {
        printf("Grade: F\n"); // Fail instead of fail
    } else {
        printf("Invalid marks entered.\n");
    }

    return 0;
}
