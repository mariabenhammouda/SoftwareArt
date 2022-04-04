#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(5);
    sliderGroup.setName("sliders");
    sliderGroup.add(Thickness.set("Thickness", 1, 1, 5));
    sliderGroup.add(Opacity.set("Opacity",190,50,255));
    
    line.setup();
    mainGroup.add(line.params);
    mainGroup.add(sliderGroup);
    gui.setup(mainGroup);
    ofSetBackgroundColor(255, 255, 153);
    
}

//--------------------------------------------------------------
void ofApp::update(){
   
    
  
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(line.colours->x, line.colours->y,line.colours->z, Opacity);


    for (int i=0; i<50; i++){
        ofSetLineWidth(Thickness);
        ofDrawLine(ofGetWidth()/2, ofGetHeight()/2, ofRandom(0,ofGetWidth()/3), ofRandom(0,ofGetHeight()/3));
       ofDrawLine(ofGetWidth()/2, ofGetHeight()/2, ofRandom(2*ofGetWidth()/3,ofGetWidth()), ofRandom(2*ofGetHeight()/3,ofGetHeight()));


    };
  
    gui.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){

}
