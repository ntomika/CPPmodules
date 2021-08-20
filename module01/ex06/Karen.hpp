#ifndef KAREN_HPP
#define KAREN_HPP

#include <iostream>
#include <string>

class Karen
{
private:
	void _debug(void);
	void _info(void);
	void _warning(void);
	void _error(void);
public:
	Karen();
	~Karen();
	void complain(std::string level);
};

typedef	void	(Karen::*PointerFunc)(void);

#endif