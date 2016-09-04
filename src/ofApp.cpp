#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	gui.setup();
	gui.add(radius.setup("radius", 140, 10, 300));
	MyModel.loadModel("TestForRobotGUI/one.3ds", 20);
	MyModel.setPosition(ofGetWidth()*0.5, ofGetHeight()*0.5, -100);
	//MyModel.setRotation();
}

//--------------------------------------------------------------
void ofApp::update(){
	
}

//--------------------------------------------------------------
void ofApp::draw(){
	gui.draw();
	cam.begin();

	if (radius > 170) {
		MyModel.clear();
		MyModel.loadModel("TestForRobotGUI/two.3ds", 20);
		MyModel.setPosition(0, 0, -100);


		//glPushMatrix();

		//draw in middle of the screen
		//glTranslatef(ofGetWidth() / 2, ofGetHeight() / 2, 0);
		//tumble according to mouse
		//glRotatef(-mouseY, 1, 0, 0);
		//glRotatef(mouseX, 0, 1, 0);
		//glTranslatef(-ofGetWidth() / 2, -ofGetHeight() / 2, 0);

		ofSetColor(255, 255, 255, 255);
		MyModel.drawWireframe();

		//glPopMatrix();

	}
	else
	{
		MyModel.clear();
		MyModel.loadModel("TestForRobotGUI/one.3ds", 20);
		MyModel.setPosition(0, 0, -100);
		
		//glPushMatrix();

		//draw in middle of the screen
		//glTranslatef(ofGetWidth() / 2, ofGetHeight() / 2, 0);
		//tumble according to mouse
		//glRotatef(-mouseY, 1, 0, 0);
		//glRotatef(mouseX, 0, 1, 0);
		//glTranslatef(-ofGetWidth() / 2, -ofGetHeight() / 2, 0);

		ofSetColor(255, 255, 255, 255);
		MyModel.drawWireframe();

		//glPopMatrix();
	}
	cam.end();
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
	glRotatef(x, 0, 1, 0);
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
