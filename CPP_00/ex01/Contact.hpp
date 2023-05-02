#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact {

public :
	Contact(void);
	~Contact(void);

	void	affContact(int index) const;
	void	aff_one_contact (void) const;
	void	setFirst_name(std::string str);
	void	setLast_name(std::string str);
	void	setNickname(std::string str);
	void	setPhone(std::string str);
	void	setDark_secret(std::string str);

private :
	std::string	_first_name;
	std::string	_last_name;
	std::string	_nickname;
	std::string	_phone_number;
	std::string	_dark_secret;
};

#endif
