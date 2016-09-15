#pragma once

#include "ofMain.h"
#include "ofxGui.h"
#include "ofxAssimpModelLoader.h"
#include "ofURLFileLoader.h"

class ofApp : public ofBaseApp{

	public:
		ofxIntSlider Hip;
		ofxIntSlider Thigh;
		ofxIntSlider Calf;
		ofxPanel sizeControl;
		ofxButton sender;
		ofxAssimpModelLoader MyModel;
		ofURLFileLoader meow;

		string hipstring;
		string thighstring;
		string calfstring;
		string fileToLoad;
		string hipsizes[5] = { "H1", "H2", "H3", "H4", "H5" };
		string thighsizes[5] = { "T1", "T2", "T3", "T4", "T5" };
		string calfsizes[5] = { "C1", "C2", "C3", "C4", "C5" };

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
