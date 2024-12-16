#include <stdio.h>

typedef struct {
  int dd;
  int mm;
  int yyyy;
}
date;

typedef struct {
  char name[50];
  int id;
  int salary;
  date join_date;
  int age;
}
employ;

int main() {
  int n;
  printf("\nhow many employee details u want to enter? ");
  scanf("%d", & n);
  employ emp[n];
  for (int i = 0; i < n; i++) {
    printf("\nenter name: ");
    scanf("%s", & emp[i].name);
    printf("\nenter id: ");
    scanf("%d", & emp[i].id);
    printf("\nenter salary: ");
    scanf("%d", & emp[i].salary);
    printf("\nenter age: ");
    scanf("%d", & emp[i].age);
    printf("\nenter date of joining (format DD MM YYYY): ");
    scanf("\n%d %d %d", & emp[i].join_date.dd, & emp[i].join_date.mm, & emp[i].join_date.yyyy);

  }

  printf("\nName\tEMP_ID\tSalary\tDate of Joining\tAge");
  for (int i = 0; i < n; i++) {
    printf("\n%s\t%d\t%d\t%d/%d/%d\t%d", emp[i].name, emp[i].id, emp[i].salary, emp[i].join_date.dd, emp[i].join_date.mm, emp[i].join_date.yyyy, emp[i].age);
  }

  return 0;
}
