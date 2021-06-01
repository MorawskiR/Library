
#include "lib.hpp"
#include <string>
#include <iostream>
#include <ostream>

namespace {
    // constexpr std::string password1;
    // constexpr std::string password2;
    // constexpr char choice;
}

int main()
{
    DisplayMainMenu();
    int choice ;
    
    std::string password;
    std::string repeatPassword;
    std::string login = "";
   
    std::cin>>choice ;

    std::string password1 = "aaaa" ;
    std::string password2 = "cccc" ;

    switch (choice)
    {
        case 1 :
        {
            std::cout<<"Input password: "; std::cin>>password;
            std::cout<<"Repeat password: "; std::cin>>repeatPassword;
            auto result = checkPassword(password, repeatPassword);
            std::cout << getErrorMessage(result) << '\n';
        }
            break;
        case 2:
        {
        std::cout<<"Input login: "; std::cin>>login;
        std::cout<<"Repeat password: "; std::cin>>password;
        std::map<std::string, std::string> UsersData { {login,password} };
        
        Login(UsersData);

        }
            break;
        default:
            break;
    }
  

return 0;

}