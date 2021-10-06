#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice(void);
		Ice(std::string const &type);
		Ice(Ice const &ice);
		~Ice();
		Ice	&operator=(Ice const &ice);

		AMateria* 	    clone() const;
		void 			use(ICharacter&target);
};

#endif