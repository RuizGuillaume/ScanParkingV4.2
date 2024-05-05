#pragma once
#include <iostream>
#include <raspicam/raspicam_cv.h>

class Camera
{
private:

	int nbImage; 

	raspicam::RaspiCam_Cv m_camera;
    cv::Mat image;

public:
	Camera();
	~Camera();
	bool errorCheck();
	void prendrePhoto();
	cv::Mat getImage();
	void release();
};
