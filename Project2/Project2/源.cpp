#include<stdio.h>
#include<iostream>

class ab { //µ¥ÀýÄ£Ê½
public:
	static ab* geinstance() {
		static ab instance;
		return &instance;
	};
	int a = 0;
	int b = 10;
private:
	ab() {}
	
	
};
//ab::ab() {
//};

int main()
{
	ab* ei = ab::geinstance();
	ei->a = 2;
	printf("a = %d,b = %d \n",ei->a,ei->b);
	ab* er = ab::geinstance();
	printf("a = %d,b = %d \n", er->a, ei->a);
	er->a = 30;
	printf("ei->a = %d\n",ei->a);
	system("pause");
	return 0;
}