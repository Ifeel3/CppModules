#include <string>

class Contact {
public:
	Contact(void);
	~Contact(void);

	void setFirstName(const std::string& FirstName);
	std::string getFirstName(void) const;

	void setLastName(const std::string& LastName);
	std::string getLastName(void) const;

	void setNickname(const std::string& Nickname);
	std::string getNickname(void) const;

	void setPhoneNumber(const std::string& PhoneNumber);
	std::string getPhoneNumber(void) const;

	void setDarkestSecret(const std::string& DarkestSecret);
	std::string getDarkestSecret(void) const;

private:
	std::string _firstName;
	std::string _lastName;
	std::string _nickname;
	std::string _phoneNumber;
	std::string _darkestSecret;
};