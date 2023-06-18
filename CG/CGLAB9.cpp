#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
int main(){
	int gd=DETECT,gm;
	initgraph(&gd,&gm,(char *)"");
	
	int rx,ry,xc,yc;
	float x,y;
	float p1,p2;
	printf("Enter the Major and Minor radius of ellipse : \n");
	scanf("%d%d",&rx,&ry);
	printf("Enter the center of the ellipse as xc and yx :");
	scanf("%d%d",&xc,&yc);
	
	x=0;
	y=ry;
	putpixel(x,y,RED);
	while((2*ry*ry*x) < (2*rx*rx*y)){
		p1=ry*ry -(ry*rx*rx) + ((1/4)*rx*rx);
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
		putpixel(x+xc,y+yc,RED);
		putpixel(x+xc,-y+yc,RED);
		putpixel(-x+xc,y+yc,RED);
		putpixel(-x+xc,-y+yc,RED);
		delay(300);
	}
	
	while(y!=0){
		p2=(ry*ry*(x+(1/2))*(x+(1/2))) + (rx*rx*(y-1)*(y-1)) - (rx*rx*ry*ry) ;
		if(p2<=0){
			x=x+1;
			y=y-1;
			p2=p2 + (2*ry*ry*x) - (2*rx*rx*y) + rx*rx;
		}else{
			x=x;
			y=y-1;
			p2=p2 - (2*rx*rx*y) + rx*rx;
			
		}
		putpixel(x+xc,y+yc,RED);
		putpixel(x+xc,-y+yc,RED);
		putpixel(-x+xc,y+yc,RED);
		putpixel(-x+xc,-y+yc,RED);
		delay(300);
	}
	getch();
	closegraph();
	return 0;
}
