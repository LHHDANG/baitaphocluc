#include <stdio.h>

char grade(int marks);

int main() {
	int a;
	printf("Enter marks: ");
	scanf("%d", &a);
	char b = grade(a);
	printf("Grade : %c", b);
	return 0;
}

char grade(int marks) {
	char g;
	if(marks >= 90)
	g = 'A';
	else if(marks > 60 && marks < 90)
	    g = 'B';
	    else if(marks < 60 && marks > 30)
	        g = 'C';
	        else
	            g = 'F';
	return g;
}
