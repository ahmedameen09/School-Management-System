#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <fstream>
using namespace std ;


//########################################################################//
					// Variables Declared //
//########################################################################//

int choosen , choosen2 ;
string con ;

//#######################################################################//
					// Functions Declared //
//#######################################################################//

void view () ;
void student () ;
void studentR () ;
void studentV () ;
void studentVA () ;
void teacher () ;
void teacherR () ;
void teacherV () ;
void teacherVA () ;
void worker () ;
void workerR () ;
void workerV () ;
void workerVA () ;

//#######################################################################//
					// Structures Declared //
//#######################################################################//

struct studentr 
{
	string id ;
	string name1 ;
	string name2 ;
	float gpa ;
	int age ;
	string phone ;
}stu;

struct teacherr
{
	string name1 ;
	string name2 ;
	string code ;
	int graduate_y ;
	string specialization ;
	int budget ;
	int age ;
	string phone ;
}tea;

struct workerr
{
	string name1 ;
	string name2 ;
	string code ;
	string role ;
	int budget ;
	int age ;
	string phone ;
}work;

//#######################################################################//
						// Main //
//######################################################################//

int main ()
{
	menu :
	view () ;
	cout << "\n\t\tChoice : " ;
	cin >> choosen ;
	cout << endl ;
	
	switch (choosen) 
	{
		case 1 : 
					student() ;
					cout << "\n\t\tChoice : " ;
					cin >> choosen2 ;
					
					if (choosen2 == 1 )
					{
								studentR () ;
								cout << "\t\t\t do you want to continue ? y or n ?\n\t\t\t " ;
								cin >> con ;
								if (con == "y" || con == "Y")
								{ 
									goto menu ; 
								}
								else {
									exit(1) ; 
									}		
					}
					else if ( choosen2 == 2 )
					{
								studentV () ;
								cout << "\t\t\t do you want to continue ? y or n ?\n\t\t\t " ;
								cin >> con ;
								if (con == "y" || con == "Y")
								{ 
									goto menu ; 
								}
								else {
									exit(1) ; 
									}		
					}
					else if ( choosen2 == 3 )
					{
								studentVA () ;
								cout << "\t\t\t do you want to continue ? y or n ?\n\t\t\t " ;
								cin >> con ;
								if (con == "y" || con == "Y")
								{ 
									goto menu ; 
								}
								else {
									exit(1) ; 
									}		
					}
					else if ( choosen2 == 4 )
					{
						goto menu ;
					}
					else {
						exit (1) ;
					}
					
					break ;
					
		case 2 : 
					
					teacher () ;
					cout << "\n\t\tChoice : " ;
					cin >> choosen2 ;
					
					if (choosen2 == 1 )
					{
								teacherR () ;
								cout << "\t\t\t do you want to continue ? y or n ?\n\t\t\t " ;
								cin >> con ;
								if (con == "y" || con == "Y")
								{ 
									goto menu ; 
								}
								else {
									exit(1) ; 
									}		
					}
					else if ( choosen2 == 2 )
					{
								teacherV () ;
								cout << "\t\t\t do you want to continue ? y or n ?\n\t\t\t " ;
								cin >> con ;
								if (con == "y" || con == "Y")
								{ 
									goto menu ; 
								}
								else {
									exit(1) ; 
									}		
					}
					else if ( choosen2 == 3 )
					{
								teacherVA () ;
								cout << "\t\t\t do you want to continue ? y or n ?\n\t\t\t " ;
								cin >> con ;
								if (con == "y" || con == "Y")
								{ 
									goto menu ; 
								}
								else {
									exit(1) ; 
									}		
					}
					else if ( choosen2 == 4 )
					{
						goto menu ;
					}
					else {
						exit (1) ;
					}
		
					break ;
		
		case 3 :

					worker () ;
					cout << "\n\t\tChoice : " ;
					cin >> choosen2 ;
					
					if (choosen2 == 1 )
					{
								workerR () ;
								cout << "\t\t\t do you want to continue ? y or n ?\n\t\t\t " ;
								cin >> con ;
								if (con == "y" || con == "Y")
								{ 
									goto menu ; 
								}
								else {
									exit(1) ; 
									}		
					}
					else if ( choosen2 == 2 )
					{
								workerV () ;
								cout << "\t\t\t do you want to continue ? y or n ?\n\t\t\t " ;
								cin >> con ;
								if (con == "y" || con == "Y")
								{ 
									goto menu ; 
								}
								else {
									exit(1) ; 
									}		
					}
					else if ( choosen2 == 3 )
					{
								workerVA () ;
								cout << "\t\t\t do you want to continue ? y or n ?\n\t\t\t " ;
								cin >> con ;
								if (con == "y" || con == "Y")
								{ 
									goto menu ; 
								}
								else {
									exit(1) ; 
									}		
					}
					else if ( choosen2 == 4 )
					{
						goto menu ;
					}
					else {
						exit (1) ;
					}
		
					break ;
		
		default :
		
					cout << "\n\t\tProgram Quit\n" ;
					exit (1) ;
					break ;
	}
	
}


