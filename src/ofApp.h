#pragma once

#include "ofMain.h"
#include "Particle.hpp"


class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();
        bool checkDead( Particle &P);
    
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
    
    
    //void  repulsionForce;
		
    bool grow=true;
    bool remove=false;
    vector <Particle> myParticle1;
    vector <Particle> myParticle2;
    
    ofImage myImage1;
    ofPixels myPixels1;
    
    ofImage myImage2;
    ofPixels myPixels2;
    int particleLimit;
      
    //vector <glm::vec2> posV1;
    glm::vec2 pos1;
    glm::vec2 pos2;
    glm::vec2 mouseV;
    
    float dist;
    float num;
    //vector <ofColor> colorP;
    //ofColor color1;
    //ofColor color2;
          
    //float size=5;
    //int randomI;

    
  
   
       
       
    
   
    
    
    
};

