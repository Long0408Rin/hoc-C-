#include <iostream>    // nhap vao 3 so a,b,c tim so lon nhat
#include <conio.h>
using namespace std;
main()
{ 
	int a,b,c;
	cout <<"Nhap vao 3 so a b c" << "\n" ;
	cin >> a>>b>>c ;
	if(a>b && a>c){
		cout <<"a la so lon nhat";
	}
    else if (a<b && b>c ){
    	cout <<"b la so lon nhat";
	}
     else  (c>b && a<c );{
    	cout <<"c la so lon nhat";
	}
}
 
