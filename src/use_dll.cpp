#include <string>
#include "LicensePlateLocation.h"
#include "use_dll.h"

int use_dll()
{
    //mclmcrInitialize();
    //if (!mclmcrInitializeApplication(NULL, 0))
    //{
    //	std::cout << "Could not initialize the application" << std::endl;
    //	return -1;
    //}

    if (!LicensePlateLocationInitialize())
    {
        std::cout << "Could not initialize the LicensePlateLocation" << std::endl;
        return -1;
    }
    //初始化可以鉴定Matlab外部调用环境设置是否正确
    std::cout << "cpp call matlab dll" << std::endl;

    char detect_folder[] = "../../../data/test_dataset/plate_set1/";

    char output_folder[] = "../../../data/test_dataset/detect_result/";
    char suffix[] = "*.jpg";

    mwArray detect_folder_array(detect_folder);
    mwArray output_folder_array(output_folder);
    mwArray suffix_array(suffix);
    mwArray status_code(output_folder);
    license_plate_location(1, status_code, detect_folder, suffix, output_folder);
    std::cout << "license plate location return status code is:" << status_code << std::endl;
    return status_code;
}