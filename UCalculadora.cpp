//---------------------------------------------------------------------------

#pragma hdrstop

#include "UCalculadora.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

 void Calculadora::SetOperandoUm(const float operandoUm)
	{
	   this->operandoUm = operandoUm;
	}
 void Calculadora::SetOPerandoDois(const float operandoDois)
	{
	  this->operandoDois = operandoDois;
	}
 float Calculadora::GetOperandoUm()
	{
	  return this->operandoUm;
	}
 float Calculadora::GetOperandoDois()
	{
      return this->operandoDois;
	}
 float Calculadora::Some()
	{
	 return this-> operandoUm + this->operandoDois;
	}
 float Calculadora::Subtraia()
	{
	 return this-> operandoUm - this->operandoDois;
	}
 float Calculadora::Multiplique()
	{
	 return this->operandoUm * this->operandoDois;
	}
 float Calculadora::Divida()
	{
	 return this->operandoUm / this->operandoDois;
	}