//
//  Randomline.hpp
//  Randomlines
//
//  Created by Maria  on 02/04/2022.
//

#ifndef Randomline_hpp
#define Randomline_hpp

#include "ofmain.h"
class Randomline{
    public:
    void setup();
    
    ofParameterGroup params;
    ofParameter <ofVec3f> colours;
    ofParameter <int> x;
    ofParameter <int> y;
};


#endif /* Randomline_hpp */
