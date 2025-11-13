#include <iostream>

int main(){
    // fill(); 
    const int size = 100;
    std::string foods[100];

     fill(foods, foods + 100, "test");

    for(std::string food : foods){   
        std::cout << food << '\n';


    }


    return 0;
}


