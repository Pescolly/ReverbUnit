//
//  ReverbTypes.h
//  LowpassHighpassReverb
//
//  Created by armen karamian on 9/4/15.
//
//

#ifndef __LowpassHighpassReverb__ReverbTypes__
#define __LowpassHighpassReverb__ReverbTypes__

#include <AudioToolbox/AudioToolbox.h>
#include "ReverbParameters.h"
#include <vector>

class ReverbTypes
{
public:
	/*
	 *	Reverb types
	 */
	void reverb(const Float32 *inputBuffer, Float32 *outputBuffer, int bufferSize);
	
	
	
	/*
	 *	Reverb helper functions
	 */
	
	std::vector<Float32> calculateReverb(Float64 sampleRate, int selectedReverbType);
	
};

#endif /* defined(__LowpassHighpassReverb__ReverbTypes__) */
