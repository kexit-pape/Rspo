#include "yourelectricscooter.h"
#include <Windows.h>

using namespace YES;
using namespace System::Data::OleDb;

[STAThreadAttribute]
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew yourelectricscooter());
    return 0;
}
System::Void YES::yourelectricscooter::выходExitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
}

System::Void YES::yourelectricscooter::обПрограммеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("Данная программа является своего рода помощником для администрации магазина \nкоторая занимается продажей коплектующих для электросамокатов и самих электросамокатов - Your Electric Scooter", "Об программе");

	return System::Void();
}

System::Void YES::yourelectricscooter::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=BazDan.mdb";
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	dbConnection->Open();
	String^ query = "SELECT * FROM [table_25]";
	OleDbCommand^ dbComand = gcnew OleDbCommand(query, dbConnection);
	OleDbDataReader^ dbReader = dbComand->ExecuteReader();

	if (dbReader->HasRows == false) {
		MessageBox::Show("Ошибка считывания данных", "Ошибка");
	}
	else {

		while (dbReader->Read()) {
			dataGridView1->Rows->Add(dbReader["id25"], dbReader["Brend25"], dbReader["Weight25"], dbReader["Powerreserv25"], dbReader["Driveunit25"], dbReader["Price25"]);
		}
	}


	dbReader->Close();
	dbConnection->Close();

	return System::Void();
}

System::Void YES::yourelectricscooter::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (dataGridView1->SelectedRows->Count != 1) {
		MessageBox::Show("Выберите одну строку для добавления!", "Внимание!");
		return;
	}

	int index = dataGridView1->SelectedRows[0]->Index;

	if (dataGridView1->Rows[index]->Cells[0]->Value == nullptr ||
		dataGridView1->Rows[index]->Cells[1]->Value == nullptr ||
		dataGridView1->Rows[index]->Cells[2]->Value == nullptr ||
		dataGridView1->Rows[index]->Cells[3]->Value == nullptr ||
		dataGridView1->Rows[index]->Cells[4]->Value == nullptr ||
		dataGridView1->Rows[index]->Cells[5]->Value == nullptr) {
		MessageBox::Show("Не все данные введены!", "Внимание!");
		return;
	}

	String^ id25 = dataGridView1->Rows[index]->Cells[0]->Value->ToString();
	String^ Brend25 = dataGridView1->Rows[index]->Cells[1]->Value->ToString();
	String^ Weight25 = dataGridView1->Rows[index]->Cells[2]->Value->ToString();
	String^ Powerreserv25 = dataGridView1->Rows[index]->Cells[3]->Value->ToString();
	String^ Driveunit25 = dataGridView1->Rows[index]->Cells[4]->Value->ToString();
	String^ Price25 = dataGridView1->Rows[index]->Cells[5]->Value->ToString();

	String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=BazDan.mdb";
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	dbConnection->Open();
	String^ query = "INSERT INTO [table_25] VALUES (" + id25 + ", '" + Brend25 + "', '" + Weight25 + "', '" + Powerreserv25 + "' , '" + Driveunit25 + "' , '" + Price25 + "')";
	OleDbCommand^ dbComand = gcnew OleDbCommand(query, dbConnection);

	if (dbComand->ExecuteNonQuery() != 1)
		MessageBox::Show("Ошибка выполнения запроса!", "Ошибка!");
	else
		MessageBox::Show("Данные добавлены!", "Готово!");

	dbConnection->Close();
	return System::Void();
}

System::Void YES::yourelectricscooter::button3_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (dataGridView1->SelectedRows->Count != 1) {
		MessageBox::Show("Выберите одну строку для добавления!", "Внимание!");
		return;
	}

	int index = dataGridView1->SelectedRows[0]->Index;

	if (dataGridView1->Rows[index]->Cells[0]->Value == nullptr ||
		dataGridView1->Rows[index]->Cells[1]->Value == nullptr ||
		dataGridView1->Rows[index]->Cells[2]->Value == nullptr ||
		dataGridView1->Rows[index]->Cells[3]->Value == nullptr ||
		dataGridView1->Rows[index]->Cells[4]->Value == nullptr ||
		dataGridView1->Rows[index]->Cells[5]->Value == nullptr) {
		MessageBox::Show("Не все данные введены!", "Внимание!");
		return;
	}

	String^ id25 = dataGridView1->Rows[index]->Cells[0]->Value->ToString();
	String^ Brend25 = dataGridView1->Rows[index]->Cells[1]->Value->ToString();
	String^ Weight25 = dataGridView1->Rows[index]->Cells[2]->Value->ToString();
	String^ Powerreserv25 = dataGridView1->Rows[index]->Cells[3]->Value->ToString();
	String^ Driveunit25 = dataGridView1->Rows[index]->Cells[4]->Value->ToString();
	String^ Price25 = dataGridView1->Rows[index]->Cells[5]->Value->ToString();

	String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=BazDan.mdb";
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	dbConnection->Open();
	String^ query = "UPDATE [table_25] SET  Brend25='" + Brend25 + "', Weight25 = " + Weight25 + ", Powerreserv25='" + Powerreserv25 + "',Driveunit25 = '" + Driveunit25 + "', Price25 = '" + Price25 + "' WHERE id25= " + id25;
	OleDbCommand^ dbComand = gcnew OleDbCommand(query, dbConnection);

	if (dbComand->ExecuteNonQuery() != 1)
		MessageBox::Show("Ошибка выполнения запроса!", "Ошибка!");
	else
		MessageBox::Show("Данные изменены!", "Готово!");


	dbConnection->Close();

	return System::Void();
}

