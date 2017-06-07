#include <iostream>
#include <string>
#include "Book.h"
#include "Fiction.h"
#include "nonFiction.h"

using namespace std; 

void displayMenu();
void addFictionBook();
void addNonFictionBook();

int main()
{
	int choice = 0;
	displayMenu();
	//switch for menu options
	cin >> choice;
	switch (choice)
	{
	case 1: system("cls");
		Book().ListContents();

	case 2: system("cls");
		Book().ListContents();

	case 3: system("cls");
		addFictionBook();
		
	case 4: system("cls");
		addNonFictionBook();

	case 5: system("cls");		
		//system("start")

	case 6: system("cls");
		Book().Search; //add a variable

	}



	system("pause");
	return 0;
}

void displayMenu()
{
	system("cls");
	cout << "Welcome to your bookshelf" << endl; 
	cout << "##############################" << endl; 
	cout << "1) Show Fiction" << endl;	//shows fiction books
	cout << "2) Show Non Fiction" << endl;	//shows non fiction books
	cout << "3) Add a fiction book" << endl;  //add a book to a vector in fiction
	cout << "4) Add a non fiction book" << endl;  //add a book to a vector in non fiction
	cout << "5) Open a book" << endl;	//use system("start path to book")
	cout << "6) Find a book" << endl;   //search function
	
	


}


void addFictionBook()
{
	system("cls");
	cout << "enter the name of the book" << endl; 
	string title;
	cin >> title;
	//string type;
	cin.ignore();
	
	auto newBook = make_shared<Book>(title);
	Book().addBook(newBook);
	

	
}

void addNonFictionBook()
{
	system("cls");
	cout << "enter the name of the book" << endl;
	string title;
	cin >> title;
	//string type;
	cin.ignore();

	auto newBook = make_shared<Book>(title); 
	Book().addBook(newBook);



}