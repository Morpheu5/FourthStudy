#include "DisconnectionGesture.h"

#include "TouchPoint.h"

FourthStudy::DisconnectionGesture::DisconnectionGesture() :
_widgetId(0), _toWid(0) { }

FourthStudy::DisconnectionGesture::DisconnectionGesture(const unsigned long fromWid, const unsigned long toWid) :
_widgetId(fromWid), _toWid(toWid) {
	
}

FourthStudy::DisconnectionGesture::~DisconnectionGesture() { }

const bool FourthStudy::DisconnectionGesture::isOnWidget() {
	return _widgetId != 0;
}

const unsigned long FourthStudy::DisconnectionGesture::widgetId() const {
	return _widgetId;
}

const unsigned long FourthStudy::DisconnectionGesture::fromWid() const {
	return _widgetId;
}

const unsigned long FourthStudy::DisconnectionGesture::toWid() const {
	return _toWid;
}