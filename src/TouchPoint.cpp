#include "TouchPoint.h"

using namespace ci;

FourthStudy::TouchPoint::TouchPoint() {
	timestamp = app::getElapsedSeconds();
}

FourthStudy::TouchPoint::TouchPoint(const tuio::Cursor& c) : tuio::Cursor(c) {
	timestamp = app::getElapsedSeconds();
}