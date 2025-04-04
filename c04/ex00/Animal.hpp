#ifndef	ANIMAL_HPP
#define	ANIMAL_HPP

class	Animal
{
	protected:
		std::string	type;
	public:
		Animal();
		~Animal();
		Animal( const Animal& other );
		Animal&	operator=( const Animal& other );
		void	makeSound();
};

#endif