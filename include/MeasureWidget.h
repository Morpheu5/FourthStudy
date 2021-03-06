#pragma once

#include "Widget.h"
#include "cinder/Timeline.h"

using namespace ci;
using namespace std;

#define MEASUREWIDGET_NOTELENGTH 0.25f

namespace FourthStudy {
	
	class TouchTrace;
    
	class MeasureWidget : public Widget {
		Rectf _noteBox;
		Rectf _boundingBox;
		
		Rectf _playIcon;
		Rectf _inletIcon;
		Rectf _outletIcon;
		
		Rectf _cursor;
		Anim<Vec2f> _cursorOffset;
		
		CueRef _cue;

        pair<int, int> _measureSize;
		
		vector<int> _midiNotes;
		
		void playNote(int n);
		void finishedPlaying();

	public:
		vector<vector<bool>> notes;
		mutex notesMutex;
		
		bool isPlaying;
		
		vector<int>& midiNotes() { return _midiNotes; }
		void setMidiNotes(vector<int> n) { _midiNotes = n; }
		
		MeasureWidget();
		MeasureWidget(Vec2f center, int rows, int columns);
        
		void draw();
		bool hit(Vec2f p);
		void tap(Vec2f p);
		void moveBy(Vec2f v);
        void zoomBy(float s);
        void rotateBy(float a);
		
		bool hitInlet(Vec2f p);
		bool hitOutlet(Vec2f p);
		
		const pair<int, int>& measureSize() const { return _measureSize; }
		const Rectf& inletIcon() const { return _inletIcon; }
		const Rectf& outletIcon() const { return _outletIcon; }
		
		void toggle(pair<int, int> note, bool log = true);
		void processStroke(const TouchTrace &trace);
		
		void play();
		void stop();
		
		unsigned int getNote(int n);
	};
}