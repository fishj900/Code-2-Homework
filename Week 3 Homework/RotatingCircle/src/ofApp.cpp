#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    refCircle.set(500, 350);
    
    theta = 400;
    rotateRadius = 50;
    oscSpeed = 1;
}

//--------------------------------------------------------------
void ofApp::update(){
    theta += -0.06;
    oscSpeed += .5;
    
    float x = cos(-theta) * rotateRadius;
    float y = sin(theta) * rotateRadius;
    
    sinCircle.set(refCircle.x + oscSpeed, (refCircle.y + y));
    cosCircle.set(refCircle.x + x, refCircle.y + oscSpeed);
    
    rotateCircle.set(refCircle.x + x, refCircle.y + y);
}

//--------------------------------------------------------------
void ofApp::draw(){

    ofSetBackgroundColor(1,1,1);
    ofSetColor(ofRandom(255), 200, 0);
    ofDrawCircle(refCircle, ofRandom(20));
    
    ofSetColor(ofRandom(255), 255, 0);
    ofDrawCircle(sinCircle,ofRandom(20));
    
    ofSetColor(ofRandom(150), 0, 255);
    ofDrawCircle(cosCircle,ofRandom(20));
    
    
    
    ofSetColor(ofRandom(255), 200, 0);
    ofDrawCircle(rotateCircle, ofRandom(20));
    

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
