//
//  ReverbKernel.cpp
//  LowpassHighpassReverb
//
//  Created by armen karamian on 8/28/15.
//
//

#include "ReverbKernel.h"

using namespace std;

	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#pragma mark ____ReverbKernel


	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	//	ReverbKernel::ReverbKernel()
	//
	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
ReverbKernel::ReverbKernel(AUEffectBase *inAudioUnit) : AUKernelBase(inAudioUnit)
{
	Reset();
}

	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	//	ReverbKernel::~ReverbKernel()
	//
	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
ReverbKernel::~ReverbKernel( )
{
}


	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	//	ReverbKernel::Reset()
	//
	//		It's very important to fully reset all Reverb state variables to their
	//		initial settings here.  For delay/reverb effects, the delay buffers must
	//		also be cleared here.
	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
void ReverbKernel::Reset()
{

}



	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	//	ReverbKernel::Process(int inFramesToProcess)
	//
	//		We process one non-interleaved stream at a time
	// for version 2 AudioUnits inNumChannels is always 1
	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
void ReverbKernel::Process(const Float32 *inSourceP, Float32 *inDestP, UInt32 inFramesToProcess,
						   UInt32 inNumChannels, bool &ioSilence)
{
	if (!ioSilence)
	{
			//create Reverb selection and Reverb function objects
		const Float32 *inputBuffer = inSourceP;
		Float32 *outputBuffer = inDestP;
		
		for (int i = 0; i < inFramesToProcess; i++)
		{
			outputBuffer[i] = inputBuffer[i];
		}
		
	}
}
