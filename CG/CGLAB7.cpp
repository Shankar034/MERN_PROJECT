#include<graphics.h>  
#include<conio.h>  
#include<math.h>

int main()  
{  
    int gd=DETECT, gm; 
    int x1,x2,y1,y2,lx,ly,x,y,p,dx,dy,i;
    
	//initializes the graphics system by loading a graphics driver from disk ,
	// and putting the system into graphics mode. 
	// initgraph(&gd, &gm, "C:\\TC\\BGI"); 
    initgraph(&gd, &gm, (char *)"");
    printf("Enter x1 and y1 : \n");
    scanf("%d%d",&x1,&y1);
    printf("Enter x2 and y2 : \n");
    scanf("%d%d",&x2,&y2);
    outtextxy(100,200, "Bresenhams Line drawing Algorithm \n");
    dx=abs(x2-x1);
    dy=abs(y2-y1);
    if(x2>x1){
    	lx=1;
	}else
    {
    lx=-1;	
	}
    
    if(y2>y1){
    ly=1;	
	}
    else{
    ly=-1;	
	}
    
    x=x1;
    y=y1;
    putpixel(x,y,WHITE);
    if(dx>dy){
    	
		
    	p=2*dy-dx;
    	for(i=1;i<dx;i++){
    	if(p<0){
    		x=x+lx;
    		y=y;
    		p=p+2*dy;
		}
		else{
			x=x+lx;
			y=y+ly;
			p=p+2*dy-2*dx;
		}
		putpixel(x,y,WHITE);
		delay(400);
	}
	}
	else{
		p=2*dx-dy;
		for(i=1;i<dy;i++){
		if(p<0){
			x=x;
			y=y+ly;
			p=p+2*dx;
		}else{
			x=x+lx;
			y=y+ly;
			p=p+2*dx-2*dy;
		}
		putpixel(x,y,WHITE);
		delay(1000);
	}}

    closegraph(); 
	return 0; 
}  




