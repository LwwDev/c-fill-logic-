#include <iostream>

int main(){
    // fill(); 
    const int size = 100;
    std::string foods[100];

    fill(foods, foods + (size/3), "test");
    fill(foods + (size/3), foods + (size/3)*2, "test2");
    fill(foods + (size/3)*2, foods + size, "test3");

    for(std::string food : foods){   
        std::cout << food << '\n';


    }


    return 0;
}


