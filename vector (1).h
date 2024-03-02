#ifndef _VECTOR_H_
#define _VECTOR_H_

#include <vector>
#include <string>

struct int_vector {
    int id;
    int from;
    int to;
    
    // Copy constructor
    int_vector(const int_vector &i_v);
    
    // Basic constructor
    int_vector();
    
    // Constructor from values
    int_vector(int id, int from, int to);
};

std::vector<int_vector> read_and_display_vectors(const std::string& filename);


#endif 