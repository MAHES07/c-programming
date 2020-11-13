#include<stdio.h>
main()
{
	int choice=0;
	printf("enter choice:\n1.Pizza\n2.Burger\n3.Pasta\n4.French Fries\n5.Sandwich\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:printf("Food Item-Pizza\n");
		       printf("Price-Rs239");
		       break;
	    case 2:printf("Food Item-Burger\n");
		       printf("Price-Rs129");
		       break;
		case 3:printf("Food Item-Pasta\n");
		       printf("Price-Rs179");
		       break;
	    case 4:printf("Food Item-French Fries\n");
		       printf("Price-Rs99");
		       break;
		case 5:printf("Food Item-Sandwich\n");
		       printf("Price-149");
		       break;
		default:printf("invalid choice\n");
		      	   	          
	}
}
