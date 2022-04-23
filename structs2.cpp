#include <iostream>

struct Students
{
	std::string name;
	std::string surename;
	int m1, m2, m3;
};

void set_name(Students* ptr, int index)
{
	std::cout << "Enter the name of the " << index + 1 << "'s student: ";
	std::cin >> ptr[index].name;
}

void set_surename(Students* ptr, int index)
{
	std::cout << "Enter the surename of the " << index + 1 << "'s student: ";
	std::cin >> ptr[index].surename;
}

void set_marks(Students* ptr, int index)
{
	std::cout << "Enter the first subject mark of the " << index + 1 << "'s student: ";
	std::cin >> ptr[index].m1;
	std::cout << "The second subject mark: ";
	std::cin >> ptr[index].m2;
	std::cout << "The third subject mark: ";
	std::cin >> ptr[index].m3;
}	

void printing_schedual(Students* ptr, int s)
{
    for(int i = 0; i < s; ++i)
     {
	if((ptr[i].m1 < 61) && (ptr[i].m2 < 61) && (ptr[i].m3 < 61))
	{	 
	  std::cout << ptr[i].name << " " << ptr[i].surename << " " << ptr[i].m1 << " " << ptr[i].m2 << " " << ptr[i].m3 << std::endl;
	}
	else if((ptr[i].m1 < 61) && (ptr[i].m2 < 61) && (ptr[i].m3 > 61))
	{
	  std::cout << ptr[i].name << " " << ptr[i].surename << " " << ptr[i].m1 << " " << ptr[i].m2 << " " << ptr[i].m3 << std::endl;
	}
	else if((ptr[i].m1 < 61) && (ptr[i].m2 > 61) && (ptr[i].m3 < 61))
	{
	  std::cout << ptr[i].name << " " << ptr[i].surename << " " << ptr[i].m1 << " " << ptr[i].m2 << " " << ptr[i].m3 << std::endl;
	}
	else if((ptr[i].m1 > 61) && (ptr[i].m2 < 61) && (ptr[i].m3 < 61))
	{
	  std::cout << ptr[i].name << " " << ptr[i].surename << " " << ptr[i].m1 << " " << ptr[i].m2 << " " << ptr[i].m3 << std::endl;
	}
	
     }
}

int main ()
{
int size = 0;
std::cout << "How many students do you have: ";
std::cin >> size;

Students* student = new Students[size];

	for(int i = 0; i < size; ++i)
	 {
	   set_name(student, i);
	   set_surename(student, i);
	   set_marks(student, i);
	 }

	   printing_schedual(student, size);	

delete [] student;

return 0;
}
