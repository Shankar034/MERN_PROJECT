#include<graphics.h>  
#include<conio.h>  
#include<math.h>
int round(float );
int main()  
{  
    int gd=DETECT, gm; 
    int steps,dx,dy,i;
   float x1,y1,x2,y2, x ,y;
   float xinc,yinc;
	//initializes the graphics system by loading a graphics driver from disk ,
	// and putting the system into graphics mode. 
	// initgraph(&gd, &gm, "C:\\TC\\BGI"); 
    initgraph(&gd, &gm, (char *)"");
	printf("Enter the x1 and y1 : \n");
	scanf("%f%f",&x1,&y1);
	printf("Enter the x2 and y2 : \n");
	scanf("%f%f",&x2,&y2);
	dx=x2-x1;
	dy=y2-y1;
	if(abs(dx)>abs(dy))
	steps=abs(dx);
	steps=abs(dy);
	xinc=dx/steps;
	yinc=dy/steps;
	x=x1;
	y=y1;
	putpixel(x,y,WHITE);
	for (i=1; i<steps;i++){
		x=x+xinc;
		y=y+yinc;
		putpixel(round(x),round(y),WHITE);
		delay(200);
	}
		
    closegraph(); 
	return 0; 
}  

int round(float a){
	return (a+0.5);
}



