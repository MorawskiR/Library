

 #include "lib.hpp"
 
 #include <iostream>
 #include <map>
 #include <algorithm>
//std::map<std::string, std::string> LoginAndPassword {"admin", "admin"};
std::map<std::string, std::string> LoginAndPassword { {"admin","admin"} };


 void DisplayMainMenu()
 {
     std::cout<<"1. Create Account"<<"\n";
     std::cout<<"2. Login "<<"\n";
     std::cout<<"3. Books catalog "<<"\n";
     std::cout<<"4. Help "<<"\n";
     std::cout<<"5. Main Page "<<"\n";
     std::cout<<"6. Contact"<<"\n";
 }

std::string getErrorMessage(ErrorCode msg)
{
      switch (msg)
    {
    case ErrorCode::PasswordNeedsAtLeastNineCharacters:
    return "Password needs to have at least nine characters";
    break;
    case ErrorCode::PasswordNeedsAtLeastOneNumber:
    return "Password needs to have at least one number";
    break;
    case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter:
    return "Password needs to have at least one special character";
    break;
    case ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter:
    return "Password needs to have at least one uppercase letter";
    break;
    case ErrorCode::PasswordsDoNotMatch:
    return "Passwords do not match";
    break;      
    }
    return "Ok";
}
bool doPasswordsMatch(std::string password1, std::string password2)
{
    if (password1 == password2)
    {
        return true;
    }
    return false;
}

ErrorCode checkPasswordRules(std::string pass)
{
    if (pass.size()< 9)
    {
        return ErrorCode::PasswordNeedsAtLeastNineCharacters;
    }
    if (std::none_of(pass.begin(), pass.end(), ::isdigit))
    {
        return ErrorCode::PasswordNeedsAtLeastOneNumber;
    }
       
    if (std::none_of(pass.begin(), pass.end(), [] (char ch) { return isupper(ch);})) 
    {
        return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
    }
   //std::cout<<"\n \" \\ ";
    std::string specialChar = "\" !\"#$%&'()*+,-./:;<=>?@[\\]^_`{|}~\"";
    auto result = std::find_first_of(pass.begin(), pass.end(), specialChar.begin(), specialChar.end());
    if(result == pass.end())
        {
            return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
        }
    return ErrorCode::Ok;
}

    ErrorCode checkPassword(std::string pass1, std::string pass2)
    {
        if(doPasswordsMatch(pass1, pass2))
        {
           return checkPasswordRules(pass1);
        }
        return ErrorCode::PasswordsDoNotMatch;
    }

void Login(){
    std::cout<<"aaa";
}