System::Void YES::yourelectricscooter::button4_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (dataGridView1->SelectedRows->Count != 1) {
		MessageBox::Show("Выберите одну строку для добавления!", "Внимание!");
		return;
	}


	int index = dataGridView1->SelectedRows[0]->Index;


	if (dataGridView1->Rows[index]->Cells[0]->Value == nullptr)
	{
		MessageBox::Show("Не все данные введены!", "Внимание!");
		return;
	}


	String^ id = dataGridView1->Rows[index]->Cells[0]->Value->ToString();

	String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=BazDan.mdb";
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	String^ id25 = dataGridView1->Rows[index]->Cells[0]->Value->ToString();

	dbConnection->Open();
	String^ query = "DELETE FROM [table_25]  WHERE  id25 = " + id25;
	OleDbCommand^ dbComand = gcnew OleDbCommand(query, dbConnection);


	if (dbComand->ExecuteNonQuery() != 1)
		MessageBox::Show("Ошибка выполнения запроса!", "Ошибка!");
	else {
		MessageBox::Show("Данные удалены!", "Готово!");
		dataGridView1->Rows->RemoveAt(index);
	}


	dbConnection->Close();

	return System::Void();
}

System::Void YES::yourelectricscooter::button5_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=BazDan.mdb";
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	dbConnection->Open();
	String^ query = "SELECT * FROM [table_50]";
	OleDbCommand^ dbComand = gcnew OleDbCommand(query, dbConnection);
	OleDbDataReader^ dbReader = dbComand->ExecuteReader();

	if (dbReader->HasRows == false) {
		MessageBox::Show("Ошибка считывания данных", "Ошибка");
	}
	else {

		while (dbReader->Read()) {
			dataGridView2->Rows->Add(dbReader["id50"], dbReader["Brend50"], dbReader["Weight50"], dbReader["Powerreserv50"], dbReader["Driveunit50"], dbReader["Price50"]);
		}
	}


	dbReader->Close();
	dbConnection->Close();

	return System::Void();
}

System::Void YES::yourelectricscooter::button6_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (dataGridView2->SelectedRows->Count != 1) {
		MessageBox::Show("Выберите одну строку для добавления!", "Внимание!");
		return;
	}

	int index = dataGridView2->SelectedRows[0]->Index;

	if (dataGridView2->Rows[index]->Cells[0]->Value == nullptr ||
		dataGridView2->Rows[index]->Cells[1]->Value == nullptr ||
		dataGridView2->Rows[index]->Cells[2]->Value == nullptr ||
		dataGridView2->Rows[index]->Cells[3]->Value == nullptr ||
		dataGridView2->Rows[index]->Cells[4]->Value == nullptr ||
		dataGridView2->Rows[index]->Cells[5]->Value == nullptr) {
		MessageBox::Show("Не все данные введены!", "Внимание!");
		return;
	}

	String^ id50 = dataGridView2->Rows[index]->Cells[0]->Value->ToString();
	String^ Brend50 = dataGridView2->Rows[index]->Cells[1]->Value->ToString();
	String^ Weight50 = dataGridView2->Rows[index]->Cells[2]->Value->ToString();
	String^ Powerreserv50 = dataGridView2->Rows[index]->Cells[3]->Value->ToString();
	String^ Driveunit50 = dataGridView2->Rows[index]->Cells[4]->Value->ToString();
	String^ Price50 = dataGridView2->Rows[index]->Cells[5]->Value->ToString();

	String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=BazDan.mdb";
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	dbConnection->Open();
	String^ query = "INSERT INTO [table_50] VALUES (" + id50 + ", '" + Brend50 + "', '" + Weight50 + "', '" + Powerreserv50 + "' , '" + Driveunit50 + "' , '" + Price50 + "')";
	OleDbCommand^ dbComand = gcnew OleDbCommand(query, dbConnection);

	if (dbComand->ExecuteNonQuery() != 1)
		MessageBox::Show("Ошибка выполнения запроса!", "Ошибка!");
	else
		MessageBox::Show("Данные добавлены!", "Готово!");

	dbConnection->Close();

	return System::Void();
}

System::Void YES::yourelectricscooter::button7_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (dataGridView2->SelectedRows->Count != 1) {
		MessageBox::Show("Выберите одну строку для добавления!", "Внимание!");
		return;
	}

	int index = dataGridView2->SelectedRows[0]->Index;

	if (dataGridView2->Rows[index]->Cells[0]->Value == nullptr ||
		dataGridView2->Rows[index]->Cells[1]->Value == nullptr ||
		dataGridView2->Rows[index]->Cells[2]->Value == nullptr ||
		dataGridView2->Rows[index]->Cells[3]->Value == nullptr ||
		dataGridView2->Rows[index]->Cells[4]->Value == nullptr ||
		dataGridView2->Rows[index]->Cells[5]->Value == nullptr) {
		MessageBox::Show("Не все данные введены!", "Внимание!");
		return;
	}

	String^ id50 = dataGridView2->Rows[index]->Cells[0]->Value->ToString();
	String^ Brend50 = dataGridView2->Rows[index]->Cells[1]->Value->ToString();
	String^ Weight50 = dataGridView2->Rows[index]->Cells[2]->Value->ToString();
	String^ Powerreserv50 = dataGridView2->Rows[index]->Cells[3]->Value->ToString();
	String^ Driveunit50 = dataGridView2->Rows[index]->Cells[4]->Value->ToString();
	String^ Price50 = dataGridView2->Rows[index]->Cells[5]->Value->ToString();

	String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=BazDan.mdb";
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	dbConnection->Open();
	String^ query = "UPDATE [table_50] SET  Brend50='" + Brend50 + "', Weight50 = " + Weight50 + ", Powerreserv50='" + Powerreserv50 + "',Driveunit50 = '" + Driveunit50 + "', Price50 = '" + Price50 + "' WHERE id50= " + id50;
	OleDbCommand^ dbComand = gcnew OleDbCommand(query, dbConnection);

	if (dbComand->ExecuteNonQuery() != 1)
		MessageBox::Show("Ошибка выполнения запроса!", "Ошибка!");
	else
		MessageBox::Show("Данные изменены!", "Готово!");


	dbConnection->Close();

	return System::Void();
}

