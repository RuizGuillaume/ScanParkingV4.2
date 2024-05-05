#include "reconnaissanceplaque.h"

// Initialize the library using United States-style license plates.
// You can use other countries/regions as well (for example: "eu", "au", or "kr").

ReconnaissancePlaque::ReconnaissancePlaque() :openalpr("eu", "~/openalpr/src/build/config/openalpr.conf")
{

	// Optionally, you can specify the top N possible plates to return (with confidences). The default is ten.
	openalpr.setTopN(1);

	// Optionally, you can provide the library with a region for pattern matching. This improves accuracy by
	// comparing the plate text with the regional pattern.
	openalpr.setDefaultRegion("fr");

	// Make sure the library loads before continuing.
	// For example, it could fail if the config/runtime_data is not found.

}

ReconnaissancePlaque::~ReconnaissancePlaque()
{
	
}

bool ReconnaissancePlaque::errorCheck()
{
	if (openalpr.isLoaded() == false) 
	{
		std::cerr << "Error loading OpenALPR" << std::endl;
		return 1;
	}
}


std::string ReconnaissancePlaque::scanPlaque(std::string image)
{
	std::cout << "Analyse de l'image" << std::endl;
	// Recognize an image file. Alternatively, you could provide the image bytes in-memory.
	alpr::AlprResults results = openalpr.recognize(image);

	if (results.plates.size() == 0)
	{
        return "Plaque non lisible";
	}
	
	alpr::AlprPlateResult plate = results.plates[0]; //ERREUR DE SEGMENTATION

	alpr::AlprPlate candidate = plate.bestPlate;
	numeroPlaque = candidate.characters;
	
	for(unsigned int i = 0; i < numeroPlaque.size();)
	{
		if (numeroPlaque[i] == 'O')numeroPlaque[i] = '0';
		if (numeroPlaque[i] == 'U')numeroPlaque[i] = 'V';
		if (numeroPlaque[i] == 'I')numeroPlaque[i] = '1';
		i++;
	}
	
	std::cout << "Numero de plaque : " << numeroPlaque << std::endl;

    return numeroPlaque;
}