//#######################################################################//
						// Functions //
//#######################################################################//


void view ()
{
	system("cls");
	cout << "\t\t\t\t\t School System\n\n" ;
	cout << "\t\t\t#############################################\n" ;
	cout << "\t\t\t#              Main Menu                    #\n" ;
	cout << "\t\t\t#############################################\n" ;
	cout << "\t\t\t#                                           #\n" ;
	cout << "\t\t\t#          (1) Students                     #\n" ;
	cout << "\t\t\t#          (2) Teachers                     #\n" ;
	cout << "\t\t\t#          (3) Workers                      #\n" ;
	cout << "\t\t\t#          (4) Exit                         #\n" ;
	cout << "\t\t\t#                                           #\n" ;	
	cout << "\t\t\t#############################################\n" ;
}

void student ()
{
	system("cls");
	cout << "\t\t\t\t\t School System\n\n" ;
	cout << "\t\t\t#############################################\n" ;
	cout << "\t\t\t#              Students                     #\n" ;
	cout << "\t\t\t#############################################\n" ;
	cout << "\t\t\t#                                           #\n" ;
	cout << "\t\t\t#        (1) Register new Student           #\n" ;
	cout << "\t\t\t#        (2) view Student Information       #\n" ;
	cout << "\t\t\t#        (3) View All Students Information  #\n" ;
	cout << "\t\t\t#        (3) Main Menu                      #\n" ;
	cout << "\t\t\t#        (4) Exit                           #\n" ;
	cout << "\t\t\t#                                           #\n" ;	
	cout << "\t\t\t#############################################\n" ;
}

void studentR ()
{
	ofstream outfile ;
	system("cls");
	cout << "\t\t\t#############################################\n" ;
	cout << "\t\t\t#          Register new Student             #\n" ;
	cout << "\t\t\t#############################################\n" ;	
	cout << "\n\t\t\t First name : " ;
	cin >> stu.name1 ;
	cout << "\n\t\t\t second name : " ;
	cin >> stu.name2 ;
	cout << "\n\t\t\t ID : " ;
	cin >> stu.id ;
	cout << "\n\t\t\t GPA : " ;
	cin >> stu.gpa ;
	cout << "\n\t\t\t Age : " ;
	cin >> stu.age ;
	cout << "\n\t\t\t Phone : " ;
	cin >> stu.phone ;
	cout << "\n\t\t\t#############################################\n\n" ;
	outfile.open ("Student.txt",ios::app) ; 																	// edit 
	outfile << stu.id << " " << stu.name1 << " " << stu.name2 << " " << stu.gpa << " " << stu.age << " " << stu.phone << endl ; 
	outfile.close() ;
	cout << "\t\t\t Data stored in database\n" ;
}

