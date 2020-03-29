#include<graphics.h>
#include<iostream>
using namespace std;

class Circles {
protected:
int xCo, yCo; //coordinates of center
int radius;
public: 
void set(int x, int y, int r) {
    xCo = x;
    yCo = y;
    radius = r;
}
void draw() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL); 
  
    // center and radius of circle 
    int border_color = WHITE; 
      
      
    // set color and pattern 
    setcolor(RED);
      
    // x and y is a position and 
    // radius is for radius of circle 
    circle(xCo, yCo, radius); 
      
    // fill the color at location  
    // (x, y) with in border color 
    floodfill(xCo, yCo,border_color);
    delay(50000);
    getch();
    closegraph();
    
}

};
////////////////////////////////////////////////////////////////
int main()
{   
    
    

    Circles c1; 
    c1.set(100, 200, 100);
    c1.draw(); //draw circles
    return 0;
}
