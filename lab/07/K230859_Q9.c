// Programmer: Amna Asim
// LAB 7
// Question 9
// Description: Create a 2D array for bill amount, where keep track of branch ID in row subscript, mobile phone IDs in column subscript. Ask users to enter a bill for all mobile phones in all branches.



#include<stdio.h>

int main() {
	int X;
    int Y;
    printf("Enter the number of branches (X): ");
    scanf("%d", &X);
    printf("Enter the number of mobile phones per branch (Y): ");
    scanf("%d", &Y);

    double bills[X][Y];	
    double totalBill = 0.0;
    double maxBill = 0.0;
    int maxBillBranchID = -1;
    int maxBillMobileID = -1;
	int branch;
	int mobile;
	for (branch = 0; branch < X; branch++) {
    	printf("Enter bills for branch %d:\n", branch);
    	for (mobile = 0; mobile < Y; mobile++) {
            printf("Enter bill for mobile phone %d: ", mobile);
            scanf("%lf", &bills[branch][mobile]);
            totalBill += bills[branch][mobile];
            if (bills[branch][mobile] > maxBill) {
                maxBill = bills[branch][mobile];
                maxBillBranchID = branch;
                maxBillMobileID = mobile;
            }
        }
    }
    printf("Total bill for all branches: %.2lf\n", totalBill);
    printf("Total bill for each branch:\n");
    for (branch = 0; branch < X; branch++) {
        double branchTotal = 0.0;
        for (mobile = 0; mobile < Y; mobile++) {
            branchTotal += bills[branch][mobile];
        }
        printf("Branch %d: %.2lf\n", branch, branchTotal);
    }
    printf("Branch ID where maximum bill arrived: %d\n", maxBillBranchID);
    printf("Branch and Mobile Phone IDs with the highest bill:\n");
    printf("Branch: %d\n", maxBillBranchID);
    printf("Mobile Phone: %d\n", maxBillMobileID);
    
    return 0;	
}
