#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    beat.load("stuck like glue.wav");
    plant.load("flower.png");
    type.load("type.png");
    
    fftSmooth = new float [8192];
    for (int i = 0; i < 8192; i++) {
        fftSmooth[i] = 0.0;
    }
    bands = 64;
    
    beat.setLoop(true);
    
}

//--------------------------------------------------------------
void ofApp::update(){
    ofSoundUpdate();
    plant.load("flower.png");
    type.load("type.png");
    ofBackground(200, 100, 400);
    
    float * value = ofSoundGetSpectrum(bands);
    for (int i = 0; i < bands; i++) {
        fftSmooth [i] *= 0.4f;
        if (fftSmooth[i] < value[i]) {
            fftSmooth[i] = value[i] ;
            
        }
    }
}


//--------------------------------------------------------------
void ofApp::draw(){
    
    for (int i = 0; i < bands; i++) {
        type.draw(100, ofGetHeight()/8, -(fftSmooth[i]*300));
        ofSetColor(200,i*39,i*20,115);
    }
    
    
    for (int i = 0; i < bands; i++) {
        plant.draw(400, ofGetHeight()/32, -(fftSmooth[i]*300));
        ofSetColor(200,i*39,i*4,15);
    }
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    switch (key) {
        case '1':
            beat.play();
            break;
            
        case '2':
            beat.stop();
            break;
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
