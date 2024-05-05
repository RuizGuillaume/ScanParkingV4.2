#include "camera.h"

Camera::Camera()
{
    //set camera parameters
    m_camera.set(CV_CAP_PROP_FORMAT, CV_8UC1); //Format of the Mat objects returned by retrieve()

	nbImage = 7;

}

Camera::~Camera()
{
	
}

bool Camera::errorCheck()
{
	//Check if camera is opened
    if (!m_camera.open())
	{
		std::cerr << "Error opening the camera" << std::endl;
		return 1;
	}
}

void Camera::prendrePhoto()
{	
	std::cout << "Prise de la photo" << std::endl;

	int nbImage = 7;

	for ( int i=0; i<nbImage; i++) 
	{
		m_camera.grab();			// Grabs the next frame from capturing device
		m_camera.retrieve(image);	// Save the grabbed frame
    }
	

    cv::imwrite("/home/pi/imagePlaque.jpg",image);
}


cv::Mat Camera::getImage()
{
	return image;
}

void Camera::release()
{
	m_camera.release();			// Close capturing device
}
