#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    image.load("night.jpg");
    beat.load("eerie.MP3");
    otherbeat.load("baby.mp3");
    
    fftSmooth = new float [8192];
    for (int i = 0; i < 8192; i++) {
        fftSmooth[i] = 0.0;
    }
    bands = 64;
    
    otherbeat.setLoop(true);

    
    gui.setup();
    gui.add(positionX.set("X", 0.0, 0.0, 30.0));
    gui.add(positionY.set("Y", 0.0, 0.0, 30.0));

}

//--------------------------------------------------------------
void ofApp::update(){
    
     ofSoundUpdate();
    
    float * value = ofSoundGetSpectrum(bands);
    for (int i = 0; i < bands; i++) {
        fftSmooth [i] *= 0.3f;
        if (fftSmooth[i] < value[i]) {
            fftSmooth[i] = value[i] ;
        }
    }

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    image.draw(0/2, 0/2, 0/2);
    gui.draw();
    
    
    
  ofSetColor(ofRandom(150),255,ofRandom(255));
               
    float time = ofGetElapsedTimef();
    for (int i =0; i < bands; i++) {
        float width = ofGetWidth();
        float height = ofGetHeight();
        float speed = 0.4;
        float posX = i * positionX;
        float posY = i * positionY;
        
        float x = width * ofNoise(time * speed + posX);
        float y = height * ofNoise(time * speed + posY);
        ofDrawCircle(x, y, -(fftSmooth[i]*20));
        ofSetColor(ofRandom(255),255,ofRandom(255));

    }
    ofDrawBitmapString("time" + ofToString(ofGetElapsedTimef()), 20, 20);

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    switch (key) {
        case '1':
            otherbeat.play();
            break;
            
        case '2':
            beat.play();
            break;
            
        case '3':
            otherbeat.stop();
            break;
            
            case '4':
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
