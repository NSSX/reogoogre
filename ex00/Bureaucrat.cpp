#include "Bureaucrat.hpp"	


Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name), _grade(grade){

	return;
}
Bureaucrat::~Bureaucrat(void){

	return;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rhs){

}

Bureaucrat::Bureaucrat(Bureaucrat const & src){

}
	
std::string Bureaucrat::getName(void){

	return this->_name;
}

int Bureaucrat::getGrade(void){

	return this->_grade;
}
	
void incrementGrade(){
	this->_grade++;
}
void discrementGrade(){
	this->_grade--;
}


const char* what() const throw(){

}

Bureaucrat::GradeTooHighException::GradeTooHighException(void){

}
~Bureaucrat::GradeTooHighException::GradeTooHighException(void){

}

Bureaucrat::GradeTooHighException & Bureaucrat::GradeTooHighException::operator=(GradeTooHighException const & rhs){

}

Bureaucrat::GradeTooHighException::GradeTooHighException(GradeTooHighException const & src){

}


const char* what() const throw(){

}


GradeTooLowException(void){

}

~GradeTooLowException(void){

}

GradeTooLowException & operator=(GradeTooLowException const & rhs){

}

GradeTooLowException(GradeTooLowExceptionconst & src){

}


std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs){

  o << rhs.getName() << ", bureaucrat grade "<< rhs.getGrade() <<std::endl;
    return o;
}

