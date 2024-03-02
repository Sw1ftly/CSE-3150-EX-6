#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
#include "vector.h" 
using namespace std;


int_vector::int_vector() : id(-1), from(0), to(0) {}


int_vector::int_vector(int id, int from, int to) : id(id), from(from), to(to) {}


int_vector::int_vector(const int_vector &i_v) : id(i_v.id), from(i_v.from), to(i_v.to) {}


std::vector<int_vector> read_and_display_vectors(const std::string& filename) {
    std::ifstream in_file(filename);
    std::vector<int_vector> vect;

    int id = 0;
    int from, to;
    while (in_file >> from >> to) {
        vect.emplace_back(id++, from, to);
    }

    
    for (auto it = vect.rbegin(); it != vect.rend(); ++it) {
        std::cout << it->id << ": " << it->from << " " << it->to << std::endl;
    }
    
    in_file.close();
    return vect; 
}
/* 
// UNCOMMENT THIS AND RUN g++ vector.cpp to see that it works.
int main() {
    
    read_and_display_vectors("vectors_2D.txt");
    return 0;
}
*/
