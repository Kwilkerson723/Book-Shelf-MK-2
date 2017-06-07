#include "Book.h"



Book::Book()
{
}

std::string Book::ListContents()
{
	std::string output = "\n";
	for (auto book : _book) {
		output += "\\" + book->getBook() + "\n";
	}
	return output;
}

Book::Book(std::string title) : _title(title)
{
}

Book::~Book()
{
}

void Book::addBook(std::shared_ptr<Book> newBook)
{
	_book.push_back(newBook);
}

std::shared_ptr<Book> Book::Search(std::string name)
{
	for (auto book : _book) //so this line defines the pointer "file" //"_files" is a vector 
	{
	//	auto file = folder->Search(name);
		if (book->getBook() == name) {
			return book;
		}
		return nullptr;
	}

}