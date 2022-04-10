#include "ofApp.h"
#include <complex>
#include <iostream>


//--------------------------------------------------------------
void ofApp::setup(){
    double minR, maxR, minI, maxI;
    int maxIteration=200;
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
   


    for( int x; x< ofGetWidth(); x++){
        for( int y; y<ofGetHeight(); y++){
            long double a=map(x,0,ofGetWidth(),-2,2);
            long double b=map(y,0,ofGetHeight(),-2,2);
            long double ai=a;
            long double bi=b;
            for(int n; n<maxIteration; n++){
                long double a1= a*a-b*b;
                long double b1= 2*a*b;
                
                a=a1+ai;
                b=b1+bi;
                
                if (abs(a1+b1)>2)
                {
                    break;
                }
                if (n== maxIteration){
                    ofSetColor(255, 255, 255);
                    ofDrawCircle(x, y, 10);
                }
            }
            
}
    }
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
