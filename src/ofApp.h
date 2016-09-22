#pragma once

#include "ofMain.h"
#include "ofxGui.h"
#include "ofxAssimpModelLoader.h"
#include "ofURLFileLoader.h"

class ofApp : public ofBaseApp{

	public:
		ofxIntSlider Waist;
		ofxIntSlider Hip;
		ofxIntSlider Thigh;
		ofxIntSlider Calf;
		ofxPanel sizeControl;
		ofxButton sender;
		ofxAssimpModelLoader MyModel;
		ofURLFileLoader meow;

		string waiststring;
		string hipstring;
		string thighstring;
		string calfstring;
		string fileToLoad;
		int minmaxWaist[2] = { 23, 40 };
		int minmaxHip[2] = { 25, 48 };
		int minmaxThigh[2] = { 18, 28 };
		int minmaxCalf[2] = { 12, 24 };
		string waistsizes[5] = { "W1", "W2", "W3", "W4", "W5" };
		string hipsizes[9] = { "H1", "H2", "H3", "H4", "H5", "H6", "H7", "H8", "H9" };
		string thighsizes[9] = { "T1", "T2", "T3", "T4", "T5", "T6", "T7", "T8", "T9" };
		string calfsizes[9] = { "C1", "C2", "C3", "C4", "C5", "C6", "C7", "C8", "C9" };

		ofEasyCam cam;

		void setup();
		void update();
		void draw();

		void senderPressed();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		
};
