#pragma once
#include <string>
#include <vector>
#include <memory>

class Book
{
private: 
	std::string _title;
	std::string _type;
	std::vector<std::shared_ptr<Book>> _book; 


public:

	
	
	
	Book(std::string title);
	Book::Book();
	~Book();
	std::string ListContents();
	std::string getBook() { return _title; };
	void addBook(std::shared_ptr<Book> newBook);
	std::shared_ptr<Book> Search(std::string name);

};

