
#include <stdio.h>

int main()
{
    FILE *source, *destination;
    char sourceFile[100], destinationFile[100];
    char ch;

    printf("Enter source filename: ");
    scanf("%99s", sourceFile);

    printf("Enter destination filename: ");
    scanf("%99s", destinationFile);

    source = fopen(sourceFile, "r");

    if (source == NULL)
    {
        printf("Source file not found.");
        return 1;
    }

    destination = fopen(destinationFile, "w");

    if (destination == NULL)
    {
        printf("Unable to create destination file.");
        fclose(source);
        return 1;
    }

    while ((ch = fgetc(source)) != EOF)
    {
        fputc(ch, destination);
    }

    printf("File copied successfully to %s", destinationFile);

    fclose(source);
    fclose(destination);

    return 0;
}
