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

void DisplayMainMenu();
void Login();
enum class ErrorCode
{
    Ok,
    PasswordNeedsAtLeastNineCharacters,
    PasswordNeedsAtLeastOneNumber,
    PasswordNeedsAtLeastOneSpecialCharacter,
    PasswordNeedsAtLeastOneUppercaseLetter,
    PasswordsDoNotMatch
};


std::string getErrorMessage(ErrorCode msg);
bool doPasswordsMatch(std::string password1, std::string password2);
ErrorCode checkPasswordRules(std::string pass);
ErrorCode checkPassword(std::string pass1, std::string pass2);