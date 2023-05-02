#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class Phonebook
{
public:
	Phonebook(void);
	~Phonebook(void);

	void	addContact(void);
	void	affSearch(void);
	bool	add_param(std::string announce, void (Contact::*fct)(std::string), int index, int check_ret);

private :
	int	index;
	int	nb;
	Contact	list[8];
};

#endif
