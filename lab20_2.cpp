#include<iostream>
#include<algorithm>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect *r1, Rect *r2){
	double diffy,diffx;
	diffy = min(r1->y,r2->y) - max(r1->y - r1->h , r2->y - r2->h);
	diffx = min(r1->x+r1->w,r2->x+r2->w) - max(r1->x,r2->x);
	if(diffx < 0 or diffy < 0) return 0;
	else return diffy*diffx;

}

int main()
{
	Rect R1 = {1,1,5,5};
	Rect R2 = {2,2,5,5};
	cout << overlap(&R1,&R2);

}
