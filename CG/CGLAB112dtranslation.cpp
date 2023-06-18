#include<stdio.h>
#include<conio.h>
#include<graphics.h>


int main()
{
	int gd=DETECT, gm;
	int x1,x2,x3,y1,y2,y3,tx, ty,ch;
	initgraph(&gd,&gm, (char *)"");
	printf("Enter First coordinate of Triangel :");
	scanf("%d%d",&x1,&y1);
	printf("Enter second coordinate of Triangel :");
	scanf("%d%d",&x2,&y2);
	printf("Enter Third coordinate of Triangel :");
	scanf("%d%d",&x3,&x3);
	setcolor(3);
	line(x1,y1,x2,y2);
	line(x2,y2,x3,y3);
	line(x3,y3,x1,y1);
	while(1){
		
	
	printf("Enter the choice that you want to perform : \n");
	printf("1. For translation \n");
	printf("2. For rotation  \n");
	printf("3. For rotation about fiexd point  \n");
	printf("4. For exit \n");
	scanf("%d",&ch);
	switch(ch){
		case 1:
				printf("Enter the translation vector as tx and ty axis :");
				scanf("%d%d",&tx,&ty);
				setcolor(RED);
				x1=x1+tx;
				x2=x2+tx;
				x3=x3+tx;
				y1=y1+ty;
				y2=y2+ty;
				y3=y3+ty;
				
				line(x1,y1,x2,y2);
				line(x2,y2,x3,y3);
				line(x3,y3,x1,y1);
			break;
		case 2:
			printf("This is rotation");
			break;
		case 3:
			printf("This is rotation about fixed point (xc, yc)");
			break;
		case 4:
			exit(0);
		default: printf("You have entered wrong choice ");
	
	}
	
}
	

	
	getch();
	closegraph();
	return 0;
}