System::Void YES::yourelectricscooter::button8_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (dataGridView2->SelectedRows->Count != 1) {
		MessageBox::Show("Выберите одну строку для добавления!", "Внимание!");
		return;
	}


	int index = dataGridView2->SelectedRows[0]->Index;


	if (dataGridView2->Rows[index]->Cells[0]->Value == nullptr)
	{
		MessageBox::Show("Не все данные введены!", "Внимание!");
		return;
	}


	String^ id = dataGridView2->Rows[index]->Cells[0]->Value->ToString();

	String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=BazDan.mdb";
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	String^ id50 = dataGridView2->Rows[index]->Cells[0]->Value->ToString();

	dbConnection->Open();
	String^ query = "DELETE FROM [table_50] WHERE id50 = " + id50;
	OleDbCommand^ dbComand = gcnew OleDbCommand(query, dbConnection);


	if (dbComand->ExecuteNonQuery() != 1)
		MessageBox::Show("Ошибка выполнения запроса!", "Ошибка!");
	else {
		MessageBox::Show("Данные удалены!", "Готово!");
		dataGridView2->Rows->RemoveAt(index);
	}


	dbConnection->Close();

	return System::Void();
}

System::Void YES::yourelectricscooter::button9_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=BazDan.mdb";
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	dbConnection->Open();
	String^ query = "SELECT * FROM [table_kolesa]";
	OleDbCommand^ dbComand = gcnew OleDbCommand(query, dbConnection);
	OleDbDataReader^ dbReader = dbComand->ExecuteReader();

	if (dbReader->HasRows == false) {
		MessageBox::Show("Ошибка считывания данных", "Ошибка");
	}
	else {

		while (dbReader->Read())
		{
			dataGridView3->Rows->Add(dbReader["idkoles"], dbReader["Radius"], dbReader["Shir"], dbReader["highkol"], dbReader["FB"], dbReader["Pricekol"]);
		}
	}

	dbReader->Close();
	dbConnection->Close();

	return System::Void();
}

System::Void YES::yourelectricscooter::button10_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (dataGridView3->SelectedRows->Count != 1) {
		MessageBox::Show("Выберите одну строку для добавления!", "Внимание!");
		return;
	}

	int index = dataGridView3->SelectedRows[0]->Index;

	if (dataGridView3->Rows[index]->Cells[0]->Value == nullptr ||
		dataGridView3->Rows[index]->Cells[1]->Value == nullptr ||
		dataGridView3->Rows[index]->Cells[2]->Value == nullptr ||
		dataGridView3->Rows[index]->Cells[3]->Value == nullptr ||
		dataGridView3->Rows[index]->Cells[4]->Value == nullptr ||
		dataGridView3->Rows[index]->Cells[5]->Value == nullptr) {
		MessageBox::Show("Не все данные введены!", "Внимание!");
		return;
	}

	String^ idkoles = dataGridView3->Rows[index]->Cells[0]->Value->ToString();
	String^ Radius = dataGridView3->Rows[index]->Cells[1]->Value->ToString();
	String^ Shir = dataGridView3->Rows[index]->Cells[2]->Value->ToString();
	String^ highkol = dataGridView3->Rows[index]->Cells[3]->Value->ToString();
	String^ FB = dataGridView3->Rows[index]->Cells[4]->Value->ToString();
	String^ Pricekol = dataGridView3->Rows[index]->Cells[5]->Value->ToString();


	String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=BazDan.mdb";
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	dbConnection->Open();
	String^ query = "INSERT INTO [table_kolesa] VALUES (" + idkoles + ", '" + Radius + "', '" + Shir + "', '" + highkol + "' , '" + FB + "' , '" + Pricekol + "')";
	OleDbCommand^ dbComand = gcnew OleDbCommand(query, dbConnection);

	if (dbComand->ExecuteNonQuery() != 1)
		MessageBox::Show("Ошибка выполнения запроса!", "Ошибка!");
	else
		MessageBox::Show("Данные добавлены!", "Готово!");

	dbConnection->Close();

	return System::Void();
}

System::Void YES::yourelectricscooter::button11_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (dataGridView3->SelectedRows->Count != 1) {
		MessageBox::Show("Выберите одну строку для добавления!", "Внимание!");
		return;
	}

	int index = dataGridView3->SelectedRows[0]->Index;

	if (dataGridView3->Rows[index]->Cells[0]->Value == nullptr ||
		dataGridView3->Rows[index]->Cells[1]->Value == nullptr ||
		dataGridView3->Rows[index]->Cells[2]->Value == nullptr ||
		dataGridView3->Rows[index]->Cells[3]->Value == nullptr ||
		dataGridView3->Rows[index]->Cells[4]->Value == nullptr ||
		dataGridView3->Rows[index]->Cells[5]->Value == nullptr) {
		MessageBox::Show("Не все данные введены!", "Внимание!");
		return;
	}

	String^ idkoles = dataGridView3->Rows[index]->Cells[0]->Value->ToString();
	String^ Radius = dataGridView3->Rows[index]->Cells[1]->Value->ToString();
	String^ Shir = dataGridView3->Rows[index]->Cells[2]->Value->ToString();
	String^ highkol = dataGridView3->Rows[index]->Cells[3]->Value->ToString();
	String^ FB = dataGridView3->Rows[index]->Cells[4]->Value->ToString();
	String^ Pricekol = dataGridView3->Rows[index]->Cells[5]->Value->ToString();

	String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=BazDan.mdb";
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	dbConnection->Open();
	String^ query = "UPDATE [table_kolesa] SET Radius='" + Radius + "', Shir = " + Shir + ", highkol='" + highkol + "',FB = '" + FB + "', Pricekol = '" + Pricekol + "' WHERE idkoles= " + idkoles;
	OleDbCommand^ dbComand = gcnew OleDbCommand(query, dbConnection);

	if (dbComand->ExecuteNonQuery() != 1)
		MessageBox::Show("Ошибка выполнения запроса!", "Ошибка!");
	else
		MessageBox::Show("Данные изменены!", "Готово!");


	dbConnection->Close();

	return System::Void();
}

