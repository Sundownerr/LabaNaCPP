#pragma once
#include "Predicate.h"
#include <iostream>
#include <string>

class Attestat
{	

private:

	int id, indx;
	bool isOk;

public:
	
	Attestat();
	~Attestat();
	
	void const getAttestatId();
	void setAttestatId();
	void getAttestatOk();
	void setAttestatOk();		
	
	
};