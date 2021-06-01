 //login user with errors
 //katalog 
 //zbior ksiazek
 //wyszukaj
 //help
 //main page

#pragma once
#include <map>
#include <string>
#include <string_view>

//extern std::map<std::string, std::string> LoginAndPassword;
extern std::map<std::string, std::string> LoginAndPassword;
extern std::string a;
extern std::string b;
extern std::string c;
extern std::string d;
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

//Create Account
std::string getErrorMessage(ErrorCode msg);
bool doPasswordsMatch(std::string password1, std::string password2);
ErrorCode checkPasswordRules(std::string pass);
ErrorCode checkPassword(std::string pass1, std::string pass2);

//Login 
void Login(const std::map<std::string, std::string>& map);

