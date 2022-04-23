#include <iostream>

struct Student
{
	std::string name;
	std::string surename;
	int age;
	std::string subjects[5];
};

void set_name(Student* ptr_students, int index)
{
	std::cout << "Enter the name of the " << index + 1 << "'s student: ";
	std::cin >> ptr_students[index].name;
}

void set_surename(Student* ptr_students, int index)
{
	std::cout << "Enter the surename of the " << index + 1 << "'s student: ";
	std::cin >> ptr_students[index].surename;
}

void set_age(Student* ptr_students, int index)
{
	std::cout << "Enter the age of the " << index + 1 << "'s student: ";
	std::cin >> ptr_students[index].age;
}

void set_subjects(Student* ptr_students, int index)
{
	std::cout << "Enter the subjects of the " << index + 1 << "'s student. " << std::endl;
	
	for(int i = 0; i < 5; ++i)
	{
	   std::cout << "The " << i + 1 << "'s subject: ";
	   std::cin >> ptr_students[index].subjects[i];
	}
}

void compare_the_ages(Student* ptr_students, int size)
{
int max = 0;

	for(int i = 0; i < size; ++i)
	{
	   if(ptr_students[i].age > max)
	   {
	     max = ptr_students[i].age;
	   }
	}
	
	std::cout << "The oldiest student is " << max << " years old. " << std::endl;
	
	for(int i = 0; i < size; ++i)
	{
	  if(max == ptr_students[i].age)
	   {
	    std::cout << ptr_students[i].name << " " << ptr_students[i].surename << std::endl;
	   }
	}
}

void charbaxci_student(Student* ptr, Student* ptrnew)
{
	ptrnew -> name = ptr[0].name;
	ptrnew -> surename = ptr[1].surename;
	ptrnew -> age = ptr[0].age;
	for(int i = 0; i < 5; ++i)
	{
	ptrnew -> subjects[i] = ptr[1].subjects[i];
	}
}

int main()
{
int size = 0;
std::cout << "Home many students do you have ?: ";
std::cin >> size;

Student* students = new Student[size]; 

	for(int i = 0; i < size; ++i)
	 {
	   set_name(students, i);
	   set_surename(students, i);
	   set_age(students, i);
	   set_subjects(students, i);
	 }	 

	   compare_the_ages(students, size);
	 

Student* onemorestudent = new Student;

	   charbaxci_student(students, onemorestudent);
	
delete [] students;
delete onemorestudent;

return 0;
}
