#include "pch.h"
#include "CLmapTB.h"

System::String^ NS_Comp_Mappage::CLmapTB::Select(void)
{
	return "SELECT id, lastname, firstname, adress, zipcode, city FROM CUSTOMERS INNER JOIN ADRESSES ON ADRESSES.customer_id = CUSTOMERS.id";
}
System::String^ NS_Comp_Mappage::CLmapTB::Insert(void)
{
	return "INSERT INTO CUSTOMERS (lastname, firstname) VALUES('" + this->nom + "','" + this->prenom + "');" + "INSERT INTO ADRESSES (customer_id, adress, zipcode, city) VALUES(@@IDENTITY,'" + this->adresse + "','" + this->codepostal + "','" + this->ville + "');";
}
System::String^ NS_Comp_Mappage::CLmapTB::InsertAdress(void)
{
	return "INSERT INTO ADRESSES (customer_id, adress, zipcode, city) VALUES('" + this->Id.ToString() + "','" + this->adresse + "','" + this->codepostal + "','" + this->ville + "');";
}
System::String^ NS_Comp_Mappage::CLmapTB::Delete(void)
{
	return "DELETE FROM ADRESSES WHERE customer_id = " + this->Id + ";DELETE FROM CUSTOMERS WHERE id = " + this->Id;
}
System::String^ NS_Comp_Mappage::CLmapTB::Update(void)
{
	return "UPDATE CUSTOMERS SET lastname = '" + this->nom + "', firstname = '" + this->prenom + "' WHERE id = " + this->Id.ToString();
}
void NS_Comp_Mappage::CLmapTB::setId(int Id)
{
	this->Id = Id;
}
void NS_Comp_Mappage::CLmapTB::setNom(System::String^ nom)
{
	this->nom = nom;
}
void NS_Comp_Mappage::CLmapTB::setPrenom(System::String^ prenom)
{
	this->prenom = prenom;
}
void NS_Comp_Mappage::CLmapTB::setAdresse(System::String^ adresse)
{
	this->adresse = adresse;
}
void NS_Comp_Mappage::CLmapTB::setCodepostal(System::String^ codepostal)
{
	this->codepostal = codepostal;
}
void NS_Comp_Mappage::CLmapTB::setVille(System::String^ ville)
{
	this->ville = ville;
}
int NS_Comp_Mappage::CLmapTB::getId(void) { return this->Id; }
System::String^ NS_Comp_Mappage::CLmapTB::getNom(void) { return this->nom; }
System::String^ NS_Comp_Mappage::CLmapTB::getPrenom(void) { return this->prenom; }
System::String^ NS_Comp_Mappage::CLmapTB::getAdresse(void) { return this->adresse; }
System::String^ NS_Comp_Mappage::CLmapTB::getCodepostal(void) { return this->codepostal; }
System::String^ NS_Comp_Mappage::CLmapTB::getVille(void) { return this->ville; }