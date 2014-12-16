#include "TapGesture.h"

using namespace ci;

FourthStudy::TapGesture::TapGesture() : _position(Vec2f(0.0f, 0.0f)), _widgetId(0) { }
FourthStudy::TapGesture::TapGesture(const Vec2f& p, const unsigned long id) : _position(p), _widgetId(id) { }

FourthStudy::TapGesture::~TapGesture() { }

const Vec2f& FourthStudy::TapGesture::position() const {
	return _position;
}

const bool FourthStudy::TapGesture::isOnWidget() {
	return _widgetId != 0;
}

const unsigned long FourthStudy::TapGesture::widgetId() const {
	return _widgetId;
}