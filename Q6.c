#include<stdio.h>
int main() {
    float m1, m2, m3, m4, m5;
    float total, avg;

    printf("Enter marks for 5 subjects: ");
    scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);

    total = m1 + m2 + m3 + m4 + m5;
    avg = total / 5;

    printf("Total Marks: %.2f\n", total);
    printf("Average: %.2f\n", avg);

    return 0;
}