System::Void YES::yourelectricscooter::button12_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (dataGridView3->SelectedRows->Count != 1) {
		MessageBox::Show("Выберите одну строку для добавления!", "Внимание!");
		return;
	}


	int index = dataGridView3->SelectedRows[0]->Index;


	if (dataGridView3->Rows[index]->Cells[0]->Value == nullptr)
	{
		MessageBox::Show("Не все данные введены!", "Внимание!");
		return;
	}


	String^ id = dataGridView3->Rows[index]->Cells[0]->Value->ToString();

	String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=BazDan.mdb";
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	String^ idkoles = dataGridView3->Rows[index]->Cells[0]->Value->ToString();

	dbConnection->Open();
	String^ query = "DELETE FROM [table_kolesa]  WHERE  idkoles = " + idkoles;
	OleDbCommand^ dbComand = gcnew OleDbCommand(query, dbConnection);


	if (dbComand->ExecuteNonQuery() != 1)
		MessageBox::Show("Ошибка выполнения запроса!", "Ошибка!");
	else {
		MessageBox::Show("Данные удалены!", "Готово!");
		dataGridView3->Rows->RemoveAt(index);
	}


	dbConnection->Close();

	return System::Void();
}

System::Void YES::yourelectricscooter::button13_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=BazDan.mdb";
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	dbConnection->Open();
	String^ query = "SELECT * FROM [table_Tormoz]";
	OleDbCommand^ dbComand = gcnew OleDbCommand(query, dbConnection);
	OleDbDataReader^ dbReader = dbComand->ExecuteReader();

	if (dbReader->HasRows == false) {
		MessageBox::Show("Ошибка считывания данных", "Ошибка");
	}
	else {

		while (dbReader->Read()) {
			dataGridView4->Rows->Add(dbReader["idTormoz"], dbReader["NameTormoz"], dbReader["Peredzad"], dbReader["Dlintros"], dbReader["Diskbarab"], dbReader["PriceTormoz"]);
		}
	}


	dbReader->Close();
	dbConnection->Close();

	return System::Void();
}

System::Void YES::yourelectricscooter::button14_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (dataGridView4->SelectedRows->Count != 1) {
		MessageBox::Show("Выберите одну строку для добавления!", "Внимание!");
		return;
	}

	int index = dataGridView4->SelectedRows[0]->Index;

	if (dataGridView4->Rows[index]->Cells[0]->Value == nullptr ||
		dataGridView4->Rows[index]->Cells[1]->Value == nullptr ||
		dataGridView4->Rows[index]->Cells[2]->Value == nullptr ||
		dataGridView4->Rows[index]->Cells[3]->Value == nullptr ||
		dataGridView4->Rows[index]->Cells[4]->Value == nullptr ||
		dataGridView4->Rows[index]->Cells[5]->Value == nullptr) {
		MessageBox::Show("Не все данные введены!", "Внимание!");
		return;
	}

	String^ idTormoz = dataGridView4->Rows[index]->Cells[0]->Value->ToString();
	String^ NameTormoz = dataGridView4->Rows[index]->Cells[1]->Value->ToString();
	String^ Peredzad = dataGridView4->Rows[index]->Cells[2]->Value->ToString();
	String^ Dlintros = dataGridView4->Rows[index]->Cells[3]->Value->ToString();
	String^ Diskbarab = dataGridView4->Rows[index]->Cells[4]->Value->ToString();
	String^ PriceTormoz = dataGridView4->Rows[index]->Cells[5]->Value->ToString();

	String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=BazDan.mdb";
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	dbConnection->Open();
	String^ query = "INSERT INTO [table_Tormoz] VALUES (" + idTormoz + ", '" + NameTormoz + "', '" + Peredzad + "', '" + Dlintros + "' , '" + Diskbarab + "' , '" + PriceTormoz + "')";
	OleDbCommand^ dbComand = gcnew OleDbCommand(query, dbConnection);

	if (dbComand->ExecuteNonQuery() != 1)
		MessageBox::Show("Ошибка выполнения запроса!", "Ошибка!");
	else
		MessageBox::Show("Данные добавлены!", "Готово!");

	dbConnection->Close();

	return System::Void();
}

System::Void YES::yourelectricscooter::button15_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (dataGridView4->SelectedRows->Count != 1) {
		MessageBox::Show("Выберите одну строку для добавления!", "Внимание!");
		return;
	}

	int index = dataGridView4->SelectedRows[0]->Index;

	if (dataGridView4->Rows[index]->Cells[0]->Value == nullptr ||
		dataGridView4->Rows[index]->Cells[1]->Value == nullptr ||
		dataGridView4->Rows[index]->Cells[2]->Value == nullptr ||
		dataGridView4->Rows[index]->Cells[3]->Value == nullptr ||
		dataGridView4->Rows[index]->Cells[4]->Value == nullptr ||
		dataGridView4->Rows[index]->Cells[5]->Value == nullptr) {
		MessageBox::Show("Не все данные введены!", "Внимание!");
		return;
	}

	String^ idTormoz = dataGridView4->Rows[index]->Cells[0]->Value->ToString();
	String^ NameTormoz = dataGridView4->Rows[index]->Cells[1]->Value->ToString();
	String^ Peredzad = dataGridView4->Rows[index]->Cells[2]->Value->ToString();
	String^ Dlintros = dataGridView4->Rows[index]->Cells[3]->Value->ToString();
	String^ Diskbarab = dataGridView4->Rows[index]->Cells[4]->Value->ToString();
	String^ PriceTormoz = dataGridView4->Rows[index]->Cells[5]->Value->ToString();

	String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=BazDan.mdb";
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	dbConnection->Open();
	String^ query = "UPDATE [table_Tormoz] SET   NNameTormoz='" + NameTormoz + "',Peredzad = " + Peredzad + ", Dlintros='" + Dlintros + "',Diskbarab = '" + Diskbarab + "', PriceTormoz = '" + PriceTormoz + "' WHERE idTormoz = " + idTormoz;
	OleDbCommand^ dbComand = gcnew OleDbCommand(query, dbConnection);

	if (dbComand->ExecuteNonQuery() != 1)
		MessageBox::Show("Ошибка выполнения запроса!", "Ошибка!");
	else
		MessageBox::Show("Данные изменены!", "Готово!");


	dbConnection->Close();

	return System::Void();
}

