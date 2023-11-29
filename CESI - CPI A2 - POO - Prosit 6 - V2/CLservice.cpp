#include "pch.h"
#include "CLservice.h"

NS_Comp_Svc::CLservices::CLservices(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMappTB = gcnew NS_Comp_Mappage::CLmapTB();
}
System::Data::DataSet^ NS_Comp_Svc::CLservices::selectionnerToutesLesPersonnes(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappTB->Select();
	return this->oCad->getRows(sql, dataTableName);
}
void NS_Comp_Svc::CLservices::ajouterUnePersonne(System::String^ id, System::String^ nom, System::String^ prenom, System::String^ adresse, System::String^ codepostal, System::String^ ville)
{
	System::String^ sql;

	int Tid;

	if (id == "") {
		Tid = 0;
	}
	else {
		Tid = System::Convert::ToInt32(id);
	}

	this->oMappTB->setId(Tid);
	this->oMappTB->setAdresse(adresse);
	this->oMappTB->setCodepostal(codepostal);
	this->oMappTB->setVille(ville);
	this->oMappTB->setNom(nom);
	this->oMappTB->setPrenom(prenom);
	if (Tid == 0) {
		sql = this->oMappTB->Insert();
	}
	else {
		sql = this->oMappTB->InsertAdress();
	}

	this->oCad->actionRows(sql);
}
void NS_Comp_Svc::CLservices::modifierUnePersonne(System::String^ id, System::String^ nom, System::String^ prenom, System::String^ adresse, System::String^ codepostal, System::String^ ville)
{
	System::String^ sql;

	this->oMappTB->setNom(nom);
	this->oMappTB->setPrenom(prenom);
	this->oMappTB->setAdresse(adresse);
	this->oMappTB->setCodepostal(codepostal);
	this->oMappTB->setVille(ville);
	this->oMappTB->setId(System::Convert::ToInt32(id));
	sql = this->oMappTB->Update();

	this->oCad->actionRows(sql);
}
void NS_Comp_Svc::CLservices::supprimerUnePersonne(System::String^ id)
{
	System::String^ sql;

	this->oMappTB->setId(System::Convert::ToInt32(id));
	sql = this->oMappTB->Delete();

	this->oCad->actionRows(sql);
}