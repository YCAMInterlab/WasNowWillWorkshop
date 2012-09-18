//
//  ControlCircle.h
//  ExampleReceiver
//
//  Created by Jim on 9/2/12.
//
//

#pragma once

#include "ofMain.h"
#include "ControlCircleTrail.h"

class ControlCircle {
  public:
	ControlCircle();
	
	void update();
	void setPosition(ofVec3f pos);
	void setX(float x);
	void setY(float y);
	void setZ(float z);
	
	ofVec3f getPosition();
	ofVec3f getLastPosition();
	
	void setName(string name);
	string getName();
	
	ofColor getColor();
	ofColor getLastColor();
	
	void setColor(ofColor color);
	float lastMessageReceived;
	bool didBang();
	void bang();
	void setQuote(string quote);
	vector<ControlCircleTrail> trail;
	void setDrawTail(bool draw);
	bool getDrawTail();
	bool didTailSwitch();
	
	bool drawParticles;
  protected:
	ofVec3f lastPosition;
	ofVec3f position;
	bool receivedbang;
	string currentQuote;
	float quoteReceivedTime;
	float lastBangTime;
	bool drawTail;
	bool tailSwitched;
	float lastTimeMoved;
	string name;
	ofColor color;
	ofColor lastColor;
};


