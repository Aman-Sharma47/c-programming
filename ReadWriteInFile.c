#include <stdio.h>

int main()
{
    // Writing to a file
    FILE *fileWrite = fopen("output.txt", "w");

    if (fileWrite == NULL)
    {
        fprintf(stderr, "Error opening file for writing.\n");
        return 1;
    }

    printf("Enter data to write to the file:\n");

    // Reading input from the user and writing it to the file
    char input[100];
    fgets(input, sizeof(input), stdin);
    fprintf(fileWrite, "%s", input);

    // Close the file after writing
    fclose(fileWrite);

    printf("Data written to the file successfully.\n");

    // Reading from a file
    FILE *fileRead = fopen("output.txt", "r");

    if (fileRead == NULL)
    {
        fprintf(stderr, "Error opening file for reading.\n");
        return 1;
    }

    printf("Contents of the file:\n");

    // Reading and printing the contents of the file
    char buffer[100];
    while (fgets(buffer, sizeof(buffer), fileRead) != NULL)
    {
        printf("%s", buffer);
    }

    // Close the file after reading
    fclose(fileRead);

    return 0;
}