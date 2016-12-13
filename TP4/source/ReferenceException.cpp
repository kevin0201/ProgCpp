/*
 * ReferenceException.cpp
 *
 *  Created on: 2016-04-15
 *      Author: etudiant
 */
#include <sstream>

#include "ReferenceException.h"
using namespace std;


ReferenceException::ReferenceException(const std::string& p_raison) : runtime_error(p_raison){
}


ReferenceDejaPresenteException::ReferenceDejaPresenteException(const std::string& p_raison) : ReferenceException(p_raison)
{

}

ReferenceAbsenteException::ReferenceAbsenteException(const std::string& p_raison) : ReferenceException(p_raison)
{

}
