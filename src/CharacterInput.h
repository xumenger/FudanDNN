#pragma once
#include "utils.h"
#include "CharacterSample.h"
#include <string>
#include "map"
#include "AbstractMatrix.h"
#include "XMLDataParser.h"
#include "Input.h"

using namespace std;

class CharacterInput : public Input
{
public:
	CharacterInput(string xmlFile, int id, int dimension);
	shared_ptr<Sample> getNextSample() override;
	~CharacterInput();

private:
	map<string, vector<double>> lookupTable;
	map<string, shared_ptr<AbstractMatrix>> tagTable;
	size_t dimension;
};
