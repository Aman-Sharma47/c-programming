#include <stdio.h>

// Define a structure to represent a student
struct Student
{
    char name[50];
    int marks;
};

int main()
{
    FILE *file;

    // Writing student data to a file
    file = fopen("student_data.txt", "w");

    if (file == NULL)
    {
        fprintf(stderr, "Error opening file for writing.\n");
        return 1;
    }

    // Input data from the user and write to the file
    struct Student student;
    printf("Enter student data (name and marks), type 'exit' to stop:\n");

    while (1)
    {
        printf("Enter student name: ");
        scanf("%s", student.name);

        if (strcmp(student.name, "exit") == 0)
        {
            break; // Exit loop if the user types 'exit'
        }

        printf("Enter marks: ");
        scanf("%d", &student.marks);

        // Write student data to the file
        fprintf(file, "%s %d\n", student.name, student.marks);
    }

    // Close the file after writing
    fclose(file);
    printf("Student data written to the file successfully.\n");

    // Reading student data from the file
    file = fopen("student_data.txt", "r");

    if (file == NULL)
    {
        fprintf(stderr, "Error opening file for reading.\n");
        return 1;
    }

    // Read and print student data from the file
    printf("Contents of the file:\n");

    while (fscanf(file, "%s %d", student.name, &student.marks) == 2)
    {
        printf("Name: %s, Marks: %d\n", student.name, student.marks);
    }

    // Close the file after reading
    fclose(file);

    return 0;
}