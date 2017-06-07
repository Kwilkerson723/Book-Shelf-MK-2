#pragma once
#include "Book.h"


class Fiction : public Book
{

private: 
	std::vector<std::string> fShelf; //"shelf for fiction books"
public:

	std::string title;
	
	Fiction(std::string title);
	~Fiction();
	


};

