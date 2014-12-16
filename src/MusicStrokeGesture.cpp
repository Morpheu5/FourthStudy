#include "MusicStrokeGesture.h"

#include "TouchPoint.h"

FourthStudy::MusicStrokeGesture::MusicStrokeGesture() :
_widgetId(0) { }

FourthStudy::MusicStrokeGesture::MusicStrokeGesture(const TouchTrace& t, const unsigned long id) :
_stroke(t),
_widgetId(id) { }

FourthStudy::MusicStrokeGesture::~MusicStrokeGesture() { }

const FourthStudy::TouchTrace& FourthStudy::MusicStrokeGesture::stroke() const {
	return _stroke;
}

const bool FourthStudy::MusicStrokeGesture::isOnWidget() {
	return _widgetId != 0;
}

const unsigned long FourthStudy::MusicStrokeGesture::widgetId() const {
	return _widgetId;
}