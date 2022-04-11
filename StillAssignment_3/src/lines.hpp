//
//  lines.hpp
//  StillAssignment_3
//
//  Created by Maria  on 10/04/2022.
//

#ifndef lines_hpp
#define lines_hpp

#include <stdio.h>
#include "ofmain.h"
class lines{
    public:
    void setup();
    
    ofParameterGroup params;
    ofParameter <ofVec3f> colours;
    ofParameter <int> x;
    ofParameter <int> y;
};
#endif /* lines_hpp */