System::Void YES::yourelectricscooter::button16_Click(System::Object^ sender, System::EventArgs^ e)
{

	if (dataGridView4->SelectedRows->Count != 1) {
		MessageBox::Show("Выберите одну строку для добавления!", "Внимание!");
		return;
	}


	int index = dataGridView4->SelectedRows[0]->Index;


	if (dataGridView4->Rows[index]->Cells[0]->Value == nullptr)
	{
		MessageBox::Show("Не все данные введены!", "Внимание!");
		return;
	}


	String^ id = dataGridView4->Rows[index]->Cells[0]->Value->ToString();

	String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=BazDan.mdb";
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	String^ idTormoz = dataGridView4->Rows[index]->Cells[0]->Value->ToString();

	dbConnection->Open();
	String^ query = "DELETE FROM [table_Tormoz]  WHERE idTormoz = " + idTormoz;
	OleDbCommand^ dbComand = gcnew OleDbCommand(query, dbConnection);


	if (dbComand->ExecuteNonQuery() != 1)
		MessageBox::Show("Ошибка выполнения запроса!", "Ошибка!");
	else {
		MessageBox::Show("Данные удалены!", "Готово!");
		dataGridView4->Rows->RemoveAt(index);
	}


	dbConnection->Close();
	return System::Void();
}

System::Void YES::yourelectricscooter::button17_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=BazDan.mdb";
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	dbConnection->Open();
	String^ query = "SELECT * FROM [table_Gaz]";
	OleDbCommand^ dbComand = gcnew OleDbCommand(query, dbConnection);
	OleDbDataReader^ dbReader = dbComand->ExecuteReader();

	if (dbReader->HasRows == false) {
		MessageBox::Show("Ошибка считывания данных", "Ошибка");
	}
	else {

		while (dbReader->Read()) {
			dataGridView5->Rows->Add(dbReader["idGaz"], dbReader["NameGaz"], dbReader["MonitorGaz"], dbReader["KeyGaz"], dbReader["Kurruk"], dbReader["PriceGaz"]);
		}
	}


	dbReader->Close();
	dbConnection->Close();

	return System::Void();
}

System::Void YES::yourelectricscooter::button18_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (dataGridView5->SelectedRows->Count != 1) {
		MessageBox::Show("Выберите одну строку для добавления!", "Внимание!");
		return;
	}

	int index = dataGridView5->SelectedRows[0]->Index;

	if (dataGridView5->Rows[index]->Cells[0]->Value == nullptr ||
		dataGridView5->Rows[index]->Cells[1]->Value == nullptr ||
		dataGridView5->Rows[index]->Cells[2]->Value == nullptr ||
		dataGridView5->Rows[index]->Cells[3]->Value == nullptr ||
		dataGridView5->Rows[index]->Cells[4]->Value == nullptr ||
		dataGridView5->Rows[index]->Cells[5]->Value == nullptr) {
		MessageBox::Show("Не все данные введены!", "Внимание!");
		return;
	}

	String^ idGaz = dataGridView5->Rows[index]->Cells[0]->Value->ToString();
	String^ NameGaz = dataGridView5->Rows[index]->Cells[1]->Value->ToString();
	String^ MonitorGaz = dataGridView5->Rows[index]->Cells[2]->Value->ToString();
	String^ KeyGaz = dataGridView5->Rows[index]->Cells[3]->Value->ToString();
	String^ Kurruk = dataGridView5->Rows[index]->Cells[4]->Value->ToString();
	String^ PriceGaz = dataGridView5->Rows[index]->Cells[5]->Value->ToString();

	String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=BazDan.mdb";
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	dbConnection->Open();
	String^ query = "INSERT INTO [table_Gaz] VALUES (" + idGaz + ", '" + NameGaz + "', '" + MonitorGaz + "', '" + KeyGaz + "' , '" + Kurruk + "' , '" + PriceGaz + "')";
	OleDbCommand^ dbComand = gcnew OleDbCommand(query, dbConnection);

	if (dbComand->ExecuteNonQuery() != 1)
		MessageBox::Show("Ошибка выполнения запроса!", "Ошибка!");
	else
		MessageBox::Show("Данные добавлены!", "Готово!");

	dbConnection->Close();

	return System::Void();
}

