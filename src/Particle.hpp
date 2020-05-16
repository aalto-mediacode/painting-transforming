//
//  Particle.hpp
//  myApp1_0
//
//  Created by Michelle on 10.5.2020.
//
#pragma once

#include "ofMain.h"

class Particle{

    public:
        void setup(glm::vec2 originV, ofColor C);
        void update();
        void draw();
   //void  attractionForce(float px, float py, float radius, float strength);
    //    void applyForce(glm::vec2 force);
   
    float noiseoffset;
    glm::vec2 posV;
    glm::vec2 velV;
    glm::vec2 accelV;
    ofColor myColor;
    
   //glm::vec2 mouseV;
    float dist;
    glm::vec2 mouseV;
    float mouseX;
    float mouseY;
    
};
