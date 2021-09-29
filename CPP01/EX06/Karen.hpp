#ifndef KAREN_HPP
# define KAREN_HPP

# include <iostream>

class Karen
{
public:
	Karen();
	~Karen();
	void	complain(std::string level);

private:
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);

	typedef	void (Karen::*t_function)(void);
	void	filter_display(std::string type, t_function func);

};


#endif
