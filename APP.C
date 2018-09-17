#include<stdio.h>
#include<conio.h>
struct blood_bank
{ char name[100],address[100],e_mail[20],blood_grp,gender[5];
  int age,phone_num;
}b[100];

void main()
{
 char choice;
  int i=1,j=0,n;
  clrscr();
  do
  {
  printf("Enter your name: ");
  scanf("%s \n",&b[i].name);
  printf("Enter your Residential Address : ");
  scanf("%s \n",&b[i].address);
  printf("Enter your Email address : ");
  scanf("%s \n",&b[i].e_mail);
  printf("Enter your blood group : ");
  scanf("%s \n",&b[i].blood_grp );
  printf("Enter your gender : ");
  scanf("%s \n",&b[i].gender);
  printf("Enter your age : ");
  scanf("%d \n",&b[i].age);
  printf("Enter your contact number");
  scanf("%d \n",&b[i].phone_num);
  printf("Do you want to add more data(y-n)");
  scanf("%s",&choice);
  i++;
  }while(choice=='y'||choice=='Y');
  n=i;
  for(j=0;j<n;j++)
  {
    printf("NAME=%s \n",b[j].name);
    printf("Blood Group="%s",b[j].blood_grp);
    printf("Gender=%s \n",b[j].gender);
    printf("Age="%d ", b[j].age);
    printf("Phone number=%d \n",b[j].phone_num);
   printf("Email=%s \n",b[j].e_mail);
   }

  }

getch();
}                           s