//
//  map.hpp
//  main
//
//  Created by Francesco Esposito on 22/03/23.
//

#ifndef map_hpp
#define map_hpp

#include <stdio.h>
using namespace std;

#define MAP_DIMENSION 300

class Map{
protected:
	char pattern0[MAP_DIMENSION];
	char pattern1[MAP_DIMENSION];
	char pattern2[MAP_DIMENSION];
	char pattern3[MAP_DIMENSION];
	char pattern4[MAP_DIMENSION];
public:
    Map (int colonna, int riga);
    void draw(int x, int y, char P);
    void canc(int x, int y, char P);
    void initPattern();

};
#endif /* map_hpp */
