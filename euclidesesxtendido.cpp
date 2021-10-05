#include <iostream>
using namespace std;
int a,a1,b1;
void Euclides(int a, int b, int*d, int*x, int*y);
void Ver(int x, int y, int d);
void Euclides(int a, int b, int *d, int *x, int *y){
	long x1,y1;
	if(b==0){
		*d=a;
		*x=1;
		*y=0;
	}
    else{
		Euclides(b, a%b, d, x, y);
		x1=*x;
		y1=*y;
		*x=y1;
		*y=x1-(a/b)*y1;
		}
	a1=a;
	b1=b;
}
void Ver(int x, int y, int d, int p1, int p2){
	cout<<endl;
	cout<<" ax   + by   = d "<<endl;
	cout<<" "<<p1<<"x  + "<<p2<<"y  = "<<d<<endl;
	cout<<" "<<a1<<"*"<<x<<" + "<<b1<<"*"<<y<<" = "<<d<<endl;
	cout<<endl;
	cout<<" x = "<<x<<" y = "<<y<<" d = "<<d<<endl;
}
int main(){
  int a,b,d,x,y,p1,p2;
  cout<<"Digite Numero "<<endl;
	cin>>a;
  p1=a;
  cout<<"Digite Numero "<<endl;
	cin>>b;
  p2=b;
  Euclides(a, b, &d, &x, &y);
  Ver(x, y, d, p1, p2);
  return 0;
}