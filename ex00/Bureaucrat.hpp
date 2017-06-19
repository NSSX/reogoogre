#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat {

public:
	
	Bureaucrat(std::string const name, int grade);
	virtual ~Bureaucrat(void);

	Bureaucrat & operator=(Bureaucrat const & rhs);
	Bureaucrat(Bureaucrat const & src);
	
	std::string getName(void);
	int getGrade(void);
	
	void incrementGrade();
	void discrementGrade();


	class GradeTooHighException : public std::exception {
		public:
			virtual const char* what() const throw();

			GradeTooHighException(void);
			virtual ~GradeTooHighException(void);

			GradeTooHighException & operator=(GradeTooHighException const & rhs);
			GradeTooHighException(GradeTooHighException const & src);

	};

	class GradeTooLowException : public std::exception {
		public:
			virtual const char* what() const throw();
			GradeTooLowException(void);
			virtual ~GradeTooLowException(void);

			GradeTooLowException & operator=(GradeTooLowException const & rhs);
			GradeTooLowException(GradeTooLowExceptionconst & src);
	};

private:
	std::string const _name;
	int _grade;
	int _max_grade;
	int _min_grade;
};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs);

#endif