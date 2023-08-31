/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class SynthesizerPluginTestAudioProcessorEditor  : public juce::AudioProcessorEditor, private juce::Slider::Listener
{
public:
    SynthesizerPluginTestAudioProcessorEditor (SynthesizerPluginTestAudioProcessor&);
    ~SynthesizerPluginTestAudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

private:
    // function for detecting when the volume slider changed value
    void sliderValueChanged (juce::Slider* slider) override;
    
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    SynthesizerPluginTestAudioProcessor& audioProcessor;
    
    // midi volume slider
    juce::Slider midiVolume;
    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (SynthesizerPluginTestAudioProcessorEditor)
};
