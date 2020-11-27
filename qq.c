#include<stdio.h>
#include<string.h>
struct date
{
  int day;
  int month;
  int year;
};
struct student
{
  char name[20];
  int id;
  int enr_no;
  struct date dt[2];
};
int main ()
{
  int n;
  char name[20];
  struct student std[10];
  printf ("Enter the number of students: ");
  scanf ("%d", &n);
  for (int i = 0; i < n; i++)
    {
      printf ("Enter the name: ");
      fflush (stdin);
      gets (std[i].name);
      printf ("Enter the SAP_ID: ");
      scanf ("%d", &std[i].id);
      printf ("Enter the enrollment number: ");
      scanf ("%d", &std[i].enr_no);
      printf ("Enter the date of registration day: ");
      scanf ("%d", &std[i].dt[0].day);
      printf ("Enter the date of registration month: ");
      scanf ("%d", &std[i].dt[0].month);
      printf ("Enter the date of registration year: ");
      scanf ("%d", &std[i].dt[0].year);
      printf ("Enter the date of birthday day: ");
      scanf ("%d", &std[i].dt[1].day);
      printf ("Enter the date of brithday month: ");
      scanf ("%d", &std[i].dt[1].month);
      printf ("Enter the date of birthday year: ");
      scanf ("%d", &std[i].dt[1].year);
    }
  for (int i = 0; i < n; i++)
    {
      printf
	("Student name: %s\nSAP_ID: %d\nEnrollment number: %d\nDate of registration: %d-%d-%d\nDate of birth: %d-%d-%d\n",
	 std[i].name, std[i].id, std[i].enr_no, std[i].dt[0].day, std[i].dt[0].month, std[i].dt[0].year, std[i].dt[1].day, std[i].dt[1].month, std[i].dt[1].year);
    }
  return 0;
}

