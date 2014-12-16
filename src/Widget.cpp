#include "Widget.h"

unsigned long FourthStudy::Widget::s_id = 0;

FourthStudy::Widget::Widget() {
	// So that there can never be a widget with id 0
	_id = ++s_id;
}