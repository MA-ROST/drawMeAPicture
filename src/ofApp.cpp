#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetBackgroundColor(26, 49, 52);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	// BG
	const int divisionsBG{ 6 };
	for ( int i = 0; i < divisionsBG; ++i ) {
		ofSetColor(ofColor::black, 225-((225/divisionsBG)*i));
		ofDrawRectangle((i * ofGetWidth() / divisionsBG), 0, ofGetWidth()/ divisionsBG, ofGetHeight());
	}

	// Lamp
	// -- Bulb
	ofSetColor(ofColor::yellow);
	ofDrawCircle(800, 250, 25);
	// -- Chain
	ofNoFill();
	ofSetLineWidth(4);
	ofSetColor(5, 5, 5);
	for ( int i = 0; i < 9; ++i ) {
		ofDrawCircle(800, (10*2)*i, 10);
	}
	ofFill();
	// -- Cover
	ofSetColor(15, 15, 15);
	ofDrawTriangle(725, 250, 875, 250, 800, 165);
	// -- Rays
	ofSetColor(ofColor::yellow);
	ofSetLineWidth(2);
	ofDrawLine(750, 290, 675, 400);
	ofDrawLine(800, 300, 800, 450);
	ofDrawLine(850, 290, 925, 400);

	// Person
	ofSetColor(5, 5, 5);
	ofDrawRectangle(210, 350, 75, 200); // Neck
	ofSetColor(ofColor::black);
	ofSetCircleResolution(25);
	ofDrawEllipse(250, 350, 200, 250); // Face
	ofDrawRectRounded(125, 500, 250, 400, 90); // Body
	// -- Eyes
	ofSetColor(ofColor::yellow);
	ofDrawTriangle(170, 375, 230, 375,  200, 355);
	ofDrawTriangle(270, 375, 330, 375, 300, 355);

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
