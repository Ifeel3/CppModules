#include "Contact.class.hpp"

class Phonebook {

public:
	Phonebook(void);
	~Phonebook(void);

	void addContact(void);
	void printPhonebook(void) const;

private:
	Contact contacts[8];
	void _shiftPhonebook(void);
	int _amountContacts;
};