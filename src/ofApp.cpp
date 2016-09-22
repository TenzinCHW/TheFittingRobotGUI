#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	sizeControl.setup("Size");
	sizeControl.add(Waist.setup("Waist cm", minmaxWaist[0], minmaxWaist[0], minmaxWaist[1]));
	sizeControl.add(Hip.setup("Hip cm", minmaxHip[0], minmaxHip[0], minmaxHip[1]));
	sizeControl.add(Thigh.setup("Thigh cm", minmaxThigh[0], minmaxThigh[0], minmaxThigh[1]));
	sizeControl.add(Calf.setup("Calf cm", minmaxCalf[0], minmaxCalf[0], minmaxCalf[1]));
	//fileToLoad = "Permutations/H1/T1/C1.obj";
	std::cout << fileToLoad + "\n";
	MyModel.setPosition(0, 200, 0);
	sender.addListener(this, &ofApp::senderPressed);

}

//--------------------------------------------------------------
void ofApp::update(){




	if (20 <= Hip && Hip <= 26) {
		hipstring.assign(hipsizes[0]);
	}
	else if (27 <= Hip && Hip <= 32) {
		hipstring.assign(hipsizes[1]);
	}
	else if (33 <= Hip && Hip <= 37) {
		hipstring.assign(hipsizes[1]);
	}
	else if (38 <= Hip && Hip <= 44) {
		hipstring.assign(hipsizes[3]);
	}
	else {
		hipstring.assign(hipsizes[4]);
	}

	if (20 <= Thigh && Thigh <= 23) {
		thighstring.assign(thighsizes[0]);
	}
	else if (24 <= Thigh && Thigh <= 28) {
		thighstring.assign(thighsizes[1]);
	}
	else if (29 <= Thigh && Thigh <= 32) {
		thighstring.assign(thighsizes[1]);
	}
	else if (33 <= Thigh && Thigh <= 37) {
		thighstring.assign(thighsizes[3]);
	}
	else {
		thighstring.assign(thighsizes[4]);
	}

	if (15 <= Calf && Calf <= 17) {
		calfstring.assign(calfsizes[0]);
	}
	else if (18 <= Calf && Calf <= 20) {
		calfstring.assign(calfsizes[1]);
	}
	else if (21 <= Calf && Calf <= 24) {
		calfstring.assign(calfsizes[1]);
	}
	else if (25 <= Calf && Calf <= 28) {
		calfstring.assign(calfsizes[3]);
	}
	else {
		calfstring.assign(calfsizes[4]);
	}

	fileToLoad.assign("Permutations/" + hipstring + "/" + thighstring + "/" + calfstring + ".obj");
	
}

//--------------------------------------------------------------
void ofApp::draw(){
	sizeControl.draw();
	cam.begin();


	MyModel.clear();
	MyModel.loadModel(fileToLoad, 0);
	MyModel.setPosition(0, 200, 0);
	MyModel.setRotation(2, 0, 0, 180, 0);


	ofSetColor(255, 255, 255, 255);
	MyModel.drawWireframe();

	cam.end();
}

//--------------------------------------------------------------
void ofApp::senderPressed() {
	//meow.get()   TODO HTTP request
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
