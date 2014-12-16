#include "ConnectionGesture.h"

#include "TouchPoint.h"

FourthStudy::ConnectionGesture::ConnectionGesture() :
_widgetId(0), _toWid(0) { }

FourthStudy::ConnectionGesture::ConnectionGesture(const unsigned long fromWid, const unsigned long toWid) :
_widgetId(fromWid), _toWid(toWid) {
	
}

FourthStudy::ConnectionGesture::~ConnectionGesture() { }

const bool FourthStudy::ConnectionGesture::isOnWidget() {
	return _widgetId != 0;
}

const unsigned long FourthStudy::ConnectionGesture::widgetId() const {
	return _widgetId;
}

const unsigned long FourthStudy::ConnectionGesture::fromWid() const {
	return _widgetId;
}

const unsigned long FourthStudy::ConnectionGesture::toWid() const {
	return _toWid;
}