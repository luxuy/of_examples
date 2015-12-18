#include "testApp.h"
int myCircleX;
int myCircleY;
//--------------------------------------------------------------
void testApp::setup(){
  ofSetFrameRate(60);
  myCircleX = 300;
  myCircleY = 200;
}

//--------------------------------------------------------------
void testApp::update(){
  myCircleX++;
}

//--------------------------------------------------------------
void testApp::draw(){
  
  myCircleX = myCircleX + 1;

  ofSetColor(255, 0, 255);
  ofDrawCircle(myCircleX, myCircleY, 60);

  ofDrawBitmapString(ofToString(ofGetFrameRate())+"fps", 10, 15);
}


