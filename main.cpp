#include <iostream>

int main(){
    // fill(); 
    const int size = 100;
    std::string foods[100];

     fill(foods, foods + (size/2), "test");
    fill(foods + (size/2), foods + size, "test2");
    for(std::string food : foods){   
        std::cout << food << '\n';


    }


    return 0;
}


