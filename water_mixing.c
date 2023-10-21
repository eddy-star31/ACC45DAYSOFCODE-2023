#include <stdio.h>

int main() {
    int X, Y, A, B;
    
    // Input values
    printf("Enter the amount of hot water (X): ");
    scanf("%d", &X);
    
    printf("Enter the amount of cold water (Y): ");
    scanf("%d", &Y);
    
    printf("Enter the initial temperature (A): ");
    scanf("%d", &A);
    
    printf("Enter the desired temperature (B): ");
    scanf("%d", &B);
    
    // Calculate the change in temperature due to hot and cold water
    int temperature_change_due_to_hot_water = X;
    int temperature_change_due_to_cold_water = -Y;
    
    // Calculate the total change in temperature
    int total_temperature_change = A + temperature_change_due_to_hot_water + temperature_change_due_to_cold_water;
    
    // Check if the total temperature change matches the desired temperature
    if (total_temperature_change == B) {
        printf("Chef can achieve the desired temperature for a perfect bath.\n");
    } else {
        printf("Chef cannot achieve the desired temperature for a perfect bath.\n");
    }
    
    return 0;
}
