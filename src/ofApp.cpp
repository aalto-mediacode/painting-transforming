#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
   
    
    ofBackground(0);
   //image1
    myImage1.load("work-by-monai-mask9.jpg");
    myPixels1=myImage1.getPixels();
    float size=20;
                 for(int x=0;x<myImage1.getWidth();x+=size){
                 for(int y=0;y<myImage1.getHeight();y+=size){
                     
                     //pos1={x,y};
                     //color1=myPixels1.getColor(x, y);
                    // posV1.push_back(pos1);
                    // colorP.push_back(color1);
                     
                     /*Particle newParticle1;
                     newParticle1.setup(pos1,myPixels1.getColor(x,y));
                     myParticle1.push_back(newParticle1);
                      */
                 }
             }
    
    //image2
    myImage2.load("8cfb14e89ab746ba99475846f6525e26_th-02.jpg");
    myPixels2=myImage2.getPixels();
                    for(int x=0;x<myImage2.getWidth();x+=size){
                    for(int y=0;y<myImage2.getHeight();y+=size){
                        
                        //pos2={x,y};
                        //color2=myPixels2.getColor(x, y);
                       
                        //Particle newParticle2;
                        //newParticle2.setup(pos2,myPixels2.getColor(x,y));
                                //myParticle2.push_back(newParticle2);
                            }
                        }
      particleLimit=12000;
    
}

//--------------------------------------------------------------
void ofApp::update(){
   
    
    //if(myParticle1.size()<= particleLimit && grow){
    if(myParticle1.size()< particleLimit){
    for(int i=0;i<60;i++){
      
    pos1={ofRandom(myImage1.getWidth()),ofRandom(myImage1.getHeight())};
    Particle newParticle1;
    newParticle1.setup(pos1,myPixels1.getColor(pos1.x,pos1.y));
    myParticle1.push_back(newParticle1);
    
    
    Particle newParticle2;
    newParticle2.setup(pos1,myPixels2.getColor(pos1.x,pos1.y));
    myParticle2.push_back(newParticle2);
    }
        //grow=false;
}
    
  //  interaction
    /* if(myParticle1.size()> particleLimit){
        for(int i=0; i<myParticle1.size(); i++){
            mouseV={mouseX,mouseY};
            myParticle1[i].dist=glm::distance(myParticle1[i].posV, mouseV);
            if(myParticle1[i].dist<200){
                myParticle1[i].posV-=(mouseV-myParticle1[i].posV)/100;
            }else{
                //myParticle1[i].posV+=(mouseV-myParticle1[i].posV[i])/100;
                myParticle1[i].posV=pos1;
            }
            //myParticle1[i].pr+2/myParticle1[i].dist[i]+20;
        }
      }*/
    
    
    
    
    
    if(myParticle1.size() >= particleLimit){
        for(int i=0;i<myParticle1.size();i++){
       myParticle1[i].update();
           
    }
  }
    //bool remove=false;
 
    for(int i=0;i<myParticle1.size();i++){
        if(myParticle1[i].posV.x>550 || myParticle1[i].posV.x<-80 || myParticle1[i].posV.y<-80 ||myParticle1[i].posV.y>550){
            particleLimit=4000;
      myParticle1.erase(myParticle1.begin()+i);
        //remove=true;
  }
    }
       // if(remove && myParticle1.size()>0){
        /*for(int i=0;i<200;i++){
        myParticle1.erase(myParticle1.begin()+i);
        }*/
           // if(ofGetFrameNum()%3){
           //    myParticle1.erase(myParticle1.begin()+ofRandom(myParticle1.size()-100));
           //}
       
            
   // myParticle1.erase(myParticle1.remove_if(myParticle1.begin(),myParticle1.end(),checkDead), myParticle1.end());

    
    
    
    if(myParticle1.size()<2500){
          for(int i=0;i<myParticle1.size();i++){
          //myParticle2[i].update();
      }
    }


/*for(int i=0;i<myParticle2.size();i++){
    if(myParticle1.size()>12000){
        myParticle2[i].update();
      }
    }*/
 
    
       

   //removing particles if they cross pixel x -100
   //if(myParticle1[i].posV.x<-100){
       //myParticle1.erase(myParticle1.begin()+i);


}
//--------------------------------------------------------------
void ofApp::draw(){
    //ofSetColor(255);
    
    ofPushMatrix();
    ofTranslate(85, 85);
    

    if(myParticle1.size()>= particleLimit){
       // grow=false;
    }
    for(int i=0;i<myParticle2.size();i++){
        myParticle2[i].draw();
    }
     
    for(int i=0;i<myParticle1.size();i++){
        myParticle1[i].draw();
        }
    cout << myParticle1.size()<<endl;

}

   

//--------------------------------------------------------------
bool checkDead( Particle &P ){
  if(P.posV.x>400)
    return true;
   else
    return false;
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