System::Void YES::yourelectricscooter::button19_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (dataGridView5->SelectedRows->Count != 1) {
		MessageBox::Show("Выберите одну строку для добавления!", "Внимание!");
		return;
	}

	int index = dataGridView5->SelectedRows[0]->Index;

	if (dataGridView5->Rows[index]->Cells[0]->Value == nullptr ||
		dataGridView5->Rows[index]->Cells[1]->Value == nullptr ||
		dataGridView5->Rows[index]->Cells[2]->Value == nullptr ||
		dataGridView5->Rows[index]->Cells[3]->Value == nullptr ||
		dataGridView5->Rows[index]->Cells[4]->Value == nullptr ||
		dataGridView5->Rows[index]->Cells[5]->Value == nullptr) {
		MessageBox::Show("Не все данные введены!", "Внимание!");
		return;
	}

	String^ idGaz = dataGridView5->Rows[index]->Cells[0]->Value->ToString();
	String^ NameGaz = dataGridView5->Rows[index]->Cells[1]->Value->ToString();
	String^ MonitorGaz = dataGridView5->Rows[index]->Cells[2]->Value->ToString();
	String^ KeyGaz = dataGridView5->Rows[index]->Cells[3]->Value->ToString();
	String^ Kurruk = dataGridView5->Rows[index]->Cells[4]->Value->ToString();
	String^ PriceGaz = dataGridView5->Rows[index]->Cells[5]->Value->ToString();

	String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=BazDan.mdb";
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	dbConnection->Open();
	String^ query = "UPDATE [table_Gaz] SET  NameGaz='" + NameGaz + "',  MonitorGaz = " + MonitorGaz + ", KeyGaz ='" + KeyGaz + "',Kurruk = '" + Kurruk + "',PriceGaz = '" + PriceGaz + "' WHERE idGaz = " + idGaz;
	OleDbCommand^ dbComand = gcnew OleDbCommand(query, dbConnection);

	if (dbComand->ExecuteNonQuery() != 1)
		MessageBox::Show("Ошибка выполнения запроса!", "Ошибка!");
	else
		MessageBox::Show("Данные изменены!", "Готово!");


	dbConnection->Close();

	return System::Void();
}

System::Void YES::yourelectricscooter::button20_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (dataGridView5->SelectedRows->Count != 1) {
		MessageBox::Show("Выберите одну строку для добавления!", "Внимание!");
		return;
	}


	int index = dataGridView5->SelectedRows[0]->Index;


	if (dataGridView5->Rows[index]->Cells[0]->Value == nullptr)
	{
		MessageBox::Show("Не все данные введены!", "Внимание!");
		return;
	}


	String^ id = dataGridView5->Rows[index]->Cells[0]->Value->ToString();

	String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=BazDan.mdb";
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	String^ idGaz = dataGridView5->Rows[index]->Cells[0]->Value->ToString();

	dbConnection->Open();
	String^ query = "DELETE FROM [table_Gaz] WHERE idGaz = " + idGaz;
	OleDbCommand^ dbComand = gcnew OleDbCommand(query, dbConnection);


	if (dbComand->ExecuteNonQuery() != 1)
		MessageBox::Show("Ошибка выполнения запроса!", "Ошибка!");
	else {
		MessageBox::Show("Данные удалены!", "Готово!");
		dataGridView5->Rows->RemoveAt(index);
	}


	dbConnection->Close();

	return System::Void();
}

System::Void YES::yourelectricscooter::button21_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=BazDan.mdb";
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	dbConnection->Open();
	String^ query = "SELECT * FROM [table_75]";
	OleDbCommand^ dbComand = gcnew OleDbCommand(query, dbConnection);
	OleDbDataReader^ dbReader = dbComand->ExecuteReader();

	if (dbReader->HasRows == false) {
		MessageBox::Show("Ошибка считывания данных", "Ошибка");
	}
	else {

		while (dbReader->Read()) {
			dataGridView6->Rows->Add(dbReader["id75"], dbReader["Brend75"], dbReader["Weight75"], dbReader["Powerreserv75"], dbReader["Driveunit75"], dbReader["Price75"]);
		}
	}


	dbReader->Close();
	dbConnection->Close();

	return System::Void();
}

System::Void YES::yourelectricscooter::button22_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (dataGridView6->SelectedRows->Count != 1) {
		MessageBox::Show("Выберите одну строку для добавления!", "Внимание!");
		return;
	}

	int index = dataGridView6->SelectedRows[0]->Index;

	if (dataGridView6->Rows[index]->Cells[0]->Value == nullptr ||
		dataGridView6->Rows[index]->Cells[1]->Value == nullptr ||
		dataGridView6->Rows[index]->Cells[2]->Value == nullptr ||
		dataGridView6->Rows[index]->Cells[3]->Value == nullptr ||
		dataGridView6->Rows[index]->Cells[4]->Value == nullptr ||
		dataGridView6->Rows[index]->Cells[5]->Value == nullptr) {
		MessageBox::Show("Не все данные введены!", "Внимание!");
		return;
	}

	String^ id75 = dataGridView6->Rows[index]->Cells[0]->Value->ToString();
	String^ Brend75 = dataGridView6->Rows[index]->Cells[1]->Value->ToString();
	String^ Weight75 = dataGridView6->Rows[index]->Cells[2]->Value->ToString();
	String^ Powerreserv75 = dataGridView6->Rows[index]->Cells[3]->Value->ToString();
	String^ Driveunit75 = dataGridView6->Rows[index]->Cells[4]->Value->ToString();
	String^ Price75 = dataGridView6->Rows[index]->Cells[5]->Value->ToString();

	String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=BazDan.mdb";
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	dbConnection->Open();
	String^ query = "INSERT INTO [table_75] VALUES (" + id75 + ", '" + Brend75 + "', '" + Weight75 + "', '" + Powerreserv75 + "' , '" + Driveunit75 + "' , '" + Price75 + "')";
	OleDbCommand^ dbComand = gcnew OleDbCommand(query, dbConnection);

	if (dbComand->ExecuteNonQuery() != 1)
		MessageBox::Show("Ошибка выполнения запроса!", "Ошибка!");
	else
		MessageBox::Show("Данные добавлены!", "Готово!");

	dbConnection->Close();

	return System::Void();
}

