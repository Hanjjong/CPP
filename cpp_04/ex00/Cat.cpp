#include "Cat.hpp"

Cat::Cat(){
    this->type = "Cat"; 
    std::cout << "Cat이 생성되었습니다." << std::endl;
}

Cat::~Cat(){
    std::cout << "Cat이 소멸되었습니다." << std::endl;
}

void Cat::makeSound(void) const
{
    std::cout << "cat can't barking" << std::endl;
}

Cat &Cat::operator=(const Cat &obj)
{
    if (this != &obj)
    {
        this->type = obj.type;
    }
	return (*this);
}

Cat::Cat(const Cat &origin)
{
    (*this) = origin;
    std::cout << "Cat " << "이 복사 생성자로 생성되었습니다." << std::endl;
    return ;
}


