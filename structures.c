#include <stdio.h>
struct student{
    int roll;
    char name[15];
    float marks[3];
    float average;
};
int main() {
struct student st[5];
int i,j;
int index=0;
float max=-1.0;
for(i=0;i<5;i++) //take input
{
    printf("\nEnter name of student %d\n",i+1);
    scanf("%s",st[i].name);
    printf("Enter roll no of student %d\n",i+1);
    scanf("%d",&st[i].roll);
    printf("\n\n");
    printf("Enter marks of student %d in 3 subjects\n",i+1);
float sum=0.0;

for(j=0;j<3;j++) //marks input
{
    printf("Marks of subject %d : ",j+1);
    scanf("%f",&st[i].marks[j]);
    sum+=st[i].marks[j]; 
} 
st[i].average = sum/3.0;
if(st[i].average>max)
{
    max=st[i].average;
    index=i;
}
}
for(i=0;i<5;i++) //output
{
 printf("Student %d : \n",i+1);
 printf("name = %s , Roll no = %d , average marks = %f\n",st[i].name,st[i].roll,st[i].average);

}
 printf("Student : %s has highest average marks : %f",st[index].name,max);
    return 0;
}