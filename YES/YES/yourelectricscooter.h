#pragma once
#include <stdexcept>
			using namespace std;
		using namespace System::IO;

		namespace YES {

			using namespace System;
			using namespace System::ComponentModel;
			using namespace System::Collections;
			using namespace System::Windows::Forms;
			using namespace System::Data;
			using namespace System::Drawing;

			/// <summary>
			/// Сводка для yourelectricscooter
			/// </summary>
			public ref class yourelectricscooter : public System::Windows::Forms::Form
			{
			public:
				yourelectricscooter(void)
				{
					InitializeComponent();
					//
					//TODO: добавьте код конструктора
					//
				}

			protected:
				/// <summary>
				/// Освободить все используемые ресурсы.
				/// </summary>
				~yourelectricscooter()
				{
					if (components)
					{
						delete components;
					}
				}
			private: System::Windows::Forms::MenuStrip^ menuStrip1;
			protected:
			private: System::Windows::Forms::ToolStripMenuItem^ менюToolStripMenuItem;
			private: System::Windows::Forms::ToolStripMenuItem^ Электросамокаты25ToolStripMenuItem;
			private: System::Windows::Forms::ToolStripMenuItem^ Электросамокаты50ToolStripMenuItem;
			private: System::Windows::Forms::ToolStripMenuItem^ Электросамокаты75ToolStripMenuItem;
			private: System::Windows::Forms::ToolStripMenuItem^ Электросамокаты100ToolStripMenuItem;




			private: System::Windows::Forms::ToolStripMenuItem^ sSDToolStripMenuItem;
			private: System::Windows::Forms::ToolStripMenuItem^ hDDToolStripMenuItem;
			private: System::Windows::Forms::ToolStripMenuItem^ бПToolStripMenuItem;
			private: System::Windows::Forms::ToolStripMenuItem^ корзинаToolStripMenuItem;

			private: System::Windows::Forms::DataGridView^ dataGridView1;






			private: System::Windows::Forms::DataGridView^ dataGridView2;






			private: System::Windows::Forms::DataGridView^ dataGridView3;






			private: System::Windows::Forms::DataGridView^ dataGridView4;






			private: System::Windows::Forms::DataGridView^ dataGridView5;






			private: System::Windows::Forms::DataGridView^ dataGridView6;




































			private: System::Windows::Forms::DataGridView^ dataGridView7;














			private: System::Windows::Forms::DataGridView^ dataGridView8;

















			private: System::Windows::Forms::ToolStripMenuItem^ выходExitToolStripMenuItem;
			private: System::Windows::Forms::Button^ button1;
			private: System::Windows::Forms::Button^ button2;
			private: System::Windows::Forms::Button^ button3;
			private: System::Windows::Forms::Button^ button4;
































































			private: System::Windows::Forms::ToolStripMenuItem^ обПрограммеToolStripMenuItem;
			private: System::Windows::Forms::Button^ button5;
			private: System::Windows::Forms::Button^ button6;
			private: System::Windows::Forms::Button^ button7;
			private: System::Windows::Forms::Button^ button8;
			private: System::Windows::Forms::Button^ button9;
			private: System::Windows::Forms::Button^ button10;
			private: System::Windows::Forms::Button^ button11;
			private: System::Windows::Forms::Button^ button12;
			private: System::Windows::Forms::Button^ button13;
			private: System::Windows::Forms::Button^ button14;
			private: System::Windows::Forms::Button^ button15;
			private: System::Windows::Forms::Button^ button16;
			private: System::Windows::Forms::Button^ button17;
			private: System::Windows::Forms::Button^ button18;
			private: System::Windows::Forms::Button^ button19;
			private: System::Windows::Forms::Button^ button20;
			private: System::Windows::Forms::Button^ button21;
			private: System::Windows::Forms::Button^ button22;
			private: System::Windows::Forms::Button^ button23;
			private: System::Windows::Forms::Button^ button24;
			private: System::Windows::Forms::Button^ button25;
			private: System::Windows::Forms::Button^ button26;
			private: System::Windows::Forms::Button^ button27;
			private: System::Windows::Forms::Button^ button28;
			private: System::Windows::Forms::Button^ button29;


			private: System::Windows::Forms::Button^ button32;










































			private: System::Windows::Forms::DataGridViewTextBoxColumn^ idTov;
			private: System::Windows::Forms::DataGridViewTextBoxColumn^ NaimTov;
			private: System::Windows::Forms::DataGridViewTextBoxColumn^ PriceTov;
			private: System::Windows::Forms::Button^ button30;
			private: System::Windows::Forms::Button^ button31;
			private: System::Windows::Forms::Button^ button33;
			private: System::Windows::Forms::Button^ button34;
			private: System::Windows::Forms::Button^ button35;
			private: System::Windows::Forms::Button^ button36;
			private: System::Windows::Forms::Button^ button37;




















































































private: System::Windows::Forms::DataGridViewTextBoxColumn^ id25;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Name25;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Weight25;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Powerreserv25;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Driveunit25;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Price25;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ id50;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Name50;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Weight50;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Power50;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Driveunit50;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Price50;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ id75;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Name75;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Weight75;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Powerreserv75;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Driveunit75;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Price75;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ id100;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Brend100;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Weight100;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Powerreserv100;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Driveunit100;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Price100;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ idkoles;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Radiuskol;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Shir;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ highkol;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ FB;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Pricekol;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ idTromoz;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ NameTormoz;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Peredzad;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Dlintros;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Diskbarab;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ PriceTormoz;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ idGaz;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ NameGaz;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ MonitorGaz;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ KeyGaz;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Kurruk;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ PriceGaz;
private: System::Windows::Forms::Button^ button38;
















































			private:
				/// <summary>
				/// Обязательная переменная конструктора.
				/// </summary>
				System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
				/// <summary>
				/// Требуемый метод для поддержки конструктора — не изменяйте 
				/// содержимое этого метода с помощью редактора кода.
				/// </summary>
				void InitializeComponent(void)
				{
					this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
					this->менюToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
					this->Электросамокаты25ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
					this->Электросамокаты50ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
					this->Электросамокаты75ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
					this->Электросамокаты100ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
					this->sSDToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
					this->hDDToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
					this->бПToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
					this->корзинаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
					this->обПрограммеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
					this->выходExitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
					this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
					this->id25 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
					this->Name25 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
					this->Weight25 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
					this->Powerreserv25 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
					this->Driveunit25 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
					this->Price25 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
					this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
					this->id50 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
					this->Name50 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
					this->Weight50 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
					this->Power50 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
					this->Driveunit50 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
					this->Price50 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
					this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
					this->idkoles = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
					this->Radiuskol = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
					this->Shir = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
					this->highkol = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
					this->FB = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
					this->Pricekol = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
					this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
					this->idTromoz = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
					this->NameTormoz = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
					this->Peredzad = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
					this->Dlintros = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
					this->Diskbarab = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
					this->PriceTormoz = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
					this->dataGridView5 = (gcnew System::Windows::Forms::DataGridView());
					this->idGaz = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
					this->NameGaz = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
					this->MonitorGaz = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
					this->KeyGaz = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
					this->Kurruk = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
					this->PriceGaz = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
					this->dataGridView6 = (gcnew System::Windows::Forms::DataGridView());
					this->id75 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
					this->Name75 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
					this->Weight75 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
					this->Powerreserv75 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
					this->Driveunit75 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
					this->Price75 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
					this->dataGridView7 = (gcnew System::Windows::Forms::DataGridView());
					this->id100 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
					this->Brend100 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
					this->Weight100 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
					this->Powerreserv100 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
					this->Driveunit100 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
					this->Price100 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
					this->dataGridView8 = (gcnew System::Windows::Forms::DataGridView());
					this->idTov = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
					this->NaimTov = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
					this->PriceTov = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
					this->button1 = (gcnew System::Windows::Forms::Button());
					this->button2 = (gcnew System::Windows::Forms::Button());
					this->button3 = (gcnew System::Windows::Forms::Button());
					this->button4 = (gcnew System::Windows::Forms::Button());
					this->button5 = (gcnew System::Windows::Forms::Button());
					this->button6 = (gcnew System::Windows::Forms::Button());
					this->button7 = (gcnew System::Windows::Forms::Button());
					this->button8 = (gcnew System::Windows::Forms::Button());
					this->button9 = (gcnew System::Windows::Forms::Button());
					this->button10 = (gcnew System::Windows::Forms::Button());
					this->button11 = (gcnew System::Windows::Forms::Button());
					this->button12 = (gcnew System::Windows::Forms::Button());
					this->button13 = (gcnew System::Windows::Forms::Button());
					this->button14 = (gcnew System::Windows::Forms::Button());
					this->button15 = (gcnew System::Windows::Forms::Button());
					this->button16 = (gcnew System::Windows::Forms::Button());
					this->button17 = (gcnew System::Windows::Forms::Button());
					this->button18 = (gcnew System::Windows::Forms::Button());
					this->button19 = (gcnew System::Windows::Forms::Button());
					this->button20 = (gcnew System::Windows::Forms::Button());
					this->button21 = (gcnew System::Windows::Forms::Button());
					this->button22 = (gcnew System::Windows::Forms::Button());
					this->button23 = (gcnew System::Windows::Forms::Button());
					this->button24 = (gcnew System::Windows::Forms::Button());
					this->button25 = (gcnew System::Windows::Forms::Button());
					this->button26 = (gcnew System::Windows::Forms::Button());
					this->button27 = (gcnew System::Windows::Forms::Button());
					this->button28 = (gcnew System::Windows::Forms::Button());
					this->button29 = (gcnew System::Windows::Forms::Button());
					this->button32 = (gcnew System::Windows::Forms::Button());
					this->button30 = (gcnew System::Windows::Forms::Button());
					this->button31 = (gcnew System::Windows::Forms::Button());
					this->button33 = (gcnew System::Windows::Forms::Button());
					this->button34 = (gcnew System::Windows::Forms::Button());
					this->button35 = (gcnew System::Windows::Forms::Button());
					this->button36 = (gcnew System::Windows::Forms::Button());
					this->button37 = (gcnew System::Windows::Forms::Button());
					this->button38 = (gcnew System::Windows::Forms::Button());
					this->menuStrip1->SuspendLayout();
					(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
					(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
					(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
					(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
					(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->BeginInit();
					(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->BeginInit();
					(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView7))->BeginInit();
					(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView8))->BeginInit();
					this->SuspendLayout();
					// 
					// menuStrip1
					// 
					this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
						this->менюToolStripMenuItem,
							this->корзинаToolStripMenuItem, this->обПрограммеToolStripMenuItem, this->выходExitToolStripMenuItem
					});
					this->menuStrip1->Location = System::Drawing::Point(0, 0);
					this->menuStrip1->Name = L"menuStrip1";
					this->menuStrip1->Size = System::Drawing::Size(898, 24);
					this->menuStrip1->TabIndex = 0;
					this->menuStrip1->Text = L"menuStrip1";
					// 
					// менюToolStripMenuItem
					// 
					this->менюToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
						this->Электросамокаты25ToolStripMenuItem,
							this->Электросамокаты50ToolStripMenuItem, this->Электросамокаты75ToolStripMenuItem, this->Электросамокаты100ToolStripMenuItem,
							this->sSDToolStripMenuItem, this->hDDToolStripMenuItem, this->бПToolStripMenuItem
					});
					this->менюToolStripMenuItem->Name = L"менюToolStripMenuItem";
					this->менюToolStripMenuItem->Size = System::Drawing::Size(53, 20);
					this->менюToolStripMenuItem->Text = L"Меню";
					// 
					// Электросамокаты25ToolStripMenuItem
					// 
					this->Электросамокаты25ToolStripMenuItem->Name = L"Электросамокаты25ToolStripMenuItem";
					this->Электросамокаты25ToolStripMenuItem->Size = System::Drawing::Size(224, 22);
					this->Электросамокаты25ToolStripMenuItem->Text = L"Электросамокаты 25км\\ч";
					this->Электросамокаты25ToolStripMenuItem->Click += gcnew System::EventHandler(this, &yourelectricscooter::Электросамокаты25ToolStripMenuItem_Click);
					// 
					// Электросамокаты50ToolStripMenuItem
					// 
					this->Электросамокаты50ToolStripMenuItem->Name = L"Электросамокаты50ToolStripMenuItem";
					this->Электросамокаты50ToolStripMenuItem->Size = System::Drawing::Size(224, 22);
					this->Электросамокаты50ToolStripMenuItem->Text = L"Электросамокаты 50 км\\ч";
					this->Электросамокаты50ToolStripMenuItem->Click += gcnew System::EventHandler(this, &yourelectricscooter::Электросамокаты50ToolStripMenuItem_Click);
					// 
					// Электросамокаты75ToolStripMenuItem
					// 
					this->Электросамокаты75ToolStripMenuItem->Name = L"Электросамокаты75ToolStripMenuItem";
					this->Электросамокаты75ToolStripMenuItem->Size = System::Drawing::Size(224, 22);
					this->Электросамокаты75ToolStripMenuItem->Text = L"Электросамокаты 75 км\\ч";
					this->Электросамокаты75ToolStripMenuItem->Click += gcnew System::EventHandler(this, &yourelectricscooter::Электросамокаты75ToolStripMenuItem_Click);
					// 
					// Электросамокаты100ToolStripMenuItem
					// 
					this->Электросамокаты100ToolStripMenuItem->Name = L"Электросамокаты100ToolStripMenuItem";
					this->Электросамокаты100ToolStripMenuItem->Size = System::Drawing::Size(224, 22);
					this->Электросамокаты100ToolStripMenuItem->Text = L"Электросамокаты 100 км\\ч";
					this->Электросамокаты100ToolStripMenuItem->Click += gcnew System::EventHandler(this, &yourelectricscooter::Электросамокаты100ToolStripMenuItem_Click);
					// 
					// sSDToolStripMenuItem
					// 
					this->sSDToolStripMenuItem->Name = L"sSDToolStripMenuItem";
					this->sSDToolStripMenuItem->Size = System::Drawing::Size(224, 22);
					this->sSDToolStripMenuItem->Text = L"Колёса";
					this->sSDToolStripMenuItem->Click += gcnew System::EventHandler(this, &yourelectricscooter::колесаToolStripMenuItem_Click);
					// 
					// hDDToolStripMenuItem
					// 
					this->hDDToolStripMenuItem->Name = L"hDDToolStripMenuItem";
					this->hDDToolStripMenuItem->Size = System::Drawing::Size(224, 22);
					this->hDDToolStripMenuItem->Text = L"Тормоза";
					this->hDDToolStripMenuItem->Click += gcnew System::EventHandler(this, &yourelectricscooter::ТормозаToolStripMenuItem_Click);
					// 
					// бПToolStripMenuItem
					// 
					this->бПToolStripMenuItem->Name = L"бПToolStripMenuItem";
					this->бПToolStripMenuItem->Size = System::Drawing::Size(224, 22);
					this->бПToolStripMenuItem->Text = L"Газ";
					this->бПToolStripMenuItem->Click += gcnew System::EventHandler(this, &yourelectricscooter::ГазToolStripMenuItem_Click);
					// 
					// корзинаToolStripMenuItem
					// 
					this->корзинаToolStripMenuItem->Name = L"корзинаToolStripMenuItem";
					this->корзинаToolStripMenuItem->Size = System::Drawing::Size(65, 20);
					this->корзинаToolStripMenuItem->Text = L"Корзина";
					this->корзинаToolStripMenuItem->Click += gcnew System::EventHandler(this, &yourelectricscooter::корзинаToolStripMenuItem_Click);
					// 
					// обПрограммеToolStripMenuItem
					// 
					this->обПрограммеToolStripMenuItem->Name = L"обПрограммеToolStripMenuItem";
					this->обПрограммеToolStripMenuItem->Size = System::Drawing::Size(101, 20);
					this->обПрограммеToolStripMenuItem->Text = L"Об программе";
					this->обПрограммеToolStripMenuItem->Click += gcnew System::EventHandler(this, &yourelectricscooter::обПрограммеToolStripMenuItem_Click);
					// 
					// выходExitToolStripMenuItem
					// 
					this->выходExitToolStripMenuItem->Name = L"выходExitToolStripMenuItem";
					this->выходExitToolStripMenuItem->Size = System::Drawing::Size(54, 20);
					this->выходExitToolStripMenuItem->Text = L"Выход";
					this->выходExitToolStripMenuItem->Click += gcnew System::EventHandler(this, &yourelectricscooter::выходExitToolStripMenuItem_Click);
					// 
					// dataGridView1
					// 
					this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
					this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
						this->id25, this->Name25,
							this->Weight25, this->Powerreserv25, this->Driveunit25, this->Price25
					});
					this->dataGridView1->Location = System::Drawing::Point(11, 27);
					this->dataGridView1->Name = L"dataGridView1";
					this->dataGridView1->Size = System::Drawing::Size(653, 366);
					this->dataGridView1->TabIndex = 1;
					// 
					// id25
					// 
					this->id25->HeaderText = L"id";
					this->id25->Name = L"id25";
					// 
					// Name25
					// 
					this->Name25->HeaderText = L"Name";
					this->Name25->Name = L"Name25";
					// 
					// Weight25
					// 
					this->Weight25->HeaderText = L"Weight";
					this->Weight25->Name = L"Weight25";
					// 
					// Powerreserv25
					// 
					this->Powerreserv25->HeaderText = L"Power reserv";
					this->Powerreserv25->Name = L"Powerreserv25";
					// 
					// Driveunit25
					// 
					this->Driveunit25->HeaderText = L"Drive unit ";
					this->Driveunit25->Name = L"Driveunit25";
					// 
					// Price25
					// 
					this->Price25->HeaderText = L"Price";
					this->Price25->Name = L"Price25";
					// 
					// dataGridView2
					// 
					this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
					this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
						this->id50, this->Name50,
							this->Weight50, this->Power50, this->Driveunit50, this->Price50
					});
					this->dataGridView2->Location = System::Drawing::Point(12, 27);
					this->dataGridView2->Name = L"dataGridView2";
					this->dataGridView2->Size = System::Drawing::Size(652, 366);
					this->dataGridView2->TabIndex = 2;
					// 
					// id50
					// 
					this->id50->HeaderText = L"id";
					this->id50->Name = L"id50";
					// 
					// Name50
					// 
					this->Name50->HeaderText = L"Name";
					this->Name50->Name = L"Name50";
					// 
					// Weight50
					// 
					this->Weight50->HeaderText = L"Weight";
					this->Weight50->Name = L"Weight50";
					// 
					// Power50
					// 
					this->Power50->HeaderText = L"Power reserv";
					this->Power50->Name = L"Power50";
					// 
					// Driveunit50
					// 
					this->Driveunit50->HeaderText = L"Drive unit";
					this->Driveunit50->Name = L"Driveunit50";
					// 
					// Price50
					// 
					this->Price50->HeaderText = L"Price";
					this->Price50->Name = L"Price50";
					// 
					// dataGridView3
					// 
					this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
					this->dataGridView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
						this->idkoles,
							this->Radiuskol, this->Shir, this->highkol, this->FB, this->Pricekol
					});
					this->dataGridView3->Location = System::Drawing::Point(11, 27);
					this->dataGridView3->Name = L"dataGridView3";
					this->dataGridView3->Size = System::Drawing::Size(653, 366);
					this->dataGridView3->TabIndex = 3;
					// 
					// idkoles
					// 
					this->idkoles->HeaderText = L"id";
					this->idkoles->Name = L"idkoles";
					// 
					// Radiuskol
					// 
					this->Radiuskol->HeaderText = L"Radius";
					this->Radiuskol->Name = L"Radiuskol";
					// 
					// Shir
					// 
					this->Shir->HeaderText = L"Shirina";
					this->Shir->Name = L"Shir";
					// 
					// highkol
					// 
					this->highkol->HeaderText = L"High";
					this->highkol->Name = L"highkol";
					// 
					// FB
					// 
					this->FB->HeaderText = L"Front/Back";
					this->FB->Name = L"FB";
					// 
					// Pricekol
					// 
					this->Pricekol->HeaderText = L"Price";
					this->Pricekol->Name = L"Pricekol";
					// 
					// dataGridView4
					// 
					this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
					this->dataGridView4->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
						this->idTromoz,
							this->NameTormoz, this->Peredzad, this->Dlintros, this->Diskbarab, this->PriceTormoz
					});
					this->dataGridView4->Location = System::Drawing::Point(10, 27);
					this->dataGridView4->Name = L"dataGridView4";
					this->dataGridView4->Size = System::Drawing::Size(653, 366);
					this->dataGridView4->TabIndex = 4;
					// 
					// idTromoz
					// 
					this->idTromoz->HeaderText = L"id";
					this->idTromoz->Name = L"idTromoz";
					// 
					// NameTormoz
					// 
					this->NameTormoz->HeaderText = L"Name";
					this->NameTormoz->Name = L"NameTormoz";
					// 
					// Peredzad
					// 
					this->Peredzad->HeaderText = L"Front\\Back";
					this->Peredzad->Name = L"Peredzad";
					// 
					// Dlintros
					// 
					this->Dlintros->HeaderText = L"Cable length";
					this->Dlintros->Name = L"Dlintros";
					// 
					// Diskbarab
					// 
					this->Diskbarab->HeaderText = L"Disc \\ Dram";
					this->Diskbarab->Name = L"Diskbarab";
					// 
					// PriceTormoz
					// 
					this->PriceTormoz->HeaderText = L"Price";
					this->PriceTormoz->Name = L"PriceTormoz";
					// 
					// dataGridView5
					// 
					this->dataGridView5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
					this->dataGridView5->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
						this->idGaz,
							this->NameGaz, this->MonitorGaz, this->KeyGaz, this->Kurruk, this->PriceGaz
					});
					this->dataGridView5->Location = System::Drawing::Point(11, 27);
					this->dataGridView5->Name = L"dataGridView5";
					this->dataGridView5->Size = System::Drawing::Size(653, 366);
					this->dataGridView5->TabIndex = 5;
					// 
					// idGaz
					// 
					this->idGaz->HeaderText = L"id";
					this->idGaz->Name = L"idGaz";
					// 
					// NameGaz
					// 
					this->NameGaz->HeaderText = L"Name";
					this->NameGaz->Name = L"NameGaz";
					this->NameGaz->Resizable = System::Windows::Forms::DataGridViewTriState::True;
					// 
					// MonitorGaz
					// 
					this->MonitorGaz->HeaderText = L"Monitor";
					this->MonitorGaz->Name = L"MonitorGaz";
					// 
					// KeyGaz
					// 
					this->KeyGaz->HeaderText = L"Ignition";
					this->KeyGaz->Name = L"KeyGaz";
					// 
					// Kurruk
					// 
					this->Kurruk->HeaderText = L"Gaz handle\\Gaz trigger";
					this->Kurruk->Name = L"Kurruk";
					// 
					// PriceGaz
					// 
					this->PriceGaz->HeaderText = L"Price";
					this->PriceGaz->Name = L"PriceGaz";
					// 
					// dataGridView6
					// 
					this->dataGridView6->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
					this->dataGridView6->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
						this->id75, this->Name75,
							this->Weight75, this->Powerreserv75, this->Driveunit75, this->Price75
					});
					this->dataGridView6->Location = System::Drawing::Point(11, 27);
					this->dataGridView6->Name = L"dataGridView6";
					this->dataGridView6->Size = System::Drawing::Size(653, 366);
					this->dataGridView6->TabIndex = 6;
					// 
					// id75
					// 
					this->id75->HeaderText = L"id";
					this->id75->Name = L"id75";
					// 
					// Name75
					// 
					this->Name75->HeaderText = L"Name";
					this->Name75->Name = L"Name75";
					// 
					// Weight75
					// 
					this->Weight75->HeaderText = L"Weight";
					this->Weight75->Name = L"Weight75";
					// 
					// Powerreserv75
					// 
					this->Powerreserv75->HeaderText = L"Power reserv";
					this->Powerreserv75->Name = L"Powerreserv75";
					// 
					// Driveunit75
					// 
					this->Driveunit75->HeaderText = L"Drive unit";
					this->Driveunit75->Name = L"Driveunit75";
					// 
					// Price75
					// 
					this->Price75->HeaderText = L"Price";
					this->Price75->Name = L"Price75";
					// 
					// dataGridView7
					// 
					this->dataGridView7->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
					this->dataGridView7->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
						this->id100,
							this->Brend100, this->Weight100, this->Powerreserv100, this->Driveunit100, this->Price100
					});
					this->dataGridView7->Location = System::Drawing::Point(10, 27);
					this->dataGridView7->Name = L"dataGridView7";
					this->dataGridView7->Size = System::Drawing::Size(653, 366);
					this->dataGridView7->TabIndex = 7;
					// 
					// id100
					// 
					this->id100->HeaderText = L"id";
					this->id100->Name = L"id100";
					// 
					// Brend100
					// 
					this->Brend100->HeaderText = L"Brend";
					this->Brend100->Name = L"Brend100";
					this->Brend100->Resizable = System::Windows::Forms::DataGridViewTriState::True;
					// 
					// Weight100
					// 
					this->Weight100->HeaderText = L"Weight";
					this->Weight100->Name = L"Weight100";
					// 
					// Powerreserv100
					// 
					this->Powerreserv100->HeaderText = L"Power reserv";
					this->Powerreserv100->Name = L"Powerreserv100";
					// 
					// Driveunit100
					// 
					this->Driveunit100->HeaderText = L"Drive unit";
					this->Driveunit100->Name = L"Driveunit100";
					// 
					// Price100
					// 
					this->Price100->HeaderText = L"Price";
					this->Price100->Name = L"Price100";
					// 
					// dataGridView8
					// 
					this->dataGridView8->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
					this->dataGridView8->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
						this->idTov,
							this->NaimTov, this->PriceTov
					});
					this->dataGridView8->Location = System::Drawing::Point(10, 27);
					this->dataGridView8->Name = L"dataGridView8";
					this->dataGridView8->Size = System::Drawing::Size(653, 366);
					this->dataGridView8->TabIndex = 15;
					// 
					// idTov
					// 
					this->idTov->HeaderText = L"id Tovar";
					this->idTov->Name = L"idTov";
					// 
					// NaimTov
					// 
					this->NaimTov->HeaderText = L"Name Tovar";
					this->NaimTov->Name = L"NaimTov";
					// 
					// PriceTov
					// 
					this->PriceTov->HeaderText = L"Price Tovar";
					this->PriceTov->Name = L"PriceTov";
					// 
					// button1
					// 
					this->button1->Location = System::Drawing::Point(671, 30);
					this->button1->Name = L"button1";
					this->button1->Size = System::Drawing::Size(223, 61);
					this->button1->TabIndex = 16;
					this->button1->Text = L"Загрузить";
					this->button1->UseVisualStyleBackColor = true;
					this->button1->Click += gcnew System::EventHandler(this, &yourelectricscooter::button1_Click);
					// 
					// button2
					// 
					this->button2->Location = System::Drawing::Point(672, 95);
					this->button2->Name = L"button2";
					this->button2->Size = System::Drawing::Size(223, 61);
					this->button2->TabIndex = 17;
					this->button2->Text = L"Добавить";
					this->button2->UseVisualStyleBackColor = true;
					this->button2->Click += gcnew System::EventHandler(this, &yourelectricscooter::button2_Click);
					// 
					// button3
					// 
					this->button3->Location = System::Drawing::Point(670, 163);
					this->button3->Name = L"button3";
					this->button3->Size = System::Drawing::Size(223, 61);
					this->button3->TabIndex = 18;
					this->button3->Text = L"Обновить";
					this->button3->UseVisualStyleBackColor = true;
					this->button3->Click += gcnew System::EventHandler(this, &yourelectricscooter::button3_Click);
					// 
					// button4
					// 
					this->button4->Location = System::Drawing::Point(670, 229);
					this->button4->Name = L"button4";
					this->button4->Size = System::Drawing::Size(223, 61);
					this->button4->TabIndex = 19;
					this->button4->Text = L"Удалить";
					this->button4->UseVisualStyleBackColor = true;
					this->button4->Click += gcnew System::EventHandler(this, &yourelectricscooter::button4_Click);
					// 
					// button5
					// 
					this->button5->Location = System::Drawing::Point(671, 30);
					this->button5->Name = L"button5";
					this->button5->Size = System::Drawing::Size(222, 60);
					this->button5->TabIndex = 20;
					this->button5->Text = L"Загрузить";
					this->button5->UseVisualStyleBackColor = true;
					this->button5->Click += gcnew System::EventHandler(this, &yourelectricscooter::button5_Click);
					// 
					// button6
					// 
					this->button6->Location = System::Drawing::Point(672, 97);
					this->button6->Name = L"button6";
					this->button6->Size = System::Drawing::Size(222, 60);
					this->button6->TabIndex = 21;
					this->button6->Text = L"Добавить";
					this->button6->UseVisualStyleBackColor = true;
					this->button6->Click += gcnew System::EventHandler(this, &yourelectricscooter::button6_Click);
					// 
					// button7
					// 
					this->button7->Location = System::Drawing::Point(672, 164);
					this->button7->Name = L"button7";
					this->button7->Size = System::Drawing::Size(222, 60);
					this->button7->TabIndex = 22;
					this->button7->Text = L"Обновить";
					this->button7->UseVisualStyleBackColor = true;
					this->button7->Click += gcnew System::EventHandler(this, &yourelectricscooter::button7_Click);
					// 
					// button8
					// 
					this->button8->Location = System::Drawing::Point(670, 230);
					this->button8->Name = L"button8";
					this->button8->Size = System::Drawing::Size(222, 60);
					this->button8->TabIndex = 23;
					this->button8->Text = L"Удалить";
					this->button8->UseVisualStyleBackColor = true;
					this->button8->Click += gcnew System::EventHandler(this, &yourelectricscooter::button8_Click);
					// 
					// button9
					// 
					this->button9->Location = System::Drawing::Point(671, 29);
					this->button9->Name = L"button9";
					this->button9->Size = System::Drawing::Size(222, 60);
					this->button9->TabIndex = 24;
					this->button9->Text = L"Загрузить";
					this->button9->UseVisualStyleBackColor = true;
					this->button9->Click += gcnew System::EventHandler(this, &yourelectricscooter::button9_Click);
					// 
					// button10
					// 
					this->button10->Location = System::Drawing::Point(671, 97);
					this->button10->Name = L"button10";
					this->button10->Size = System::Drawing::Size(222, 60);
					this->button10->TabIndex = 25;
					this->button10->Text = L"Добавить";
					this->button10->UseVisualStyleBackColor = true;
					this->button10->Click += gcnew System::EventHandler(this, &yourelectricscooter::button10_Click);
					// 
					// button11
					// 
					this->button11->Location = System::Drawing::Point(670, 162);
					this->button11->Name = L"button11";
					this->button11->Size = System::Drawing::Size(222, 60);
					this->button11->TabIndex = 26;
					this->button11->Text = L"Обновить";
					this->button11->UseVisualStyleBackColor = true;
					this->button11->Click += gcnew System::EventHandler(this, &yourelectricscooter::button11_Click);
					// 
					// button12
					// 
					this->button12->Location = System::Drawing::Point(672, 230);
					this->button12->Name = L"button12";
					this->button12->Size = System::Drawing::Size(222, 60);
					this->button12->TabIndex = 27;
					this->button12->Text = L"Удалить";
					this->button12->UseVisualStyleBackColor = true;
					this->button12->Click += gcnew System::EventHandler(this, &yourelectricscooter::button12_Click);
					// 
					// button13
					// 
					this->button13->Location = System::Drawing::Point(671, 30);
					this->button13->Name = L"button13";
					this->button13->Size = System::Drawing::Size(222, 60);
					this->button13->TabIndex = 28;
					this->button13->Text = L"Загрузить";
					this->button13->UseVisualStyleBackColor = true;
					this->button13->Click += gcnew System::EventHandler(this, &yourelectricscooter::button13_Click);
					// 
					// button14
					// 
					this->button14->Location = System::Drawing::Point(672, 97);
					this->button14->Name = L"button14";
					this->button14->Size = System::Drawing::Size(222, 60);
					this->button14->TabIndex = 29;
					this->button14->Text = L"Добавить";
					this->button14->UseVisualStyleBackColor = true;
					this->button14->Click += gcnew System::EventHandler(this, &yourelectricscooter::button14_Click);
					// 
					// button15
					// 
					this->button15->Location = System::Drawing::Point(670, 163);
					this->button15->Name = L"button15";
					this->button15->Size = System::Drawing::Size(222, 60);
					this->button15->TabIndex = 30;
					this->button15->Text = L"Обновить";
					this->button15->UseVisualStyleBackColor = true;
					this->button15->Click += gcnew System::EventHandler(this, &yourelectricscooter::button15_Click);
					// 
					// button16
					// 
					this->button16->Location = System::Drawing::Point(671, 230);
					this->button16->Name = L"button16";
					this->button16->Size = System::Drawing::Size(222, 60);
					this->button16->TabIndex = 31;
					this->button16->Text = L"Удалить";
					this->button16->UseVisualStyleBackColor = true;
					this->button16->Click += gcnew System::EventHandler(this, &yourelectricscooter::button16_Click);
					// 
					// button17
					// 
					this->button17->Location = System::Drawing::Point(671, 30);
					this->button17->Name = L"button17";
					this->button17->Size = System::Drawing::Size(222, 60);
					this->button17->TabIndex = 32;
					this->button17->Text = L"Загрузить";
					this->button17->UseVisualStyleBackColor = true;
					this->button17->Click += gcnew System::EventHandler(this, &yourelectricscooter::button17_Click);
					// 
					// button18
					// 
					this->button18->Location = System::Drawing::Point(672, 97);
					this->button18->Name = L"button18";
					this->button18->Size = System::Drawing::Size(222, 60);
					this->button18->TabIndex = 33;
					this->button18->Text = L"Добавить";
					this->button18->UseVisualStyleBackColor = true;
					this->button18->Click += gcnew System::EventHandler(this, &yourelectricscooter::button18_Click);
					// 
					// button19
					// 
					this->button19->Location = System::Drawing::Point(670, 163);
					this->button19->Name = L"button19";
					this->button19->Size = System::Drawing::Size(222, 60);
					this->button19->TabIndex = 34;
					this->button19->Text = L"Обновить";
					this->button19->UseVisualStyleBackColor = true;
					this->button19->Click += gcnew System::EventHandler(this, &yourelectricscooter::button19_Click);
					// 
					// button20
					// 
					this->button20->Location = System::Drawing::Point(670, 230);
					this->button20->Name = L"button20";
					this->button20->Size = System::Drawing::Size(222, 60);
					this->button20->TabIndex = 35;
					this->button20->Text = L"Удалить";
					this->button20->UseVisualStyleBackColor = true;
					this->button20->Click += gcnew System::EventHandler(this, &yourelectricscooter::button20_Click);
					// 
					// button21
					// 
					this->button21->Location = System::Drawing::Point(671, 29);
					this->button21->Name = L"button21";
					this->button21->Size = System::Drawing::Size(222, 60);
					this->button21->TabIndex = 36;
					this->button21->Text = L"Загрузить";
					this->button21->UseVisualStyleBackColor = true;
					this->button21->Click += gcnew System::EventHandler(this, &yourelectricscooter::button21_Click);
					// 
					// button22
					// 
					this->button22->Location = System::Drawing::Point(671, 97);
					this->button22->Name = L"button22";
					this->button22->Size = System::Drawing::Size(222, 60);
					this->button22->TabIndex = 37;
					this->button22->Text = L"Добавить";
					this->button22->UseVisualStyleBackColor = true;
					this->button22->Click += gcnew System::EventHandler(this, &yourelectricscooter::button22_Click);
					// 
					// button23
					// 
					this->button23->Location = System::Drawing::Point(671, 163);
					this->button23->Name = L"button23";
					this->button23->Size = System::Drawing::Size(222, 60);
					this->button23->TabIndex = 38;
					this->button23->Text = L"Обновить";
					this->button23->UseVisualStyleBackColor = true;
					this->button23->Click += gcnew System::EventHandler(this, &yourelectricscooter::button23_Click);
					// 
					// button24
					// 
					this->button24->Location = System::Drawing::Point(670, 230);
					this->button24->Name = L"button24";
					this->button24->Size = System::Drawing::Size(222, 60);
					this->button24->TabIndex = 39;
					this->button24->Text = L"Удалить";
					this->button24->UseVisualStyleBackColor = true;
					this->button24->Click += gcnew System::EventHandler(this, &yourelectricscooter::button24_Click);
					// 
					// button25
					// 
					this->button25->Location = System::Drawing::Point(671, 30);
					this->button25->Name = L"button25";
					this->button25->Size = System::Drawing::Size(222, 60);
					this->button25->TabIndex = 40;
					this->button25->Text = L"Загрузить";
					this->button25->UseVisualStyleBackColor = true;
					this->button25->Click += gcnew System::EventHandler(this, &yourelectricscooter::button25_Click);
					// 
					// button26
					// 
					this->button26->Location = System::Drawing::Point(671, 96);
					this->button26->Name = L"button26";
					this->button26->Size = System::Drawing::Size(222, 60);
					this->button26->TabIndex = 41;
					this->button26->Text = L"Добавить";
					this->button26->UseVisualStyleBackColor = true;
					this->button26->Click += gcnew System::EventHandler(this, &yourelectricscooter::button26_Click);
					// 
					// button27
					// 
					this->button27->Location = System::Drawing::Point(670, 162);
					this->button27->Name = L"button27";
					this->button27->Size = System::Drawing::Size(222, 60);
					this->button27->TabIndex = 42;
					this->button27->Text = L"Обновить";
					this->button27->UseVisualStyleBackColor = true;
					this->button27->Click += gcnew System::EventHandler(this, &yourelectricscooter::button27_Click);
					// 
					// button28
					// 
					this->button28->Location = System::Drawing::Point(671, 230);
					this->button28->Name = L"button28";
					this->button28->Size = System::Drawing::Size(222, 60);
					this->button28->TabIndex = 43;
					this->button28->Text = L"Удалить";
					this->button28->UseVisualStyleBackColor = true;
					this->button28->Click += gcnew System::EventHandler(this, &yourelectricscooter::button28_Click);
					// 
					// button29
					// 
					this->button29->Location = System::Drawing::Point(671, 30);
					this->button29->Name = L"button29";
					this->button29->Size = System::Drawing::Size(222, 60);
					this->button29->TabIndex = 44;
					this->button29->Text = L"Загрузить";
					this->button29->UseVisualStyleBackColor = true;
					this->button29->Click += gcnew System::EventHandler(this, &yourelectricscooter::button29_Click);
					// 
					// button32
					// 
					this->button32->Location = System::Drawing::Point(670, 229);
					this->button32->Name = L"button32";
					this->button32->Size = System::Drawing::Size(222, 60);
					this->button32->TabIndex = 47;
					this->button32->Text = L"Удалить";
					this->button32->UseVisualStyleBackColor = true;
					this->button32->Click += gcnew System::EventHandler(this, &yourelectricscooter::button32_Click);
					// 
					// button30
					// 
					this->button30->Location = System::Drawing::Point(667, 295);
					this->button30->Name = L"button30";
					this->button30->Size = System::Drawing::Size(223, 59);
					this->button30->TabIndex = 48;
					this->button30->Text = L"Добавить в корзину";
					this->button30->UseVisualStyleBackColor = true;
					this->button30->Click += gcnew System::EventHandler(this, &yourelectricscooter::button30_Click);
					// 
					// button31
					// 
					this->button31->Location = System::Drawing::Point(668, 295);
					this->button31->Name = L"button31";
					this->button31->Size = System::Drawing::Size(223, 59);
					this->button31->TabIndex = 49;
					this->button31->Text = L"Добавить в корзину";
					this->button31->UseVisualStyleBackColor = true;
					this->button31->Click += gcnew System::EventHandler(this, &yourelectricscooter::button31_Click);
					// 
					// button33
					// 
					this->button33->Location = System::Drawing::Point(668, 295);
					this->button33->Name = L"button33";
					this->button33->Size = System::Drawing::Size(223, 59);
					this->button33->TabIndex = 50;
					this->button33->Text = L"Добавить в корзину";
					this->button33->UseVisualStyleBackColor = true;
					this->button33->Click += gcnew System::EventHandler(this, &yourelectricscooter::button33_Click);
					// 
					// button34
					// 
					this->button34->Location = System::Drawing::Point(668, 295);
					this->button34->Name = L"button34";
					this->button34->Size = System::Drawing::Size(223, 59);
					this->button34->TabIndex = 51;
					this->button34->Text = L"Добавить в корзину";
					this->button34->UseVisualStyleBackColor = true;
					this->button34->Click += gcnew System::EventHandler(this, &yourelectricscooter::button34_Click);
					// 
					// button35
					// 
					this->button35->Location = System::Drawing::Point(668, 295);
					this->button35->Name = L"button35";
					this->button35->Size = System::Drawing::Size(223, 59);
					this->button35->TabIndex = 52;
					this->button35->Text = L"Добавить в корзину";
					this->button35->UseVisualStyleBackColor = true;
					this->button35->Click += gcnew System::EventHandler(this, &yourelectricscooter::button35_Click);
					// 
					// button36
					// 
					this->button36->Location = System::Drawing::Point(668, 296);
					this->button36->Name = L"button36";
					this->button36->Size = System::Drawing::Size(223, 59);
					this->button36->TabIndex = 53;
					this->button36->Text = L"Добавить в корзину";
					this->button36->UseVisualStyleBackColor = true;
					this->button36->Click += gcnew System::EventHandler(this, &yourelectricscooter::button36_Click);
					// 
					// button37
					// 
					this->button37->Location = System::Drawing::Point(669, 295);
					this->button37->Name = L"button37";
					this->button37->Size = System::Drawing::Size(223, 59);
					this->button37->TabIndex = 54;
					this->button37->Text = L"Добавить в корзину";
					this->button37->UseVisualStyleBackColor = true;
					this->button37->Click += gcnew System::EventHandler(this, &yourelectricscooter::button37_Click);
					// 
					// button38
					// 
					this->button38->Location = System::Drawing::Point(342, 139);
					this->button38->Name = L"button38";
					this->button38->Size = System::Drawing::Size(182, 106);
					this->button38->TabIndex = 55;
					this->button38->Text = L"Нажми на меня!";
					this->button38->UseVisualStyleBackColor = true;
					this->button38->Click += gcnew System::EventHandler(this, &yourelectricscooter::button38_Click);
					// 
					// yourelectricscooter
					// 
					this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
					this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
					this->ClientSize = System::Drawing::Size(898, 405);
					this->Controls->Add(this->button38);
					this->Controls->Add(this->button37);
					this->Controls->Add(this->button36);
					this->Controls->Add(this->button35);
					this->Controls->Add(this->button34);
					this->Controls->Add(this->button33);
					this->Controls->Add(this->button31);
					this->Controls->Add(this->button30);
					this->Controls->Add(this->button32);
					this->Controls->Add(this->button29);
					this->Controls->Add(this->button28);
					this->Controls->Add(this->button27);
					this->Controls->Add(this->button26);
					this->Controls->Add(this->button25);
					this->Controls->Add(this->button24);
					this->Controls->Add(this->button23);
					this->Controls->Add(this->button22);
					this->Controls->Add(this->button21);
					this->Controls->Add(this->button20);
					this->Controls->Add(this->button19);
					this->Controls->Add(this->button18);
					this->Controls->Add(this->button17);
					this->Controls->Add(this->button16);
					this->Controls->Add(this->button15);
					this->Controls->Add(this->button14);
					this->Controls->Add(this->button13);
					this->Controls->Add(this->button12);
					this->Controls->Add(this->button11);
					this->Controls->Add(this->button10);
					this->Controls->Add(this->button9);
					this->Controls->Add(this->button8);
					this->Controls->Add(this->button7);
					this->Controls->Add(this->button6);
					this->Controls->Add(this->button5);
					this->Controls->Add(this->button4);
					this->Controls->Add(this->button3);
					this->Controls->Add(this->button2);
					this->Controls->Add(this->button1);
					this->Controls->Add(this->dataGridView8);
					this->Controls->Add(this->dataGridView7);
					this->Controls->Add(this->dataGridView6);
					this->Controls->Add(this->dataGridView5);
					this->Controls->Add(this->dataGridView4);
					this->Controls->Add(this->dataGridView3);
					this->Controls->Add(this->menuStrip1);
					this->Controls->Add(this->dataGridView1);
					this->Controls->Add(this->dataGridView2);
					this->MainMenuStrip = this->menuStrip1;
					this->MaximumSize = System::Drawing::Size(914, 444);
					this->MinimumSize = System::Drawing::Size(914, 444);
					this->Name = L"yourelectricscooter";
					this->Text = L"yourelectricscooter";
					this->Load += gcnew System::EventHandler(this, &yourelectricscooter::yourelectricscooter_Load);
					this->menuStrip1->ResumeLayout(false);
					this->menuStrip1->PerformLayout();
					(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
					(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
					(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
					(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
					(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->EndInit();
					(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->EndInit();
					(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView7))->EndInit();
					(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView8))->EndInit();
					this->ResumeLayout(false);
					this->PerformLayout();

				}
#pragma endregion

				Int32 Countofsold = 0;
				void off_all()
				{
					dataGridView1->Visible = false;
					button1->Visible = false;
					button2->Visible = false;
					button3->Visible = false;
					button4->Visible = false;
					dataGridView2->Visible = false;
					button5->Visible = false;
					button6->Visible = false;
					button7->Visible = false;
					button8->Visible = false;
					dataGridView3->Visible = false;
					button9->Visible = false;
					button10->Visible = false;
					button11->Visible = false;
					button12->Visible = false;
					dataGridView4->Visible = false;
					button13->Visible = false;
					button14->Visible = false;
					button15->Visible = false;
					button16->Visible = false;
					dataGridView5->Visible = false;
					button17->Visible = false;
					button18->Visible = false;
					button19->Visible = false;
					button20->Visible = false;
					dataGridView6->Visible = false;
					button21->Visible = false;
					button22->Visible = false;
					button23->Visible = false;
					button24->Visible = false;
					dataGridView7->Visible = false;
					button25->Visible = false;
					button26->Visible = false;
					button27->Visible = false;
					button28->Visible = false;
					dataGridView8->Visible = false;
					button29->Visible = false;
					button32->Visible = false;
					button30->Visible = false;//gpu
					button31->Visible = false;//cpu
					button33->Visible = false;//mb
					button34->Visible = false;//oper
					button35->Visible = false;//ssd
					button36->Visible = false;//hdd
					button37->Visible = false;//bp
					button38->Visible = true;
				}

			private: System::Void yourelectricscooter_Load(System::Object^ sender, System::EventArgs^ e)
			{
				off_all();
				BackgroundImage = Image::FromFile("D:\\YES\\YES\\fon.jpg");
			}

			private: System::Void выходExitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);

			private: System::Void обПрограммеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);

			private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);

			private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);

			private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e);

			private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e);

			private: System::Void Электросамокаты25ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
			{
				MessageBox::Show(this, "Здесь вы можете наблюдать таблицу для заполнения с самокатами максимальная скорость которых 25 кмч.\nЧто бы вывести таблицу самокатов нажмите <<Загрузить>>. Что бы добавть данные, заполните соответствующие поля, выделите строку по крайнему левому столбцу и нажмите <<Добавить>>.\nЧто бы изменить данные в строке, перезапишите данные в ячейках, выделите строку по крайнему левому столбцу и нажмите на кнопку <<Обновить>>.\nДля того, что бы удалить данные, выделите строку по крайнему левому столбцу и нажмите на кнопку <<Удалить>>.\nДля того, что добавить товар в корзину,выделите строку по крайнему левому столбцу и нажмите на кнопку <<Добавить в корзину>>", "Message", MessageBoxButtons::OK, MessageBoxIcon::Information);
				dataGridView1->Visible = true;
				button1->Visible = true;
				button2->Visible = true;
				button3->Visible = true;
				button4->Visible = true;
				dataGridView2->Visible = false;
				button5->Visible = false;
				button6->Visible = false;
				button7->Visible = false;
				button8->Visible = false;
				dataGridView3->Visible = false;
				button9->Visible = false;
				button10->Visible = false;
				button11->Visible = false;
				button12->Visible = false;
				dataGridView4->Visible = false;
				button13->Visible = false;
				button14->Visible = false;
				button15->Visible = false;
				button16->Visible = false;
				dataGridView5->Visible = false;
				button17->Visible = false;
				button18->Visible = false;
				button19->Visible = false;
				button20->Visible = false;
				dataGridView6->Visible = false;
				button21->Visible = false;
				button22->Visible = false;
				button23->Visible = false;
				button24->Visible = false;
				dataGridView7->Visible = false;
				button25->Visible = false;
				button26->Visible = false;
				button27->Visible = false;
				button28->Visible = false;
				dataGridView8->Visible = false;
				button29->Visible = false;
				button32->Visible = false;
				button30->Visible = true;
				button31->Visible = false;
				button33->Visible = false;
				button34->Visible = false;
				button35->Visible = false;
				button36->Visible = false;
				button37->Visible = true;
				button38->Visible = false;
			}

			private: System::Void Электросамокаты50ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
			{
				MessageBox::Show(this, "Здесь вы можете наблюдать таблицу для заполнения с самокатами максимальная скорость которых 50 кмч.\nЧто бы вывести таблицу самокатов нажмите <<Загрузить>>. Что бы добавть данные, заполните соответствующие поля, выделите строку по крайнему левому столбцу и нажмите <<Добавить>>.\nЧто бы изменить данные в строке, перезапишите данные в ячейках, выделите строку по крайнему левому столбцу и нажмите на кнопку <<Обновить>>.\nДля того, что бы удалить данные, выделите строку по крайнему левому столбцу и нажмите на кнопку <<Удалить>>.\nДля того, что добавить товар в корзину,выделите строку по крайнему левому столбцу и нажмите на кнопку <<Добавить в корзину>>", "Message", MessageBoxButtons::OK, MessageBoxIcon::Information);

				dataGridView1->Visible = false;
				button1->Visible = false;
				button2->Visible = false;
				button3->Visible = false;
				button4->Visible = false;
				dataGridView2->Visible = true;
				button5->Visible = true;
				button6->Visible = true;
				button7->Visible = true;
				button8->Visible = true;
				dataGridView3->Visible = false;
				button9->Visible = false;
				button10->Visible = false;
				button11->Visible = false;
				button12->Visible = false;
				dataGridView4->Visible = false;
				button13->Visible = false;
				button14->Visible = false;
				button15->Visible = false;
				button16->Visible = false;
				dataGridView5->Visible = false;
				button17->Visible = false;
				button18->Visible = false;
				button19->Visible = false;
				button20->Visible = false;
				dataGridView6->Visible = false;
				button21->Visible = false;
				button22->Visible = false;
				button23->Visible = false;
				button24->Visible = false;
				dataGridView7->Visible = false;
				button25->Visible = false;
				button26->Visible = false;
				button27->Visible = false;
				button28->Visible = false;
				dataGridView8->Visible = false;
				button29->Visible = false;
				button32->Visible = false;
				button30->Visible = false;
				button31->Visible = true;
				button33->Visible = false;
				button34->Visible = false;
				button35->Visible = false;
				button36->Visible = false;
				button37->Visible = false;
				button38->Visible = false;
			}

			private: System::Void Электросамокаты75ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
			{
				MessageBox::Show(this, "Здесь вы можете наблюдать таблицу для заполнения с самокатами максимальная скорость которых 75 кмч.\nЧто бы вывести таблицу самокатов нажмите <<Загрузить>>. Что бы добавть данные, заполните соответствующие поля, выделите строку по крайнему левому столбцу и нажмите <<Добавить>>.\nЧто бы изменить данные в строке, перезапишите данные в ячейках, выделите строку по крайнему левому столбцу и нажмите на кнопку <<Обновить>>.\nДля того, что бы удалить данные, выделите строку по крайнему левому столбцу и нажмите на кнопку <<Удалить>>.\nДля того, что добавить товар в корзину,выделите строку по крайнему левому столбцу и нажмите на кнопку <<Добавить в корзину>>", "Message", MessageBoxButtons::OK, MessageBoxIcon::Information);

				dataGridView1->Visible = false;
				button1->Visible = false;
				button2->Visible = false;
				button3->Visible = false;
				button4->Visible = false;
				dataGridView2->Visible = false;
				button5->Visible = false;
				button6->Visible = false;
				button7->Visible = false;
				button8->Visible = false;
				dataGridView3->Visible = false;
				button9->Visible = false;
				button10->Visible = false;
				button11->Visible = false;
				button12->Visible = false;
				dataGridView4->Visible = false;
				button13->Visible = false;
				button14->Visible = false;
				button15->Visible = false;
				button16->Visible = false;
				dataGridView5->Visible = false;
				button17->Visible = false;
				button18->Visible = false;
				button19->Visible = false;
				button20->Visible = false;
				dataGridView6->Visible = true;
				button21->Visible = true;
				button22->Visible = true;
				button23->Visible = true;
				button24->Visible = true;
				dataGridView7->Visible = false;
				button25->Visible = false;
				button26->Visible = false;
				button27->Visible = false;
				button28->Visible = false;
				dataGridView8->Visible = false;
				button29->Visible = false;
				button32->Visible = false;
				button30->Visible = false;
				button31->Visible = false;
				button33->Visible = true;
				button34->Visible = false;
				button35->Visible = false;
				button36->Visible = false;
				button37->Visible = false;
				button38->Visible = false;
			}

			private: System::Void Электросамокаты100ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
			{
				MessageBox::Show(this, "Здесь вы можете наблюдать таблицу для заполнения с самокатами максимальная скорость которых 100 кмч.\nЧто бы вывести таблицу самокатов нажмите <<Загрузить>>. Что бы добавть данные, заполните соответствующие поля, выделите строку по крайнему левому столбцу и нажмите <<Добавить>>.\nЧто бы изменить данные в строке, перезапишите данные в ячейках, выделите строку по крайнему левому столбцу и нажмите на кнопку <<Обновить>>.\nДля того, что бы удалить данные, выделите строку по крайнему левому столбцу и нажмите на кнопку <<Удалить>>.\nДля того, что добавить товар в корзину,выделите строку по крайнему левому столбцу и нажмите на кнопку <<Добавить в корзину>>", "Message", MessageBoxButtons::OK, MessageBoxIcon::Information);

				dataGridView1->Visible = false;
				button1->Visible = false;
				button2->Visible = false;
				button3->Visible = false;
				button4->Visible = false;
				dataGridView2->Visible = false;
				button5->Visible = false;
				button6->Visible = false;
				button7->Visible = false;
				button8->Visible = false;
				dataGridView3->Visible = false;
				button9->Visible = false;
				button10->Visible = false;
				button11->Visible = false;
				button12->Visible = false;
				dataGridView4->Visible = false;
				button13->Visible = false;
				button14->Visible = false;
				button15->Visible = false;
				button16->Visible = false;
				dataGridView5->Visible = false;
				button17->Visible = false;
				button18->Visible = false;
				button19->Visible = false;
				button20->Visible = false;
				dataGridView6->Visible = false;
				button21->Visible = false;
				button22->Visible = false;
				button23->Visible = false;
				button24->Visible = false;
				dataGridView7->Visible = true;
				button25->Visible = true;
				button26->Visible = true;
				button27->Visible = true;
				button28->Visible = true;
				dataGridView8->Visible = false;
				button29->Visible = false;
				button32->Visible = false;
				button30->Visible = false;
				button31->Visible = false;
				button33->Visible = false;
				button34->Visible = true;
				button35->Visible = false;
				button36->Visible = false;
				button37->Visible = false;
				button38->Visible = false;
			}

			private: System::Void колесаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
			{
				MessageBox::Show(this, "Здесь вы можете наблюдать таблицу для заполнения с колёсами для электросамокатов.\nЧто бы вывести таблицу самокатов нажмите <<Загрузить>>. Что бы добавть данные, заполните соответствующие поля, выделите строку по крайнему левому столбцу и нажмите <<Добавить>>.\nЧто бы изменить данные в строке, перезапишите данные в ячейках, выделите строку по крайнему левому столбцу и нажмите на кнопку <<Обновить>>.\nДля того, что бы удалить данные, выделите строку по крайнему левому столбцу и нажмите на кнопку <<Удалить>>.\nДля того, что добавить товар в корзину,выделите строку по крайнему левому столбцу и нажмите на кнопку <<Добавить в корзину>>", "Message", MessageBoxButtons::OK, MessageBoxIcon::Information);

				dataGridView1->Visible = false;
				button1->Visible = false;
				button2->Visible = false;
				button3->Visible = false;
				button4->Visible = false;
				dataGridView2->Visible = false;
				button5->Visible = false;
				button6->Visible = false;
				button7->Visible = false;
				button8->Visible = false;
				dataGridView3->Visible = true;
				button9->Visible = true;
				button10->Visible = true;
				button11->Visible = true;
				button12->Visible = true;
				dataGridView4->Visible = false;
				button13->Visible = false;
				button14->Visible = false;
				button15->Visible = false;
				button16->Visible = false;
				dataGridView5->Visible = false;
				button17->Visible = false;
				button18->Visible = false;
				button19->Visible = false;
				button20->Visible = false;
				dataGridView6->Visible = false;
				button21->Visible = false;
				button22->Visible = false;
				button23->Visible = false;
				button24->Visible = false;
				dataGridView7->Visible = false;
				button25->Visible = false;
				button26->Visible = false;
				button27->Visible = false;
				button28->Visible = false;
				dataGridView8->Visible = false;
				button29->Visible = false;
				button32->Visible = false;
				button30->Visible = false;
				button31->Visible = false;
				button33->Visible = false;
				button34->Visible = false;
				button35->Visible = true;
				button36->Visible = false;
				button37->Visible = false;
				button38->Visible = false;
			}

			private: System::Void ТормозаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
			{
				MessageBox::Show(this, "Здесь вы можете наблюдать таблицу для заполнения с тормозной системой для электросамокатов.\nЧто бы вывести таблицу самокатов нажмите <<Загрузить>>. Что бы добавть данные, заполните соответствующие поля, выделите строку по крайнему левому столбцу и нажмите <<Добавить>>.\nЧто бы изменить данные в строке, перезапишите данные в ячейках, выделите строку по крайнему левому столбцу и нажмите на кнопку <<Обновить>>.\nДля того, что бы удалить данные, выделите строку по крайнему левому столбцу и нажмите на кнопку <<Удалить>>.\nДля того, что добавить товар в корзину,выделите строку по крайнему левому столбцу и нажмите на кнопку <<Добавить в корзину>>", "Message", MessageBoxButtons::OK, MessageBoxIcon::Information);

				dataGridView1->Visible = false;
				button1->Visible = false;
				button2->Visible = false;
				button3->Visible = false;
				button4->Visible = false;
				dataGridView2->Visible = false;
				button5->Visible = false;
				button6->Visible = false;
				button7->Visible = false;
				button8->Visible = false;
				dataGridView3->Visible = false;
				button9->Visible = false;
				button10->Visible = false;
				button11->Visible = false;
				button12->Visible = false;
				dataGridView4->Visible = true;
				button13->Visible = true;
				button14->Visible = true;
				button15->Visible = true;
				button16->Visible = true;
				dataGridView5->Visible = false;
				button17->Visible = false;
				button18->Visible = false;
				button19->Visible = false;
				button20->Visible = false;
				dataGridView6->Visible = false;
				button21->Visible = false;
				button22->Visible = false;
				button23->Visible = false;
				button24->Visible = false;
				dataGridView7->Visible = false;
				button25->Visible = false;
				button26->Visible = false;
				button27->Visible = false;
				button28->Visible = false;
				dataGridView8->Visible = false;
				button29->Visible = false;
				button32->Visible = false;
				button30->Visible = false;
				button31->Visible = false;
				button33->Visible = false;
				button34->Visible = false;
				button35->Visible = false;
				button36->Visible = true;
				button37->Visible = false;
				button38->Visible = false;
			}

			private: System::Void ГазToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
			{
				MessageBox::Show(this, "Здесь вы можете наблюдать таблицу для заполнения с утройствами регулировки газа для электросамоката.\nЧто бы вывести таблицу самокатов нажмите <<Загрузить>>. Что бы добавть данные, заполните соответствующие поля, выделите строку по крайнему левому столбцу и нажмите <<Добавить>>.\nЧто бы изменить данные в строке, перезапишите данные в ячейках, выделите строку по крайнему левому столбцу и нажмите на кнопку <<Обновить>>.\nДля того, что бы удалить данные, выделите строку по крайнему левому столбцу и нажмите на кнопку <<Удалить>>.\nДля того, что добавить товар в корзину,выделите строку по крайнему левому столбцу и нажмите на кнопку <<Добавить в корзину>>", "Message", MessageBoxButtons::OK, MessageBoxIcon::Information);

				dataGridView1->Visible = false;
				button1->Visible = false;
				button2->Visible = false;
				button3->Visible = false;
				button4->Visible = false;
				dataGridView2->Visible = false;
				button5->Visible = false;
				button6->Visible = false;
				button7->Visible = false;
				button8->Visible = false;
				dataGridView3->Visible = false;
				button9->Visible = false;
				button10->Visible = false;
				button11->Visible = false;
				button12->Visible = false;
				dataGridView4->Visible = false;
				button13->Visible = false;
				button14->Visible = false;
				button15->Visible = false;
				button16->Visible = false;
				dataGridView5->Visible = true;
				button17->Visible = true;
				button18->Visible = true;
				button19->Visible = true;
				button20->Visible = true;
				dataGridView6->Visible = false;
				button21->Visible = false;
				button22->Visible = false;
				button23->Visible = false;
				button24->Visible = false;
				dataGridView7->Visible = false;
				button25->Visible = false;
				button26->Visible = false;
				button27->Visible = false;
				button28->Visible = false;
				dataGridView8->Visible = false;
				button29->Visible = false;
				button32->Visible = false;
				button30->Visible = false;
				button31->Visible = false;
				button33->Visible = false;
				button34->Visible = false;
				button35->Visible = false;
				button36->Visible = false;
				button37->Visible = true;
				button38->Visible = false;
			}

			private: System::Void корзинаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
			{				MessageBox::Show(this, "Здесь вы можете наблюдать корзину.\nЧто бы вывести данные корзины нажмите <<Загрузить>>.\nДля того, что бы удалить данные, выделите строку по крайнему левому столбцу и нажмите на кнопку <<Удалить>>.", "Message", MessageBoxButtons::OK, MessageBoxIcon::Information);

				dataGridView1->Visible = false;
				button1->Visible = false;
				button2->Visible = false;
				button3->Visible = false;
				button4->Visible = false;
				dataGridView2->Visible = false;
				button5->Visible = false;
				button6->Visible = false;
				button7->Visible = false;
				button8->Visible = false;
				dataGridView3->Visible = false;
				button9->Visible = false;
				button10->Visible = false;
				button11->Visible = false;
				button12->Visible = false;
				dataGridView4->Visible = false;
				button13->Visible = false;
				button14->Visible = false;
				button15->Visible = false;
				button16->Visible = false;
				dataGridView5->Visible = false;
				button17->Visible = false;
				button18->Visible = false;
				button19->Visible = false;
				button20->Visible = false;
				dataGridView6->Visible = false;
				button21->Visible = false;
				button22->Visible = false;
				button23->Visible = false;
				button24->Visible = false;
				dataGridView7->Visible = false;
				button25->Visible = false;
				button26->Visible = false;
				button27->Visible = false;
				button28->Visible = false;
				dataGridView8->Visible = true;
				button29->Visible = true;
				button32->Visible = true;
				button30->Visible = false;
				button31->Visible = false;
				button33->Visible = false;
				button34->Visible = false;
				button35->Visible = false;
				button36->Visible = false;
				button37->Visible = false;
				button38->Visible = false;
			}

			private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e);

			private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e);

			private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e);

			private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e);

			private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e);

			private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e);

			private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e);

			private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e);

			private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e);

			private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e);

			private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e);

			private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e);

			private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e);

			private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e);

			private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e);

			private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e);

			private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e);

			private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e);

			private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e);

			private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e);

			private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e);

			private: System::Void button26_Click(System::Object^ sender, System::EventArgs^ e);

			private: System::Void button27_Click(System::Object^ sender, System::EventArgs^ e);

			private: System::Void button28_Click(System::Object^ sender, System::EventArgs^ e);

			private: System::Void button29_Click(System::Object^ sender, System::EventArgs^ e);

			private: System::Void button32_Click(System::Object^ sender, System::EventArgs^ e);

			private: System::Void button30_Click(System::Object^ sender, System::EventArgs^ e);

			private: System::Void button37_Click(System::Object^ sender, System::EventArgs^ e){}

			private: System::Void button36_Click(System::Object^ sender, System::EventArgs^ e) {
			}

			private: System::Void button35_Click(System::Object^ sender, System::EventArgs^ e) {
			}

			private: System::Void button34_Click(System::Object^ sender, System::EventArgs^ e) {
			}

			private: System::Void button33_Click(System::Object^ sender, System::EventArgs^ e) {
			}

			private: System::Void button31_Click(System::Object^ sender, System::EventArgs^ e) {
			}
			private: System::Void button38_Click(System::Object^ sender, System::EventArgs^ e) 
			{
				MessageBox::Show(this, "Здравствуйте!\nВас приветствует приложение Your Electric Skooter!\nВ этом приложении вы можете добавлять, удалять и изменять записи в таблицах,\nДанное приложение создано для упрощения работы магазина по продаже електросамокатов.\nВ левом верхнем углу экрана вы можете увидеть <<Меню>>.\nЧто бы начать работу с приложением вам нужно нажать на кнопку <<Меню>>,\nпосле чего вы увидите список таблиц которые во можете использовать.\nНажмите на кнопку <<Электросамокаты 25кмч>>.", "Message", MessageBoxButtons::OK, MessageBoxIcon::Information);

			}
};
		}