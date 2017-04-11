#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    refCircle.set(200, 200);
    theta = ofRandom(40);
    multiplier = ofRandom(200);
}

//--------------------------------------------------------------
void ofApp::update(){
    theta += 0.02;
    increase += .5;
    
    float x = cos(theta);
    float y = sin(theta);
    
    sinCircle.set(refCircle.x + increase,( refCircle.y + y*multiplier) );
    cosCircle.set(refCircle.x + x*multiplier, refCircle.y + increase);
    
    rotateCircle.set(refCircle.x + x*multiplier, refCircle.y + y*multiplier);
}

//--------------------------------------------------------------
void ofApp::draw(){

    
    ofSetBackgroundAuto(false);
    

    ofSetColor(200, ofRandom(255), 0);
    ofDrawBox (refCircle, ofRandom(120));
    
    ofSetColor(255, ofRandom(255), 20);
    ofDrawCircle(sinCircle, ofRandom(20));

    ofSetColor(60, ofRandom(255));
    ofDrawCircle(cosCircle, ofRandom(20));
    
    
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
