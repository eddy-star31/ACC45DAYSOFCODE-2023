#include <stdio.h>
#include <string.h>

// Function to check if a string is a palindrome
int isPalindrome(char str[]) {
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right) {
        // Ignore non-alphanumeric characters from the left
        while (!isalnum(str[left]) && left < right) {
            left++;
        }

        // Ignore non-alphanumeric characters from the right
        while (!isalnum(str[right]) && left < right) {
            right--;
        }

        // Compare the characters (case-insensitive)
        if (tolower(str[left]) != tolower(str[right])) {
            return 0; // Not a palindrome
        }

        // Move to the next characters
        left++;
        right--;
    }

    return 1; // It's a palindrome
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    if (isPalindrome(str)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
