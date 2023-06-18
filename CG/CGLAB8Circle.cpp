#include<graphics.h>  
#include<conio.h>  
#include<math.h>
void drawCircle(int, int, int);
int main()  
{  
    int gd=DETECT, gm; 
    int xc,yc,r;
    float p;
    
	//initializes the graphics system by loading a graphics driver from disk ,
	// and putting the system into graphics mode. 
	// initgraph(&gd, &gm, "C:\\TC\\BGI"); 
    initgraph(&gd, &gm, (char *)"");
    printf("Enter the center of a Circle as xc and yc : ");
    scanf("%d%d",&xc,&yc);
    printf("Enter the radius of the circle as r : \n");
    scanf("%d",&r);
    drawCircle(xc, yc, r);
    
    getch();
    closegraph(); 
	return 0; 
}  

void drawCircle(int xc, int yc, int r){
	float p;
	int x,y;
	p=1-r;
	x=0;
	y=r;
	putpixel(x,y,WHITE);
	while (x<=y){
		if(p<0){
			x=x+1;
			y=y;
			p=p+2*x+1;
			
		}else{
			x=x+1;
			y=y-1;
			p=p+2*x-2*y+1;
		}
		putpixel(xc+x,yc+y,WHITE);
		putpixel(xc+x,yc-y,GREEN);
		putpixel(xc-x,yc+y,YELLOW);
		putpixel(xc-x,yc-y,RED);
		putpixel(xc+y,yc+x,CYAN);
		putpixel(xc+y,yc-x,MAGENTA);
		putpixel(xc-y,yc+x,CYAN);
		putpixel(xc-y,yc-x,BLUE);
	
		delay(300);
	}
}




