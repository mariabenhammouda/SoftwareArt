#pragma once

#include "ofMain.h"
#include "ofxGui.h"
#include "lines.hpp"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    ofEasyCam mainCam;
    ofBoxPrimitive box;
    vector<ofBoxPrimitive> boxes;
    int MaxBoxnumber=10;
    int spaceRange=300;
    ofLight light;
    ofPolyline myline;
    float linePercent;
    ofxPanel gui;
    int perlinHeight;
    ofParameterGroup sliderGroup;
    ofParameterGroup mainGroup;
    ofParameter<int> Thickness;
    ofParameter<int> BoxMax;
    lines line;

    
};
