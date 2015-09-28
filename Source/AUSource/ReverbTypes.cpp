//
//  ReverbTypes.cpp
//  LowpassHighpassReverb
//
//  Created by armen karamian on 9/4/15.
//
//

#include "ReverbTypes.h"



#pragma mark ReverbhelperFunctions
	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	//	ReverbTypes
	//
	//		void ReverbKernel::Process(const Float32 *inSourceP, Float32 *inDestP, UInt32 inFramesToProcess,
	//			UInt32 inNumChannels, bool &ioSilence)
	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

std::vector<Float32> ReverbTypes::calculateReverb(Float64 sampleRate, int selectedReverbType)
{
	switch (selectedReverbType)
	{
		case kReverb:
		{
			
		}
			
		default:
			break;
	}
}


#pragma mark ReverbTypeFunctions
	/*
	 * in progress
	 *
	 */

void ReverbTypes::reverb(const Float32 *inputBuffer, Float32 *outputBuffer, int bufferSize)
{
}

