#include "ofApp.h"
#include <random>
using namespace std;

//--------------------------------------------------------------
void ofApp::setup(){
jewel.load("diamond.png");// image to use (must be stored in "random/bin/data" folder)
//X = {500, 1000, 30, 100, 300, 200, 750, 380 };// set of x-coordinates for jewel
//Y = {630, 400, 900, 40, 200, 0, 90, 30}; //set of y-coordinates for jewel
	
	random_device rd;
	mt19937 eng1(rd());
	
	/*Uniform Distribution
	uniform_int_distribution < > jewel_x(0, 1200);
    uniform_int_distribution < > jewel_y(0, 970);*/
    
    
    //Normal Distribution
    normal_distribution <float > jewel_x(1000, 15);
    normal_distribution < float> jewel_y(800, 15);
   

	for(int n = 0 ;  n < 20 ;  n++) 
    {
		X.push_back(jewel_x (eng1));
		cout<< jewel_x(eng1)<<endl;
	}
	
	for(int n = 0; n < 20; n++)
	{
		Y.push_back(jewel_y (eng1));
		cout<< jewel_y(eng1)<<endl;
	}
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
ofBackground(0);

for(auto i = 0u; i < X.size(); i++)
 {
   jewel.draw(X[i], Y[i]);
 }
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
