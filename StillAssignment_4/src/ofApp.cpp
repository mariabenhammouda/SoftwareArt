#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
   // ofEnableDepthTest();
    
    sliderGroup.setName("sliders");
    sliderGroup.add(Thickness.set("Thickness", 1, 1, 5));
  //  sliderGroup.add(BoxMax.set("Number of boxes", 5, 1, 100));
    mainGroup.add(sliderGroup);
    gui.setup(mainGroup);
    
    //ofSetFrameRate(5);
   // ofSetColor(.colours->x, line.colours->y,line.colours->z);
    ofBackground(0); // set the window background to white
    mainCam.setPosition(0, 0, 400); // set initial position for our easyCam 3D viewer
    for (int i=0; i<MaxBoxnumber; i++){
        ofBoxPrimitive newbox;
        newbox.set(50);
        newbox.setPosition(ofRandom(-spaceRange,spaceRange),ofRandom(-spaceRange,spaceRange),ofRandom(-spaceRange,spaceRange));
       
    for(int x=0; x<6; x++){
        newbox.setSideColor(x, ofColor::fromHsb(ofRandom(230,255),255,255));
    }
        boxes.push_back(newbox);
    }
}

//--------------------------------------------------------------
void ofApp::update(){
    
   boxes[ofRandom(boxes.size())] .setPosition(ofRandom(-spaceRange,spaceRange),ofRandom(-spaceRange,spaceRange),ofRandom(-spaceRange,spaceRange));
   
}

//--------------------------------------------------------------
void ofApp::draw(){
    mainCam.begin();
    
    myline.draw();
/*    for (int i=0; i<100; i++) {
            ofDrawLine(-spaceRange, 50+(i*10), spaceRange, 75+(i*5));
        }*/
   
    
    //ofSetColor(255,95,31);
    //ofFill();
   // ofDrawBox(30);
    for( int x=0; x<boxes.size(); x++){
    boxes[x].draw();
    }
    mainCam.end();
    gui.draw();
   // linePercent=0;
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if (key=='f'){
        for (int i=0; i<10; i++){
            ofSetLineWidth(Thickness);
            myline.addVertex(ofRandom(-spaceRange,spaceRange), ofRandom(-spaceRange,spaceRange),ofRandom(-spaceRange,spaceRange));
            
            
        }
        myline.close();
      
        
    }
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