System::Void YES::yourelectricscooter::button23_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (dataGridView6->SelectedRows->Count != 1) {
		MessageBox::Show("Выберите одну строку для добавления!", "Внимание!");
		return;
	}

	int index = dataGridView6->SelectedRows[0]->Index;

	if (dataGridView6->Rows[index]->Cells[0]->Value == nullptr ||
		dataGridView6->Rows[index]->Cells[1]->Value == nullptr ||
		dataGridView6->Rows[index]->Cells[2]->Value == nullptr ||
		dataGridView6->Rows[index]->Cells[3]->Value == nullptr ||
		dataGridView6->Rows[index]->Cells[4]->Value == nullptr ||
		dataGridView6->Rows[index]->Cells[5]->Value == nullptr) {
		MessageBox::Show("Не все данные введены!", "Внимание!");
		return;
	}

	String^ id75 = dataGridView6->Rows[index]->Cells[0]->Value->ToString();
	String^ Brend75 = dataGridView6->Rows[index]->Cells[1]->Value->ToString();
	String^ Weight75 = dataGridView6->Rows[index]->Cells[2]->Value->ToString();
	String^ Powerreserv75 = dataGridView6->Rows[index]->Cells[3]->Value->ToString();
	String^ Driveunit75 = dataGridView6->Rows[index]->Cells[4]->Value->ToString();
	String^ Price75 = dataGridView6->Rows[index]->Cells[5]->Value->ToString();

	String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=BazDan.mdb";
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	dbConnection->Open();
	String^ query = "UPDATE [table_75] SET Brend75='" + Brend75 + "', Weight75 = " + Weight75 + ", Powerreserv75='" + Powerreserv75 + "',Driveunit75 = '" + Driveunit75 + "', Price75 = '" + Price75 + "' WHERE id75= " + id75;
	OleDbCommand^ dbComand = gcnew OleDbCommand(query, dbConnection);

	if (dbComand->ExecuteNonQuery() != 1)
		MessageBox::Show("Ошибка выполнения запроса!", "Ошибка!");
	else
		MessageBox::Show("Данные изменены!", "Готово!");


	dbConnection->Close();

	return System::Void();
}

System::Void YES::yourelectricscooter::button24_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (dataGridView6->SelectedRows->Count != 1) {
		MessageBox::Show("Выберите одну строку для добавления!", "Внимание!");
		return;
	}


	int index = dataGridView6->SelectedRows[0]->Index;


	if (dataGridView6->Rows[index]->Cells[0]->Value == nullptr)
	{
		MessageBox::Show("Не все данные введены!", "Внимание!");
		return;
	}


	String^ id = dataGridView6->Rows[index]->Cells[0]->Value->ToString();

	String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=BazDan.mdb";
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	String^ id75 = dataGridView6->Rows[index]->Cells[0]->Value->ToString();

	dbConnection->Open();
	String^ query = "DELETE FROM [table_75] WHERE id75 = " + id75;
	OleDbCommand^ dbComand = gcnew OleDbCommand(query, dbConnection);


	if (dbComand->ExecuteNonQuery() != 1)
		MessageBox::Show("Ошибка выполнения запроса!", "Ошибка!");
	else {
		MessageBox::Show("Данные удалены!", "Готово!");
		dataGridView6->Rows->RemoveAt(index);
	}


	dbConnection->Close();


	return System::Void();
}

System::Void YES::yourelectricscooter::button25_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=BazDan.mdb";
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	dbConnection->Open();
	String^ query = "SELECT * FROM [table_100]";
	OleDbCommand^ dbComand = gcnew OleDbCommand(query, dbConnection);
	OleDbDataReader^ dbReader = dbComand->ExecuteReader();

	if (dbReader->HasRows == false) {
		MessageBox::Show("Ошибка считывания данных", "Ошибка");
	}
	else {

		while (dbReader->Read()) {
			dataGridView7->Rows->Add(dbReader["id100"], dbReader["Brend100"], dbReader["Weight100"], dbReader["Powerreserv100"], dbReader["Driveunit100"], dbReader["Price100"]);
		}
	}


	dbReader->Close();
	dbConnection->Close();


	return System::Void();
}

System::Void YES::yourelectricscooter::button26_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (dataGridView7->SelectedRows->Count != 1) {
		MessageBox::Show("Выберите одну строку для добавления!", "Внимание!");
		return;
	}

	int index = dataGridView7->SelectedRows[0]->Index;

	if (dataGridView7->Rows[index]->Cells[0]->Value == nullptr ||
		dataGridView7->Rows[index]->Cells[1]->Value == nullptr ||
		dataGridView7->Rows[index]->Cells[2]->Value == nullptr ||
		dataGridView7->Rows[index]->Cells[3]->Value == nullptr ||
		dataGridView7->Rows[index]->Cells[4]->Value == nullptr ||
		dataGridView7->Rows[index]->Cells[5]->Value == nullptr) {
		MessageBox::Show("Не все данные введены!", "Внимание!");
		return;
	}

	String^ id100 = dataGridView7->Rows[index]->Cells[0]->Value->ToString();
	String^ Brend100 = dataGridView7->Rows[index]->Cells[1]->Value->ToString();
	String^ Weight100 = dataGridView7->Rows[index]->Cells[2]->Value->ToString();
	String^ Powerreserv100 = dataGridView7->Rows[index]->Cells[3]->Value->ToString();
	String^ Driveunit100 = dataGridView7->Rows[index]->Cells[4]->Value->ToString();
	String^ Price100 = dataGridView7->Rows[index]->Cells[5]->Value->ToString();

	String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=BazDan.mdb";
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	dbConnection->Open();
	String^ query = "INSERT INTO [table_100] VALUES (" + id100 + ", '" + Brend100 + "', '" + Weight100 + "', '" + Powerreserv100 + "' , '" + Driveunit100 + "' , '" + Price100 + "')";
	OleDbCommand^ dbComand = gcnew OleDbCommand(query, dbConnection);

	if (dbComand->ExecuteNonQuery() != 1)
		MessageBox::Show("Ошибка выполнения запроса!", "Ошибка!");
	else
		MessageBox::Show("Данные добавлены!", "Готово!");

	dbConnection->Close();

	return System::Void();
}

