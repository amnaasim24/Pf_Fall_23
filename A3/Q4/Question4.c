/* Programmer:Amna Asim
* Assignment 3, Question 4
* Descrption: company employee management system using structs
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
	int id;
	char BonusDate[20];
	int bonus;
} Bonus;

typedef struct {
	int id;
	char role[15];
	char DateRole[20];
} Role;

typedef struct {
	char id[4];
	char fname[10];
	char lname[10];
	int sal;
	char StartDate[20];
	char department[10];
} Worker;


int main(){


	printf("Name:Amna Asim\n");
	printf("ID:23K-0859\n");

        //intializations, intialize max at very small value 
	int MaxHr = -1000;	
	int mh;
	int MaxAdmin = -1000;
	int ma;
	int MaxAcc = -1000;
	int mac;
	int SumHr = 0;
	int SumAdmin = 0;
	int SumAcc = 0;

        //intialize worker struct array 
	Worker w[8] = {
		{"001", "Monika", "Arora", 100000, "2014-02-20 09:00:00", "HR"},
		{"002", "Niharika", "Verma", 80000, "2014-06-11 09:00:00", "Admin"},
		{"003", "Vishal", "Singhal", 300000, "2014-02-20 09:00:00", "HR"},
		{"004", "Amitabh", "Singh", 500000, "2014-02-20 09:00:00", "Admin"},
		{"005", "Vivek", "Bhati", 500000, "2014-06-11 09:00:00", "Admin"},
		{"006", "Vipul", "Dewan", 200000, "2014-06-11 09:00:00", "Account"},
		{"007", "Satish", "Kumar", 75000, "2014-01-20 09:00:00", "Account"},
		{"008", "Geetika", "Chauhan", 90000, "2014-04-11 09:00:00", "Admin"},
	};

	Bonus b[5] = {
		{1, "2016-02-20 00:00:00", 5000},
		{2, "2016-06-11 00:00:00", 3000},
		{3, "2016-02-20 00:00:00", 4000},
		{1, "2016-02-20 00:00:00", 4500},
		{2, "2016-06-11 00:00:00", 3500}
	};

	Role r[8] = {
		{1, "Manager", "2016-02-20 00:00:00"},
		{2, "Executive", "2016-06-11 00:00:00"},
		{8, "Executive", "2016-06-11 00:00:00"},
		{5, "Manager", "2016-06-11 00:00:00"},
		{4, "Manager", "2016-06-11 00:00:00"},
		{7, "Asst. Manager", "2016-06-11 00:00:00"},
		{6, "Executive", "2016-06-11 00:00:00"},
		{3, "Lead", "2016-06-11 00:00:00"}

	};
	//for loop for checking mac of each department and sun
	int i;
	for (i=0; i < 8; i++)
	{
		//could have used switch here but went with if
		if(strcmp(w[i].department,"HR")==0){
			SumHr+=w[i].sal;

			if(w[i].sal > MaxHr){
				
				MaxHr=w[i].sal;
				mh=i;
			}
		}

		if(strcmp(w[i].department,"Admin")==0){
			SumAdmin += w[i].sal;

			if(w[i].sal > MaxAdmin){
				
				MaxAdmin=w[i].sal;
				ma=i;
			}
		}

		if(strcmp(w[i].department,"Account")==0){

			SumAcc+=w[i].sal;

			if(w[i].sal > MaxAcc){
				
				MaxAcc = w[i].sal;
				mac = i;
			}
		}

	}
	
	printf("Max salary:\n");
        //printing with padding 
	printf(" %-5s| %-11s| %-11s| %-11d| %-13s| %-11s|\n",w[mh].id,w[mh].fname,w[mh].lname,w[mh].sal,w[mh].StartDate,w[mh].department);
	printf(" %-5s| %-11s| %-11s| %-11d| %-13s| %-11s|\n",w[ma].id,w[ma].fname,w[ma].lname,w[ma].sal,w[ma].StartDate,w[ma].department);
	printf(" %-5s| %-11s| %-11s| %-11d| %-13s| %-11s|\n",w[mac].id,w[mac].fname,w[mac].lname,w[mac].sal,w[mac].StartDate,w[mac].department);


	printf("Sum of salary\n");
	printf("Admin:%d\nHR:%d\nAccounts:%d\n",SumAdmin,SumHr,SumAcc);

};
