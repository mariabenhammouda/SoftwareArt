//
//  lines.cpp
//  StillAssignment_3
//
//  Created by Maria  on 10/04/2022.
//

#include "lines.hpp"
void lines::setup(){
    params.setName("line params");
    params.add(colours.set("colours", ofVec3f(85,153,255),ofVec3f(10,10,10),ofVec3f(255,255,255)));
    
}
