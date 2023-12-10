/* Programmer:Amna Asim
* Descrption:making company employee management system through filing
*/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{

    printf("Name:Amna Asim\n");
	printf("ID:23K-0859\n");


	// opens the three files
	FILE *per=fopen("personal.txt","r");
	FILE *dep=fopen("department.txt","r");
	FILE *com=fopen("combine.txt","a");

	// str stores lines, temp stores the final line that is to be put into combine.txxt
	char str[20], temp[20];
	char id[5];
	// " \n" space and newline checking
	char delim[2] = " \n";
	printf("enter ID:");
	scanf("%4s", &id);

	fgets(str, 20, per);
	char *token = strtok(str, delim);

	while((strcmp(token, id)) != 0) {
		token = strtok(NULL, delim);
		if (token == NULL)
		{
			fgets(str, 20, per);
			token = strtok(str, delim);
		}
	}
	// copy id to temp
	strcpy(temp, token);
	token = strtok(NULL, delim);
	// copy space then name to temp
	strcat(temp, " ");
	strcat(temp, token);

	fgets(str, 20, dep);
	token = strtok(str, delim);
	while((strcmp(token, id)) != 0) {
		token = strtok(NULL, delim);
		if (token == NULL)
		{
			fgets(str, 20, dep);
			token = strtok(str, delim);
		}
	}
	token = strtok(NULL, delim);
	// copy space and salary to temp
	strcat(temp, " ");
	strcat(temp, token);
	// store temp in combine.txt
	fputs(temp, com);
	// add a newline so that next time it appends to the newline
	fprintf(com, "\n");

	return 0;
}
