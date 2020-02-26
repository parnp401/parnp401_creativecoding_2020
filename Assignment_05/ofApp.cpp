#include "ofApp.h"

ofSoundPlayer boop;

//--------------------------------------------------------------
void ofApp::setup(){
  ofSetFrameRate(60);

    boop.loadSound("ClownHorn.mp3");
}

int x = 100, y = 100;
int inc = 1;  

//--------------------------------------------------------------
void ofApp::update(){
  
  
  
  if (x%500 == 0) {
    boop.play();
  }
  
  x += inc;
}

//--------------------------------------------------------------
void ofApp::draw(){
  ofBackground(179,225,245);

ofSetColor(0,0,0);
     ofFill(0,0,0);
    ofPolyline line;
line.addVertex(ofVec3f(500,100,0));
line.addVertex(ofVec3f(50,200,0));
line.addVertex(ofVec3f(150,200,0));
line.close();
line.draw();
    
    ofSetColor(239,208,82);
    ofFill();
    ofDrawCircle(500,400,300);

    ofSetColor(0,0,0);
    ofFill();
    ofDrawCircle(400,300,20);

    ofSetColor(0,0,0);
    ofFill();
    ofDrawCircle(600,300,20);

    ofSetColor(0,0,0);
    ofFill();
    ofDrawCurve(500,400,400,600,600,600,1500,1500);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){

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
