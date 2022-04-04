//
//  Randomline.cpp
//  Randomlines
//
//  Created by Maria  on 02/04/2022.
//

#include "Randomline.hpp"
void Randomline::setup(){
    params.setName("line params");
    params.add(colours.set("colours", ofVec3f(85,153,255),ofVec3f(10,10,10),ofVec3f(255,255,255)));
    
}
