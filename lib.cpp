

 #include "lib.hpp"
 #include <iostream>
 #include <map>
//std::map<std::string, std::string> LoginAndPassword {"admin", "admin"};
std::map<std::string, std::string> LoginAndPassword { {"admin","admin"} };


 void DisplayMainMenu()
 {
     std::cout<<"0. Create Account"<<"\n";
     std::cout<<"1. Login "<<"\n";
     std::cout<<"2. Books catalog "<<"\n";
     std::cout<<"3. Help "<<"\n";
     std::cout<<"4. Main Page "<<"\n";
     std::cout<<"5. Contact"<<"\n";
 }
passValidity checkPassword(std::string password1, std::string password2)
 {
     if (doesPasswordsMatch(password1, password2))
     {
         return checkPasswordRules(password1);
     }
     return passValidity::DoesNotMatch;
 }

 std::string getErrorMessage(passValidity msg)
 {
    return "";
 }
void Login(){
    std::cout<<"aaa";
}

bool doesPasswordsMatch(std::string pass1, std::string pass2){
    if (pass1 == pass2)
    {
        return true;
    }
    return false;
}

passValidity checkPasswordRules(std::string password){
    return passValidity::Ok;
}