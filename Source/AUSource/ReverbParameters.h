//
//  ReverbParameters.h
//  LowpassHighpassReverb
//
//  Created by armen karamian on 9/6/15.
//
//

#ifndef LowpassHighpassReverb_ReverbParameters_h
#define LowpassHighpassReverb_ReverbParameters_h

	//CFString names for the UI
static CFStringRef kReverbTail_Name = CFSTR("Mix");
static CFStringRef kResonance_Name = CFSTR("Tail Length");
static CFStringRef kReverbType_Name = CFSTR("Reverb Type");


	//enum of Reverb parameters
	//and Reverb types
enum
{
	kReverbParam_Mix = 0,
	kReverbParam_TailLength = 1,
	kReverbParam_ReverbType = 2,
	kReverb = 3
};


#endif
