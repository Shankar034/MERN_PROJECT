#include<graphics.h>  
#include<conio.h>  
int round(float );
int main()  
{  
    int gd=DETECT, gm,i; 
    float a;
	//initializes the graphics system by loading a graphics driver from disk ,
	// and putting the system into graphics mode. 
	// initgraph(&gd, &gm, "C:\\TC\\BGI"); 
    initgraph(&gd, &gm, (char *)"");
    // To print text
    outtextxy(100,100,"Your Name");
    //To set the current drawing color 
    setcolor(3);
    //line(x1,y1,x2,y2)
    line(100,100,300,300);
    //circle(x, y, radius);
    circle(400,400,50);
    //ellipse(int x, int y, int start_angle, int end_angle, int x_radius, int y_radius)
    ellipse(200,200,0,360,60,30);
    
	for(i=1;i<=100;i++){	
		//putpixel function plots a pixel at location (x, y) of specified color.
		putpixel(100+i,200+i,WHITE);
		//pauses the program or task for a specified duration of time.
		delay(100);
	}
    getch();   
	//deallocates all memory allocated by graphics system 
	printf("Enter Floating value : ");
	scanf("%f", a);
	printf("The rounded value is : %d",round(a));
    closegraph(); 
	return 0; 
}  

int round(float a){
	return (a+0.5);
}



