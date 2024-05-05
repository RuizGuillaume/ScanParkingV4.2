#pragma once
#include <alpr.h>
#include <iostream>
#include <string>
#include <opencv2/opencv.hpp>



class ReconnaissancePlaque
{
private:

	std::string numeroPlaque;
	alpr::Alpr openalpr;
	alpr::AlprPlateResult plate;
	alpr::AlprPlate candidate;
	alpr::AlprResults results;

public:

	ReconnaissancePlaque();
	~ReconnaissancePlaque();
	bool errorCheck();
    std::string scanPlaque(std::string image);
	
};
