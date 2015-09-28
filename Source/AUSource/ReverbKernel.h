//
//  ReverbKernel.h
//  LowpassHighpassReverb
//
//  Created by armen karamian on 8/28/15.
//
//

#ifndef __LowpassHighpassReverb__ReverbKernel__
#define __LowpassHighpassReverb__ReverbKernel__

#include <stdio.h>
#include <math.h>
#include "AUEffectBase.h"
#include <AudioToolbox/AudioUnitUtilities.h>
#include "ReverbVersion.h"
#include "ReverbTypes.h"
#include "ReverbParameters.h"
#include <vector>

#pragma mark ReverbKernel

class ReverbKernel : public AUKernelBase		// the actual Reverb DSP happens here
{
public:
	ReverbKernel(AUEffectBase *inAudioUnit);
	virtual ~ReverbKernel();
	
		// processes one channel of non-interleaved samples
	virtual void Process(const  Float32 *inSourceP,
						 		Float32 *inDestP,
								UInt32 inFramesToProcess,
						 		UInt32 inNumChannels,
						 		bool &ioSilence);
	
		// resets the Reverb state
	virtual void Reset();
	
		//set Reverb type
	void setReverbType(AudioUnitParameterValue inputParameterValue);

		// used by the custom property handled in the Reverb class below
	double GetFrequencyResponse( double inFreq );
	
	
	
private:
	
};

#endif /* defined(__LowpassHighpassReverb__ReverbKernel__) */
