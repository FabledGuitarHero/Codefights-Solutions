//
//  main.cpp
//  CodeFightsFizzBuzz
//
//  Created by Nate Henderson on 4/21/21.
//

#include <iostream>
#include <vector>

/*
 * Function tests the modulo
 */
std::string fizzbuzz(int n){
    if (n%5 == 0){
        if (n%7 == 0) { return "FizzBuzz (" + std::to_string(n) + ")" ; }
        
        return "Fizz (" + std::to_string(n) + ")";
    }
    
    if(n%7 == 0) { return "Buzz (" + std::to_string(n) + ")"; }
    
    return "";
}

/*
 * Driver for the FizzBuzz test
 */
std::vector<std::string> CodeFight(int n) {
    std::vector<std::string> newVector;
    
    for (int i = 1; i <= n; i++){
        auto tmp = fizzbuzz(i);
        if (tmp.size() > 0)
            newVector.push_back(tmp);
    }

    return newVector;
}

/*
 * Helper function to print vector
 */
void print_vector(std::vector<std::string> v){
    for (auto i : v){
        std::cout << i << std::endl;
    }
}



int main(int argc, const char * argv[]) {
    std::vector<std::string> tmp = CodeFight(35);
    print_vector(tmp);
    
    return 0;
}
