#include "LongTapGesture.h"

using namespace ci;

FourthStudy::LongTapGesture::LongTapGesture() : _position(Vec2f(0.0f, 0.0f)), _widgetId(0) { }
FourthStudy::LongTapGesture::LongTapGesture(const Vec2f& p, const unsigned long id) : _position(p), _widgetId(id) { }

FourthStudy::LongTapGesture::~LongTapGesture() { }

const Vec2f& FourthStudy::LongTapGesture::position() const {
	return _position;
}

const bool FourthStudy::LongTapGesture::isOnWidget() {
	return _widgetId != 0;
}

const unsigned long FourthStudy::LongTapGesture::widgetId() const {
	return _widgetId;
}