void studentV ()
{
	string id ;
	int flag ;
	ifstream input ;
	system("cls");
	cout << "\t\t\t#############################################\n" ;
	cout << "\t\t\t#        view Student Information           #\n" ;
	cout << "\t\t\t#############################################\n" ;
	cout << "\t\t\t Student ID : " ;
	cin >> id ;
	input.open ("Student.txt") ;
	input >> stu.id >> stu.name1 >> stu.name2 >> stu.gpa >> stu.age >> stu.phone ;
	while ( !input.eof() )
	{
		if ( id == stu.id )
		{
			cout << "\n\n\t\t\t#############################################\n" ;
			cout << "\n\t\t\t First name : " << stu.name1 ;
			cout << "\n\t\t\t second name : " << stu.name2 ;
			cout << "\n\t\t\t GPA : " << stu.gpa ;
			cout << "\n\t\t\t Age : " << stu.age ;
			cout << "\n\t\t\t Phone : " << stu.phone ;
			cout << "\n\n\t\t\t#############################################\n\n" ;
			flag = 1 ;
			break ;
		}
		else 
		{
			input >> stu.id >> stu.name1 >> stu.name2 >> stu.gpa >> stu.age >> stu.phone ;
			flag = 0 ;
		}
	}
	input.close() ;
	if (flag == 1)
	{
		
	}
	else {
		cout << "\n\t\t\t ID doesn't Found in Database\n" ;
	}
}

void studentVA ()
{
	string id ;
	int flag ;
	ifstream input ;
	system("cls");
	cout << "\t\t\t#############################################\n" ;
	cout << "\t\t\t#       view All Students Information       #\n" ;
	cout << "\t\t\t#############################################\n" ;
	input.open ("Student.txt") ;
	input >> stu.id >> stu.name1 >> stu.name2 >> stu.gpa >> stu.age >> stu.phone ;
	while ( !input.eof() )
	{
			cout << "\n\n\t\t\t#############################################\n" ;
			cout << "\n\t\t\t First name : " << stu.name1 ;
			cout << "\n\t\t\t second name : " << stu.name2 ;
			cout << "\n\t\t\t ID : " << stu.id ;
			cout << "\n\t\t\t GPA : " << stu.gpa ;
			cout << "\n\t\t\t Age : " << stu.age ;
			cout << "\n\t\t\t Phone : " << stu.phone ;
			cout << "\n\n\t\t\t#############################################\n\n" ;
			input >> stu.id >> stu.name1 >> stu.name2 >> stu.gpa >> stu.age >> stu.phone ;
	}
	input.close() ;
}

void teacher ()
{
	system("cls");
	cout << "\t\t\t\t\t School System\n\n" ;
	cout << "\t\t\t#############################################\n" ;
	cout << "\t\t\t#              Teachers                     #\n" ;
	cout << "\t\t\t#############################################\n" ;
	cout << "\t\t\t#                                           #\n" ;
	cout << "\t\t\t#         (1) Register new Teacher          #\n" ;
	cout << "\t\t\t#         (2) view Teacher Information      #\n" ;
	cout << "\t\t\t#         (3) View All Teachers Information #\n" ;
	cout << "\t\t\t#         (4) Main Menu                     #\n" ;
	cout << "\t\t\t#         (5) Exit                          #\n" ;
	cout << "\t\t\t#                                           #\n" ;	
	cout << "\t\t\t#############################################\n" ;
}

void teacherR ()
{
	ofstream outfile ;
	system("cls");
	cout << "\t\t\t#############################################\n" ;
	cout << "\t\t\t#          Register new Teacher             #\n" ;
	cout << "\t\t\t#############################################\n" ;	
	cout << "\n\t\t\t First name : " ;
	cin >> tea.name1 ;
	cout << "\n\t\t\t second name : " ;
	cin >> tea.name2 ;
	cout << "\n\t\t\t Code : " ;
	cin >> tea.code ;
	cout << "\n\t\t\t Year of Graduation : " ;
	cin >> tea.graduate_y	;
	cout << "\n\t\t\t Specilization : " ;
	cin >> tea.specialization ;
	cout << "\n\t\t\t Salary : " ;
	cin >> tea.budget ;
	cout << "\n\t\t\t Age : " ;
	cin >> tea.age ;
	cout << "\n\t\t\t Phone : " ;
	cin >> tea.phone ;
	cout << "\n\t\t\t#############################################\n\n" ;
	outfile.open ("Teachers.txt",ios::app) ; 																// edit 
	outfile << tea.code << " " << tea.name1 << " " << tea.name2 << " " << tea.graduate_y << " " << tea.specialization << " " << tea.budget << " " << tea.age << " " << tea.phone << endl ; 
	outfile.close() ;
	cout << "\t\t\t Data stored in database\n" ;
}

