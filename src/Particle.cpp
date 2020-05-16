
#include "Particle.hpp"

//--------------------------------------------------------------
void Particle::setup(glm::vec2 originV, ofColor C){
   
    
    //mouseV={mouseX,mouseY};
    posV=originV;
    //accelV={0,0.01};
    velV={ofRandom(-1.5,1.5),ofRandom(-1.5,1.5)};
    myColor=C;
    noiseoffset=ofRandom(1000);
   
   // dist=glm::distance(posV, mouseV);
    
    
    
}

//--------------------------------------------------------------
void Particle::update(){
    
    
    
    //velV+=accelV;
    posV+=velV;
  /*
    if(posV.x>555){
        velV.x*=-1;
    }
    if(posV.y>555){
        velV.y*=-1;
    }
    if(posV.x<-85){
           velV.x*=-1;
       }
       if(posV.y<-85){
           velV.y*=-1;
       }
    */
       }


//--------------------------------------------------------------
void Particle::draw(){
   
    float time=ofGetElapsedTimef()*0.9;
    float Pr=ofNoise(time+noiseoffset)*8;
           ofSetColor(myColor);
           ofDrawCircle(posV,Pr);
       
    }
    


 //--------------------------------------------------------------

/*void  Particle::attractionForce(float px, float py, float radius, float strength){
   // myImage1.getWidth()+50, myImage1.getHeight()+50, myImage.getWidth()+100, 0.5
    ofVec2f posForce;
    posForce.set(px,py);
    
    
    ofVec2f diff = posV - posForce;
    if (diff.length() < radius){
    float pct = 1 - (diff.length() / radius);
        diff.normalize();
        accelV.x += diff.x * pct * strength;
       accelV.y += diff.y * pct * strength;
    
    }

}
*/
