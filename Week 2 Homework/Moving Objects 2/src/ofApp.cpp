#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetWindowShape(400, 400);
    boxX = 0;
    
    manfly.load("manfly.png");
    clouds.load("Clouds.jpg");
}

//--------------------------------------------------------------
void ofApp::update(){
    boxX = boxX + 5;
    if(boxX + 0 > ofGetWidth()){
        boxX = 0;
    }else if(boxX > mouseX){
        boxX = boxX - 2;
    }
    boxY = boxY + 10;
    if(boxY + 0 > ofGetWidth()){
        boxY = 0;
    }else if(boxY > mouseX){
        boxY = boxY - 3;
    }
    
  
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    clouds.draw(0,0);
    ofSetColor(255, 255, 255);
    manfly.draw(boxX, boxY);
    
    
    


    
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