void teacherV ()
{
	string code ;
	ifstream input ;
	int flag ;
	system("cls");
	cout << "\t\t\t#############################################\n" ;
	cout << "\t\t\t#        View Teacher Information           #\n" ;
	cout << "\t\t\t#############################################\n" ;
	cout << "\t\t\t Teacher Code : " ;
	cin >> code ;
	input.open ("Teachers.txt") ;
	input >> tea.code >> tea.name1 >> tea.name2 >> tea.graduate_y >> tea.specialization >> tea.budget >> tea.age >> tea.phone  ; 
	while ( !input.eof() )
	{
		if ( code == tea.code )
		{
			cout << "\n\n\t\t\t#############################################\n" ;
			cout << "\n\t\t\t First name : " << tea.name1 ;
			cout << "\n\t\t\t second name : " << tea.name2 ;
			cout << "\n\t\t\t Year of Graduation : " << tea.graduate_y ;
			cout << "\n\t\t\t Specilization : " << tea.specialization ;
			cout << "\n\t\t\t Salary : " << tea.budget ;
			cout << "\n\t\t\t Age : " << tea.age ;
			cout << "\n\t\t\t Phone : " << tea.phone ;
			cout << "\n\n\t\t\t#############################################\n\n" ;
			flag = 1 ;
			break ;
		}
		else 
		{
			input >> tea.code >> tea.name1 >> tea.name2 >> tea.graduate_y >> tea.specialization >> tea.budget >> tea.age >> tea.phone  ; 
			flag = 0 ;
		}
	}
	input.close() ;
	if (flag == 1)
	{
		
	}
	else {
		cout << "\n\t\t\t Code doesn't Found in Database\n" ;
	}
}

void teacherVA ()
{
	string code ;
	ifstream input ;
	system("cls");
	cout << "\t\t\t#############################################\n" ;
	cout << "\t\t\t#       View ALL Teachers Information       #\n" ;
	cout << "\t\t\t#############################################\n" ;
	input.open ("Teachers.txt") ;
	input >> tea.code >> tea.name1 >> tea.name2 >> tea.graduate_y >> tea.specialization >> tea.budget >> tea.age >> tea.phone  ; 
	while ( !input.eof() )
	{
			cout << "\n\n\t\t\t#############################################\n" ;
			cout << "\n\t\t\t First name : " << tea.name1 ;
			cout << "\n\t\t\t second name : " << tea.name2 ;
			cout << "\n\t\t\t Code : " << tea.code ;
			cout << "\n\t\t\t Year of Graduation : " << tea.graduate_y ;
			cout << "\n\t\t\t Specilization : " << tea.specialization ;
			cout << "\n\t\t\t Salary : " << tea.budget ;
			cout << "\n\t\t\t Age : " << tea.age ;
			cout << "\n\t\t\t Phone : " << tea.phone ;
			cout << "\n\n\t\t\t#############################################\n\n" ;
			input >> tea.code >> tea.name1 >> tea.name2 >> tea.graduate_y >> tea.specialization >> tea.budget >> tea.age >> tea.phone  ; 
	}
	input.close() ;
}


void worker ()
{
	system("cls");
	cout << "\t\t\t\t\t School System\n\n" ;
	cout << "\t\t\t#############################################\n" ;
	cout << "\t\t\t#              Workers                      #\n" ;
	cout << "\t\t\t#############################################\n" ;
	cout << "\t\t\t#                                           #\n" ;
	cout << "\t\t\t#         (1) Register new Worker           #\n" ;
	cout << "\t\t\t#         (2) View Worker Information       #\n" ;
	cout << "\t\t\t#         (3) View All Workers Information  #\n" ;	
	cout << "\t\t\t#         (4) Main Menu                     #\n" ;
	cout << "\t\t\t#         (5) Exit                          #\n" ;
	cout << "\t\t\t#                                           #\n" ;	
	cout << "\t\t\t#############################################\n" ;
}

