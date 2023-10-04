#include <stdio.h>

// Function to classify a seat
char* classifySeat(int seatNumber) {
    if (seatNumber >= 1 && seatNumber <= 15) {
        if (seatNumber % 2 == 1) {
            return "Lower Single";
        } else {
            return "Lower Double";
        }
    } else if (seatNumber >= 16 && seatNumber <= 30) {
        if (seatNumber % 2 == 1) {
            return "Upper Single";
        } else {
            return "Upper Double";
        }
    } else {
        return "Invalid seat number";
    }
}

int main() {
    int seatNumber;
    
    // Input the seat number
    printf("Enter the seat number: ");
    scanf("%d", &seatNumber);
    
    // Call the classifySeat function and print the result
    char* seatType = classifySeat(seatNumber);
    printf("Seat %d is a %s seat.\n", seatNumber, seatType);
    
    return 0;
}