System::Void YES::yourelectricscooter::button27_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (dataGridView7->SelectedRows->Count != 1) {
		MessageBox::Show("Выберите одну строку для добавления!", "Внимание!");
		return;
	}

	int index = dataGridView7->SelectedRows[0]->Index;

	if (dataGridView7->Rows[index]->Cells[0]->Value == nullptr ||
		dataGridView7->Rows[index]->Cells[1]->Value == nullptr ||
		dataGridView7->Rows[index]->Cells[2]->Value == nullptr ||
		dataGridView7->Rows[index]->Cells[3]->Value == nullptr ||
		dataGridView7->Rows[index]->Cells[4]->Value == nullptr ||
		dataGridView7->Rows[index]->Cells[5]->Value == nullptr) {
		MessageBox::Show("Не все данные введены!", "Внимание!");
		return;
	}

	String^ id100 = dataGridView7->Rows[index]->Cells[0]->Value->ToString();
	String^ Brend100 = dataGridView7->Rows[index]->Cells[1]->Value->ToString();
	String^ Weight100 = dataGridView7->Rows[index]->Cells[2]->Value->ToString();
	String^ Powerreserv100 = dataGridView7->Rows[index]->Cells[3]->Value->ToString();
	String^ Driveunit100 = dataGridView7->Rows[index]->Cells[4]->Value->ToString();
	String^ Price100 = dataGridView7->Rows[index]->Cells[5]->Value->ToString();

	String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=BazDan.mdb";
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	dbConnection->Open();
	String^ query = "UPDATE [table_100] SET   Brend100='" + Brend100 + "', Weight100 = " + Weight100 + ", Powerreserv100='" + Powerreserv100 + "',Driveunit100 = '" + Driveunit100 + "', Price100 = '" + Price100 + "' WHERE id100= " + id100;
	OleDbCommand^ dbComand = gcnew OleDbCommand(query, dbConnection);

	if (dbComand->ExecuteNonQuery() != 1)
		MessageBox::Show("Ошибка выполнения запроса!", "Ошибка!");
	else
		MessageBox::Show("Данные изменены!", "Готово!");


	dbConnection->Close();

	return System::Void();
}

System::Void YES::yourelectricscooter::button28_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (dataGridView7->SelectedRows->Count != 1) {
		MessageBox::Show("Выберите одну строку для добавления!", "Внимание!");
		return;
	}


	int index = dataGridView7->SelectedRows[0]->Index;


	if (dataGridView7->Rows[index]->Cells[0]->Value == nullptr)
	{
		MessageBox::Show("Не все данные введены!", "Внимание!");
		return;
	}


	String^ id = dataGridView7->Rows[index]->Cells[0]->Value->ToString();

	String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=BazDan.mdb";
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	String^ id100 = dataGridView7->Rows[index]->Cells[0]->Value->ToString();

	dbConnection->Open();
	String^ query = "DELETE FROM [table_100] WHERE id100 = " + id100;
	OleDbCommand^ dbComand = gcnew OleDbCommand(query, dbConnection);


	if (dbComand->ExecuteNonQuery() != 1)
		MessageBox::Show("Ошибка выполнения запроса!", "Ошибка!");
	else {
		MessageBox::Show("Данные удалены!", "Готово!");
		dataGridView7->Rows->RemoveAt(index);
	}


	dbConnection->Close();

	return System::Void();
}

System::Void YES::yourelectricscooter::button29_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=BazDan.mdb";
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	dbConnection->Open();
	String^ query = "SELECT * FROM [table_Basket]";
	OleDbCommand^ dbComand = gcnew OleDbCommand(query, dbConnection);
	OleDbDataReader^ dbReader = dbComand->ExecuteReader();

	if (dbReader->HasRows == false) {
		MessageBox::Show("Ошибка считывания данных", "Ошибка");
	}
	else {

		while (dbReader->Read()) {
			dataGridView8->Rows->Add(dbReader["idGoods"], dbReader["NameGoods"], dbReader["PriceGoods"]);
		}
	}


	dbReader->Close();
	dbConnection->Close();

	return System::Void();
}

System::Void YES::yourelectricscooter::button32_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (dataGridView8->SelectedRows->Count != 1) {
		MessageBox::Show("Выберите одну строку для добавления!", "Внимание!");
		return;
	}


	int index = dataGridView8->SelectedRows[0]->Index;


	if (dataGridView8->Rows[index]->Cells[0]->Value == nullptr)
	{
		MessageBox::Show("Не все данные введены!", "Внимание!");
		return;
	}


	String^ id = dataGridView8->Rows[index]->Cells[0]->Value->ToString();

	String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=BazDan.mdb";
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	String^ idGoods = dataGridView8->Rows[index]->Cells[0]->Value->ToString();

	dbConnection->Open();
	String^ query = "DELETE FROM [table_Basket] WHERE idGoods = " + idGoods;
	OleDbCommand^ dbComand = gcnew OleDbCommand(query, dbConnection);


	if (dbComand->ExecuteNonQuery() != 1)
		MessageBox::Show("Ошибка выполнения запроса!", "Ошибка!");
	else {
		MessageBox::Show("Данные удалены!", "Готово!");
		dataGridView8->Rows->RemoveAt(index);
	}


	dbConnection->Close();

	return System::Void();
}

System::Void YES::yourelectricscooter::button30_Click(System::Object^ sender, System::EventArgs^ e)
{

	return System::Void();
}