//---------------------------------------------------------------------------

#ifndef UCalculadoraH
#define UCalculadoraH
//---------------------------------------------------------------------------
class Calculadora
{
	private:
	 float operandoUm;
	 float operandoDois;
	public:
	 void SetOperandoUm(const float operandoUm);
	 void SetOPerandoDois(const float operandoDois);
	 float GetOperandoUm();
	 float GetOperandoDois();
	 float Some();
	 float Subtraia();
	 float Multiplique();
     float Divida();

};
#endif
