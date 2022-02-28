#include "Simple_window.h"
#include "Graph.h"
#include "std_lib_facilities.h"

int main ()
try
{

Point p1{100,100};

Simple_window win{p1,800,1000,"Canvas"};



int x_grid = 100;
int y_grid = 100;

Lines grid;
for (int x=x_grid; x<801; x+=x_grid)
	grid.add(Point{x,0},Point{x,800});
for (int y = y_grid; y<801; y+=y_grid)
	grid.add(Point{0,y},Point{800,y});
win.attach(grid);

Rectangle rect00{Point{0,0},100,100};
Rectangle rect01{Point{100,100},100,100};
Rectangle rect02{Point{200,200},100,100};
Rectangle rect03{Point{300,300},100,100};
Rectangle rect04{Point{400,400},100,100};
Rectangle rect05{Point{500,500},100,100};
Rectangle rect06{Point{600,600},100,100};
Rectangle rect07{Point{700,700},100,100};

win.attach(rect00);win.attach(rect01);
win.attach(rect02);win.attach(rect03);
win.attach(rect04);win.attach(rect05);
win.attach(rect06);win.attach(rect07);

rect00.set_fill_color(Color::red);rect01.set_fill_color(Color::red);
rect02.set_fill_color(Color::red);rect03.set_fill_color(Color::red);
rect04.set_fill_color(Color::red);rect05.set_fill_color(Color::red);
rect06.set_fill_color(Color::red);rect07.set_fill_color(Color::red);

Image img {Point{100,300},"200x200.gif"};
Image img1 {Point{300,100},"200x200.gif"};
Image img2 {Point{500,300},"200x200.gif"};
win.attach(img);
win.attach(img1);
win.attach(img2);

int x=0;
int y=0;


for(int i=0;i<800;i=i+100){
	for(int j=0;j<800;j=j+100){
		Image imgmove {Point{i,j},"100x100.gif"};
		win.attach(imgmove);
		win.wait_for_button();
	}
}


}
catch(exception& e){
cout<<"Hiba!"<<endl;
return 1;
}
catch(...){
cout<<"Hiba"<<endl;
return 2;
}
