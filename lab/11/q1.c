// Programmer: Amna Asim
// Lab 12
// Question 1
// Description: Read any CSV file and print total number of rows and columns before displaying its data in a tabular form using , \t and '|'.
//              Assume that first line is the header and when displaying it, it must be followed by a blank line before displaying the data.




#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ROWS 100
#define MAX_COLS 100
#define MAX_CELL_SIZE 50

void displayTable(char table[MAX_ROWS][MAX_COLS][MAX_CELL_SIZE], int numRows, int numCols);

int main() {
    FILE *csvFile;
    char fileName[100];

    // Get the CSV file name from the user
    printf("Enter the CSV file name: ");
    scanf("%s", fileName);

    // Open the CSV file for reading
    csvFile = fopen(fileName, "r");

    if (csvFile == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    char table[MAX_ROWS][MAX_COLS][MAX_CELL_SIZE];
    int numRows = 0;
    int numCols = 0;

    // Read the header
    char line[MAX_COLS * MAX_CELL_SIZE];
    fgets(line, sizeof(line), csvFile);

    // Tokenize the header to get column names
    char *token = strtok(line, ",");
    while (token != NULL && numCols < MAX_COLS) {
        strcpy(table[numRows][numCols], token);
        token = strtok(NULL, ",");
        numCols++;
    }

    // Read and process data lines
    while (fgets(line, sizeof(line), csvFile) != NULL && numRows < MAX_ROWS) {
        token = strtok(line, ",");
        numCols = 0;
        while (token != NULL && numCols < MAX_COLS) {
            strcpy(table[numRows][numCols], token);
            token = strtok(NULL, ",");
            numCols++;
        }
        numRows++;
    }

    // Close the file
    fclose(csvFile);

    // Display the total number of rows and columns
    printf("Total number of rows: %d\n", numRows);
    printf("Total number of columns: %d\n", numCols);

    // Display the header with a blank line before data
    printf("\n");
    displayTable(table, 1, numCols);

    // Display the data
    displayTable(table, numRows, numCols);

    return 0;
}

void displayTable(char table[MAX_ROWS][MAX_COLS][MAX_CELL_SIZE], int numRows, int numCols) {
    // Display table headers
    int i,j;
for ( i = 0; i < numCols; i++) {
        printf("%s\t|", table[0][i]);
    }
    printf("\n");

    // Display table data
    for ( i = 1; i < numRows; i++) {
        for ( j = 0; j < numCols; j++) {
            printf("%s\t|", table[i][j]);
        }
        printf("\n");
    }
}

