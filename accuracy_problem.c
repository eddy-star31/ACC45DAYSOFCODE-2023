#include <stdio.h>

int main() {
    int total_marks, desired_marks;
    scanf("%d", &desired_marks); // Input the desired total marks

    int min_incorrect = 101; // Initialize with a value greater than the maximum possible
    for (int correct = 0; correct <= 100; correct++) {
        int marks = (correct * 3) - ((100 - correct) * 1);
        int incorrect = 100 - correct;
        if (marks == desired_marks) {
            min_incorrect = 0; // Chef answered all questions correctly
            break;
        } else if (marks > desired_marks) {
            min_incorrect = (min_incorrect > incorrect) ? incorrect : min_incorrect;
        }
    }

    printf("%d\n", min_incorrect); // Output the minimum number of problems Chef marked incorrect

    return 0;
}
