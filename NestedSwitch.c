#include <stdio.h>

int main(){
	
	int department;
	int type;
	
	printf("Enter The Department you wanna choose\n1.Engineering\n2.Medical\nChoose 1 or 2: ");
	scanf("%d", &department);
	
	switch (department){
		
		case 1:
			printf("Type of Engineering\n1.Computer Science\n2.Mechanical\nEnter 1 or 2: ");
			scanf("%d", &type);
			switch (type){
				case 1:
					printf("Your Courses are: PF, ICT, CAL, AP, IST, ICP, FE");
					break;
				case 2:
					printf("Your Courses are: PRACTICAL, CHEM, CAL, AP, IST, ICP, FE");
					break;
				default :
					printf("Invalid Specification");
					break;
			}
			break;
		case 2:
			printf("Type of Specification\n1.MBBS\n2.BDS\nEnter 1 or 2: ");
			scanf("%d", &type);
			switch (type){
				case 1:
					printf("Your Courses are: Medicine, Surgery, Pediatrics");
					break;
				case 2:
					printf("Your Courses are: Oral Surgery, Dental Materials");
					break;
				default :
					printf("Invalid Specification");
					break;
			}
			break;
		default:
			printf("Invalid Department");
			break;
	}	
		
	
	
	
	
}