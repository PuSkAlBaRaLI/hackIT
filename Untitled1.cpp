#include<stdio.h>
struct student {
char name[20];
int roll;
float marks;
char remarks;	
};
int main()
{
	struct student s[15];
	int i;
	float temp;
	for (i=0;i<5;i++)
{
	printfm("\nEnter information about student%d",i+1);
	printf("\nNmae:\t");
	scanf("%s", s[i].name);
	printf("\nRoll:\t");
	scanf("%d",&s[i].roll);
	printf("\nMarks:\t");
	scanf("%f"&s[i].marks);
	printf("\nRemarks(P/F):\t");
	s[i].remarks=getche();
}
printf("\n");
printf()
