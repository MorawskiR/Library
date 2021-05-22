 //login user with errors
 //katalog 
 //zbior ksiazek
 //wyszukaj
 //help
 //main page

#pragma once
#include <map>
#include <string>
//extern std::map<std::string, std::string> LoginAndPassword;
extern std::map<std::string, std::string> LoginAndPassword;

enum class passValidity {
tooshort,
noSpecialChar,
DoesNotMatch,
notUpperCase,
notLowerCase,
noNumber,
Ok
};
void DisplayMainMenu();

passValidity checkPassword(std::string password1, std::string password2);

std::string getErrorMessage(passValidity);

void Login();

bool doesPasswordsMatch(std::string pass1, std::string pass2);

passValidity checkPasswordRules(std::string password);
