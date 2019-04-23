#ifndef _ALUNO_H_
#define _ALUNO_H_
#include "pessoa.h"

class Aluno : public  Pessoa{
	private:
		float media;

	public:
		void setMedia(float media_);
		void setNome(string nome_);
		float getMedia();
		string getNome();
};

#endif