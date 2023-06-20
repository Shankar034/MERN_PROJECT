#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>


int main()
{
	int gd=DETECT, gm;
	int x1,x2,x3,y1,y2,y3,tx, ty,ch,ang,xc, yc;
	float sx,sy,rad;
	initgraph(&gd,&gm, (char *)"");
	printf("Enter First coordinate of Triangel :");
	scanf("%d%d",&x1,&y1);
	printf("Enter second coordinate of Triangel :");
	scanf("%d%d",&x2,&y2);
	printf("Enter Third coordinate of Triangel :");
	scanf("%d%d",&x3,&x3);
	setcolor(WHITE);
	line(x1,y1,x2,y2);
	line(x2,y2,x3,y3);
	line(x3,y3,x1,y1);
	while(1){
		
	
	printf("Enter the choice that you want to perform : \n");
	printf("1. For translation \n");
	printf("2. For rotation  \n");
	printf("3. For rotation about fiexd point  \n");
	printf("4. For scaling  \n");
	printf("5. For fixed point scaling \n");
	printf("6. For exit \n");
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
			printf("This is rotation \n");
			printf("Enter the angle of rotation in degree \n");
			scanf("%d",&ang);
			rad= (ang*3.14)/180;
			x1=x1*cos(rad)-y1*sin(rad);
			y1=x1*sin(rad)+y1*cos(rad);
			x2=x2*cos(rad)-y2*sin(rad);
			y2=x2*sin(rad)+y2*cos(rad);
			x3=x3*cos(rad)-y3*sin(rad);
			y3=x3*sin(rad)+y3*cos(rad);
			setcolor(CYAN);
			line(x1,y1,x2,y2);
			line(x2,y2,x3,y3);
			line(x3,y3,x1,y1);
			
			break;
		case 3:
			printf("This is rotation about fixed point (xc, yc) \n");
			scanf("%d%d",&xc,&yc);
			printf("Enter the angle of rotation \n");
			scanf("%d",&ang);
			rad= (ang*3.14)/180;
			x1= cos(rad)*x1 - sin(rad)*y1 + (xc*(1-cos(rad))+ yc*sin(rad));
			y1= sin(rad)*x1 + cos(rad)*y1 + (yc*(1-cos(rad))-xc*sin(rad)); 
			x2= cos(rad)*x2 - sin(rad)*y2 + (xc*(1-cos(rad))+ yc*sin(rad));
			y2= sin(rad)*x2 + cos(rad)*y2 + (yc*(1-cos(rad))-xc*sin(rad)); 
			x3= cos(rad)*x3 - sin(rad)*y3 + (xc*(1-cos(rad))+ yc*sin(rad));
			y3= sin(rad)*x3 + cos(rad)*y3 + (yc*(1-cos(rad))-xc*sin(rad)); 
			setcolor(MAGENTA);
			line(x1,y1,x2,y2);
			line(x2,y2,x3,y3);
			line(x3,y3,x1,y1);
			break;
		case 4:
			printf("This is scaling \n");
			printf("Enter the scaling factors as sx and sy \n");
			scanf("%f%f",&sx,&sy);
			x1= x1*sx;
			y1= y1*sy;
			x2= x2*sx;
			y2= y2*sy;
			x3= x3*sx;
			y3= y3*sy;
			setcolor(YELLOW);
			line(x1,y1,x2,y2);
			line(x2,y2,x3,y3);
			line(x3,y3,x1,y1);
			break;
		case 5:
			break;
		case 6:
			exit(0);
		default: printf("You have entered wrong choice ");
	
	}
	
}
	

	
	getch();
	closegraph();
	return 0;
}
