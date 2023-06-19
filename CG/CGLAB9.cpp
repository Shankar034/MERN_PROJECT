#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void pixel(int x, int y, int xc, int yc){
	putpixel(360 + x,240 + y, 14);
	putpixel(360 + x,240 - y, 14);
	putpixel(360 - x,240 + y, 14);
	putpixel(360 - x,240 - y, 14);
}
int main(){
	int gd=DETECT,gm;
	initgraph(&gd,&gm,(char *)"");
	
	int rx,ry,xc,yc;
	int x,y;
	int p1,p2;
	printf("Enter the Major and Minor radius of ellipse : \n");
	scanf("%d%d",&rx,&ry);
	printf("Enter the center of ellipse as xc and yc : \n");
	scanf("%d%d",&xc,&yc);
	
	
	x=0;
	y=ry;
	pixel(x,y,xc,yc);
	p1=ry*ry -(ry*rx*rx) + ((1/4)*rx*rx);
	while((2*ry*ry*x) < (2*rx*rx*y)){
		
		if(p1<0){
			x=x+1;
			y=y;
			p1=p1+ (2*ry*ry*x) + ry*ry;
		}
		else{
			x=x+1;
			y=y-1;
			p1=p1 + (2*ry*ry*x)-(2*rx*rx*y)+ ry*ry;
		}
		pixel(x,y,xc,yc);
		delay(300);
	}
	p2=(ry*ry*(x+(1/2))*(x+(1/2))) + (rx*rx*(y-1)*(y-1)) - (rx*rx*ry*ry) ;
	while(y>=0){
		
		
		if(p2<=0){
			x=x+1;
			y=y-1;
			p2=p2 + (2*ry*ry*x) - (2*rx*rx*y) + rx*rx;
		}else{
			x=x;
			y=y-1;
			p2=p2 - (2*rx*rx*y) + rx*rx;
			
		}
		pixel(x,y,xc,yc);
		
	}
	getch();
	closegraph();
	return 0;
}
