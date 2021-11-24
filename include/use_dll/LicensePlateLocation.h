//
// MATLAB Compiler: 7.0 (R2018b)
// Date: Wed Nov 24 12:36:37 2021
// Arguments:
// "-B""macro_default""-W""cpplib:LicensePlateLocation,all""-T""link:lib""licens
// e_plate_location.m""plate_location_kelnel.m""minboundrect.m""rgb2hsi.m""recti
// fy.m""detection_color.m""-d""LicensePlateLocation_C"
//

#ifndef __LicensePlateLocation_h
#define __LicensePlateLocation_h 1

#if defined(__cplusplus) && !defined(mclmcrrt_h) && defined(__linux__)
#  pragma implementation "mclmcrrt.h"
#endif
#include "mclmcrrt.h"
#include "mclcppclass.h"
#ifdef __cplusplus
extern "C" {
#endif

/* This symbol is defined in shared libraries. Define it here
 * (to nothing) in case this isn't a shared library. 
 */
#ifndef LIB_LicensePlateLocation_C_API 
#define LIB_LicensePlateLocation_C_API /* No special import/export declaration */
#endif

/* GENERAL LIBRARY FUNCTIONS -- START */

extern LIB_LicensePlateLocation_C_API 
bool MW_CALL_CONV LicensePlateLocationInitializeWithHandlers(
       mclOutputHandlerFcn error_handler, 
       mclOutputHandlerFcn print_handler);

extern LIB_LicensePlateLocation_C_API 
bool MW_CALL_CONV LicensePlateLocationInitialize(void);

extern LIB_LicensePlateLocation_C_API 
void MW_CALL_CONV LicensePlateLocationTerminate(void);

extern LIB_LicensePlateLocation_C_API 
void MW_CALL_CONV LicensePlateLocationPrintStackTrace(void);

/* GENERAL LIBRARY FUNCTIONS -- END */

/* C INTERFACE -- MLX WRAPPERS FOR USER-DEFINED MATLAB FUNCTIONS -- START */

extern LIB_LicensePlateLocation_C_API 
bool MW_CALL_CONV mlxLicense_plate_location(int nlhs, mxArray *plhs[], int nrhs, mxArray 
                                            *prhs[]);

extern LIB_LicensePlateLocation_C_API 
bool MW_CALL_CONV mlxPlate_location_kelnel(int nlhs, mxArray *plhs[], int nrhs, mxArray 
                                           *prhs[]);

extern LIB_LicensePlateLocation_C_API 
bool MW_CALL_CONV mlxMinboundrect(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[]);

extern LIB_LicensePlateLocation_C_API 
bool MW_CALL_CONV mlxRgb2hsi(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[]);

extern LIB_LicensePlateLocation_C_API 
bool MW_CALL_CONV mlxRectify(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[]);

extern LIB_LicensePlateLocation_C_API 
bool MW_CALL_CONV mlxDetection_color(int nlhs, mxArray *plhs[], int nrhs, mxArray 
                                     *prhs[]);

/* C INTERFACE -- MLX WRAPPERS FOR USER-DEFINED MATLAB FUNCTIONS -- END */

#ifdef __cplusplus
}
#endif


/* C++ INTERFACE -- WRAPPERS FOR USER-DEFINED MATLAB FUNCTIONS -- START */

#ifdef __cplusplus

/* On Windows, use __declspec to control the exported API */
#if defined(_MSC_VER) || defined(__MINGW64__)

#ifdef EXPORTING_LicensePlateLocation
#define PUBLIC_LicensePlateLocation_CPP_API __declspec(dllexport)
#else
#define PUBLIC_LicensePlateLocation_CPP_API __declspec(dllimport)
#endif

#define LIB_LicensePlateLocation_CPP_API PUBLIC_LicensePlateLocation_CPP_API

#else

#if !defined(LIB_LicensePlateLocation_CPP_API)
#if defined(LIB_LicensePlateLocation_C_API)
#define LIB_LicensePlateLocation_CPP_API LIB_LicensePlateLocation_C_API
#else
#define LIB_LicensePlateLocation_CPP_API /* empty! */ 
#endif
#endif

#endif

extern LIB_LicensePlateLocation_CPP_API void MW_CALL_CONV license_plate_location(int nargout, mwArray& status_code, const mwArray& detect_folder, const mwArray& suffix, const mwArray& output_folder);

extern LIB_LicensePlateLocation_CPP_API void MW_CALL_CONV plate_location_kelnel(int nargout, mwArray& img_out, mwArray& cnt, mwArray& p_morphology, mwArray& p_color, const mwArray& image_path);

extern LIB_LicensePlateLocation_CPP_API void MW_CALL_CONV minboundrect(int nargout, mwArray& rectx, mwArray& recty, mwArray& area, mwArray& perimeter, const mwArray& x, const mwArray& y, const mwArray& metric);

extern LIB_LicensePlateLocation_CPP_API void MW_CALL_CONV rgb2hsi(int nargout, mwArray& hsi, const mwArray& rgb);

extern LIB_LicensePlateLocation_CPP_API void MW_CALL_CONV rectify(int nargout, mwArray& I4, const mwArray& img);

extern LIB_LicensePlateLocation_CPP_API void MW_CALL_CONV detection_color(int nargout, mwArray& pass, const mwArray& img);

/* C++ INTERFACE -- WRAPPERS FOR USER-DEFINED MATLAB FUNCTIONS -- END */
#endif

#endif
