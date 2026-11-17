#include <iostream>
using namespace std;
int main(){
int a,b,c,Z;
cout<<"enter the figure for a \n";
cin>>a;
cout<<"enter the figure  for b \n";
cin>>b;
cout<<"enter the figure for c \n";
cin>>c;
cout<<a<<"x^2+"<<b<<"x+"<<c<<"= 0"<<"\n";
if(a==0){
	cout<<"this equation is not quadratic\n";
}
else{
	cout<<"this equation is quadratic\n";
Z=(b*b)-(4*a*c);
cout<<Z<<"\n";
if(Z>0){
cout<<"THE ROOTS OF THIS QUADRATIC EQUATION ARE REAL AND DISTINGED\n";	
}
else if(Z>=0){
		cout<<"THE ROOTS OF THIS QUADRATIC EQUATION ARE REAL\n";
	}
 else if(Z==0){
	    cout<<"THIS QUADRATIC EQUATION HAS EQUAL ROOTS EQUAL\n";

}
	else if(Z<0){
		cout<<"THE ROOTS OF THS QUADRATIC EQUATION ARE COMPLEX\n";

			}
			else {
cout<<"INVALID\n";
}
		}
			return 0;
   }




