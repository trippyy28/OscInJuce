/*
  ==============================================================================

    SynthSound.h
    Created: 2 May 2023 7:50:09pm
    Author:  user

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

class SynthSound : public juce::SynthesiserSound
{
public:
    bool appliesToNote (int midiNoteNumber) override { return true;}
    bool appliesToChannel {int midiChannel} override {return true;}
}
