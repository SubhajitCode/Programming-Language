#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
typedef struct Students
{
	char name[20];
	int id;
	char Roll[10];
	char Address[30];
} student;
void read_field(FILE *fp, char sid[], char name[], char roll[], char address[])
{
	char c;
	int i = 0;
	char field[20], value[50];
	while ((c = fgetc(fp)) != ':')
	{
		field[i] = c;
		i++;
	}
	field[i] = '\0';
	i = 0;
	while ((c = fgetc(fp)) != ';')
	{
		value[i] = c;
		i++;
	}
	value[i] = '\0';
	if (strcmp(field, "id") == 0)
		strcpy(sid, value);
	else if (strcmp(field, "name") == 0)
		strcpy(name, value);
	else if (strcmp(field, "Roll") == 0)
		strcpy(roll, value);
	else if (strcmp(field, "Address") == 0)
		strcpy(address, value);
}
bool isvowel(char ch)
{
	if (ch == 'a' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'I' || ch == 'O' || ch == 'U')
		return true;
	else
		return false;
}
void print_studentDetails(student Student)
{
	printf("Student Id: %d\n", Student.id);
	printf("Student name: ");
	puts(Student.name);
	printf("Student roll: ");
	puts(Student.Roll);
	printf("Student address: ");
	puts(Student.Address);
}
void save_student(student *Student, int id, char name[], char roll[], char address[])
{
	Student->id = id;
	strcpy(Student->name, name);
	strcpy(Student->Address, address);
	strcpy(Student->Roll, roll);
}

void main()
{
	FILE *fp;
	char field[40], value[100], c, name[20], address[30], roll[10], sid[5];
	int id = 0, count = 0, i;
	student Students[100];
	fp = fopen("subhajit.txt", "r");
	while ((c = fgetc(fp)) != EOF)
	{
		if (c == '#')
		{
			read_field(fp, sid, name, roll, address);
		}
		else if (c == '~')
		{
			int id = atoi(sid);
			save_student(&Students[count], id, name, roll, address);
			count++;
		}
	}
	for (i = 0; i < count; i++)
	{
		if (isvowel(Students[i].name[0]))
		{
			print_studentDetails(Students[i]);
		}
	}

	fclose(fp);
}