void workerR ()
{
	ofstream outfile ;
	system("cls");
	cout << "\t\t\t#############################################\n" ;
	cout << "\t\t\t#          Register new Worker              #\n" ;
	cout << "\t\t\t#############################################\n" ;	
	cout << "\n\t\t\t First name : " ;
	cin >> work.name1 ;
	cout << "\n\t\t\t second name : " ;
	cin >> work.name2 ;
	cout << "\n\t\t\t Code : " ;
	cin >> work.code ;
	cout << "\n\t\t\t Role : " ;
	cin >> work.role ;
	cout << "\n\t\t\t Salary : " ;
	cin >> work.budget ;
	cout << "\n\t\t\t Age : " ;
	cin >> work.age ;
	cout << "\n\t\t\t Phone : " ;
	cin >> work.phone ;
	cout << "\n\t\t\t#############################################\n\n" ;
	outfile.open ("Workers.txt",ios::app) ; 																// edit 
	outfile << work.code << " " << work.name1 << " " << work.name2 << " " << work.role << " " << work.budget << " " << work.age << " " << work.phone << endl ;
	outfile.close() ;
	cout << "\t\t\t Data stored in database\n" ;
}

void workerV ()
{
	string code ;
	int flag ;
	ifstream input ;
	system("cls");
	cout << "\t\t\t#############################################\n" ;
	cout << "\t\t\t#        View Worker Information            #\n" ;
	cout << "\t\t\t#############################################\n" ;
	cout << "\t\t\t Worker Code : " ;
	cin >> code ;
	input.open ("Workers.txt") ;
	input >> work.code >> work.name1 >> work.name2 >> work.role >> work.budget >> work.age >> work.phone  ; 
	while ( !input.eof() )
	{
		if ( code == work.code )
		{
			cout << "\n\n\t\t\t#############################################\n\n" ;
			cout << "\n\t\t\t First name : " << work.name1 ;
			cout << "\n\t\t\t second name : " << work.name2 ;
			cout << "\n\t\t\t Role : " << work.role ;
			cout << "\n\t\t\t Salary : " << work.budget ;
			cout << "\n\t\t\t Age : " << work.age ;
			cout << "\n\t\t\t Phone : " << work.phone ;
			cout << "\n\n\t\t\t#############################################\n\n" ;
			flag = 1 ;
			break ;
		}
		else 
		{
			input >> work.code >> work.name1 >> work.name2 >> work.role >> work.budget >> work.age >> work.phone  ; 
			flag = 0 ;
		}
	}
	input.close() ;
	if (flag == 1)
	{
		
	}
	else {
		cout << "\n\t\t\t Code doesn't Found in Database\n" ;
	}
}

void workerVA ()
{
	string code ;
	int flag ;
	ifstream input ;
	system("cls");
	cout << "\t\t\t#############################################\n" ;
	cout << "\t\t\t#       View All Workers Information        #\n" ;
	cout << "\t\t\t#############################################\n" ;
	input.open ("Workers.txt") ;
	input >> work.code >> work.name1 >> work.name2 >> work.role >> work.budget >> work.age >> work.phone  ; 
	while ( !input.eof() )
	{
			cout << "\n\n\t\t\t#############################################\n\n" ;
			cout << "\n\t\t\t First name : " << work.name1 ;
			cout << "\n\t\t\t second name : " << work.name2 ;
			cout << "\n\t\t\t Code : " << work.code ;			
			cout << "\n\t\t\t Role : " << work.role ;
			cout << "\n\t\t\t Salary : " << work.budget ;
			cout << "\n\t\t\t Age : " << work.age ;
			cout << "\n\t\t\t Phone : " << work.phone ;
			cout << "\n\n\t\t\t#############################################\n\n" ;
			input >> work.code >> work.name1 >> work.name2 >> work.role >> work.budget >> work.age >> work.phone  ; 
	}
	input.close() ;
}