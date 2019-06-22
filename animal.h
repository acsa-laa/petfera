#ifndef ANIMAL_H
#define ANIMAL_H

class Animal{
	private:
		int id;
		double tamanho;
		string classe;
		string nome_cientifico;
		string nome_batismo;
		string dieta;
		char sexo;
		bool ameacadoExtincao;
		Veterinario veterinario;
		Tratador tratador;	
	public:
		Animal(Veterinario veterinario, Tratador tratador, int id = 0, string classe = "", string nome_cientifico = "", char sexo = '', double tamanho = 0, string dieta = "", string nome_batismo = "");
		~Animal();
		virtual void consultar_animal() = 0;
		void setId(int id);
		int getId();
		void setClasse(string classe);
		string getClasse();
		void setNome_cientifico(string nome_cientifico);
		string getNome_cientifico();
		void setSexo(char sexo);
		char getSexo();
		void setTamanho(double tamanho);
		double getTamanho();
		void setDieta(string dieta);
		string getDieta();
		void setVeterinario(VETERINARIO veterinario);
		Veterinario getVeterinario();
		void setTratador(TRATADOR tratador);
		Tratador getTratador();
		void setNome_batismo(string nome_batismo);
		
};

#endif
