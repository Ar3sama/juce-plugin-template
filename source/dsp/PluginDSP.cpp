#include "PluginDSP.h"

void PluginDSP::prepare (double sampleRate, int samplesPerBlock, int numChannels)
{
    juce::ignoreUnused (sampleRate, samplesPerBlock, numChannels);
}

void PluginDSP::reset()
{
}

void PluginDSP::processBlock (juce::AudioBuffer<float>& buffer)
{
    // Neutral template: audio passes through unchanged until plugin-specific DSP is added.
    juce::ignoreUnused (buffer);
}
