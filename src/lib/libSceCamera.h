#pragma once

// Params should go here....

// code goes here
// example ABI_SYSV int test(int input);
void sceCameraAccGetData();
void sceCameraAudioClose();
void sceCameraAudioGetData();
void sceCameraAudioGetData2();
void sceCameraAudioOpen();
void sceCameraAudioReset();
void sceCameraChangeAppModuleState();
void sceCameraClose();
void sceCameraCloseByHandle();
void sceCameraDeviceOpen();
void sceCameraGetAttribute();
void sceCameraGetAutoExposureGain();
void sceCameraGetAutoWhiteBalance();
void sceCameraGetCalibData();
void sceCameraGetCalibDataFromDevice();
void sceCameraGetCalibrationData();
void sceCameraGetConfig();
void sceCameraGetContrast();
void sceCameraGetDefectivePixelCancellation();
void sceCameraGetDeviceConfig();
void sceCameraGetDeviceConfigWithoutHandle();
void sceCameraGetDeviceID();
void sceCameraGetDeviceIDWithoutOpen();
void sceCameraGetDeviceInfo();
void sceCameraGetExposureGain();
void sceCameraGetFrameData();
void sceCameraGetGamma();
void sceCameraGetHue();
void sceCameraGetLensCorrection();
void sceCameraGetMmapConnectedCount();
void sceCameraGetProductInfo();
void sceCameraGetRegister();
void sceCameraGetRegistryInfo();
void sceCameraGetSaturation();
void sceCameraGetSharpness();
void sceCameraGetVrCaptureInfo();
void sceCameraGetWhiteBalance();
void sceCameraInitializeRegistryCalibData();
void sceCameraIsAttached();
void sceCameraIsConfigChangeDone();
void sceCameraIsValidFrameData();
void sceCameraOpen();
void sceCameraOpenByModuleId();
void sceCameraRemoveAppModuleFocus();
void sceCameraSetAppModuleFocus();
void sceCameraSetAttribute();
void sceCameraSetAttributeInternal();
void sceCameraSetAutoExposureGain();
void sceCameraSetAutoWhiteBalance();
void sceCameraSetCalibData();
void sceCameraSetConfig();
void sceCameraSetConfigInternal();
void sceCameraSetContrast();
void sceCameraSetDebugStop();
void sceCameraSetDefectivePixelCancellation();
void sceCameraSetDefectivePixelCancellationInternal();
void sceCameraSetExposureGain();
void sceCameraSetForceActivate();
void sceCameraSetGamma();
void sceCameraSetHue();
void sceCameraSetLensCorrection();
void sceCameraSetLensCorrectionInternal();
void sceCameraSetProcessFocus();
void sceCameraSetProcessFocusByHandle();
void sceCameraSetRegister();
void sceCameraSetSaturation();
void sceCameraSetSharpness();
void sceCameraSetTrackerMode();
void sceCameraSetUacModeInternal();
void sceCameraSetVideoSync();
void sceCameraSetVideoSyncInternal();
void sceCameraSetWhiteBalance();
void sceCameraStart();
void sceCameraStartByHandle();
void sceCameraStop();
void sceCameraStopByHandle();