#include "TouchTrace.h"

#include "TouchPoint.h"

#include "FourthStudyApp.h"

using namespace ci;
using namespace ci::app;

FourthStudy::TouchTrace::TouchTrace() {
	state = State::TOUCH_DOWN;
	isVisible = true;
	widgetId = 0;
	_lifespan = FPS/6;
}

FourthStudy::TouchTrace::~TouchTrace() {
	touchPoints.clear();
}

int FourthStudy::TouchTrace::getSessionId() {
	return touchPoints.back().getSessionId();
}

Vec2f FourthStudy::TouchTrace::currentPosition() {
	return touchPoints.back().getPos();
}

Vec2f FourthStudy::TouchTrace::previousPosition() {
	if(touchPoints.size() > 1) {
		return prev(touchPoints.end(), 2)->getPos();
	} else {
		return currentPosition();
	}
}

int FourthStudy::TouchTrace::lifespan() {
	return _lifespan;
}

bool FourthStudy::TouchTrace::isDead() {
	return _lifespan == 0;
}

void FourthStudy::TouchTrace::update() {
	if(!isVisible) {
		_lifespan--;
	}
}

void FourthStudy::TouchTrace::resurrect() {
	_lifespan = FPS/6;
	isVisible = true;
}

bool FourthStudy::TouchTrace::isOnWidget() {
	return widgetId != 0;
}

// TODO State info should be added to the cursors
void FourthStudy::TouchTrace::addCursorDown(FourthStudy::TouchPoint p) {
	touchPoints.push_back(p);
	state = State::TOUCH_DOWN;
}

void FourthStudy::TouchTrace::cursorMove(FourthStudy::TouchPoint p) {
	touchPoints.push_back(p);
	
	if(p.getSpeed().length() < 0.025f) {
		state = State::TOUCH_STILL;
	} else {
		state = State::TOUCH_MOVING;
	}
}

void FourthStudy::TouchTrace::addCursorUp(FourthStudy::TouchPoint p) {
	touchPoints.push_back(p);
	state = State::TOUCH_UP;
}