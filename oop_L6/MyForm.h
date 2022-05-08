#pragma once
#include <msclr/marshal.h>
#include "Table.h"
using namespace msclr::interop;
Table T(10);

namespace oopL6 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: ‰Ó·‡‚¸ÚÂ ÍÓ‰ ÍÓÌÒÚÛÍÚÓ‡
			//
		}

	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ Ù‡ÈÎToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ÒÓı‡ÌËÚ¸ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ÓÚÍ˚Ú¸ToolStripMenuItem;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Colomn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::ComponentModel::IContainer^ components;
	protected:
	private:
		
#pragma region Windows Form Designer generated code
		
		void InitializeComponent(void)
		{
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Colomn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->Ù‡ÈÎToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ÒÓı‡ÌËÚ¸ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ÓÚÍ˚Ú¸ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->Colomn1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7, this->Column8, this->Column9
			});
			this->dataGridView1->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->dataGridView1->Location = System::Drawing::Point(24, 46);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(1189, 283);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// Colomn1
			// 
			this->Colomn1->HeaderText = L"»Ïˇ ÙÓÚÓ„‡Ù‡";
			this->Colomn1->MinimumWidth = 6;
			this->Colomn1->Name = L"Colomn1";
			this->Colomn1->Width = 125;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Õ‡Á‚‡ÌËÂ ÛÒÎÛ„Ë";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 125;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"¬ÓÁ‡ÒÚ ÙÓÚÓ„‡Ù‡";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 125;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"ÕÓÏÂ Á‡Í‡Á‡";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 125;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L" ÓÎË˜ÂÒÚ‚Ó ÛÒÎÛ„";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->Width = 125;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"»Ïˇ Á‡Í‡Á˜ËÍ‡";
			this->Column6->MinimumWidth = 6;
			this->Column6->Name = L"Column6";
			this->Column6->Width = 125;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"‘‡ÏËÎËˇ Á‡Í‡Á˜ËÍ‡";
			this->Column7->MinimumWidth = 6;
			this->Column7->Name = L"Column7";
			this->Column7->Width = 125;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"ƒ‡Ú‡ ‚˚ÔÓÎÌÂÌËˇ Á‡Í‡Á‡";
			this->Column8->MinimumWidth = 6;
			this->Column8->Name = L"Column8";
			this->Column8->Width = 125;
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"—ÚÓËÏÓÒÚ¸ Á‡Í‡Á‡";
			this->Column9->MinimumWidth = 6;
			this->Column9->Name = L"Column9";
			this->Column9->Width = 125;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button1->Location = System::Drawing::Point(485, 548);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 43);
			this->button1->TabIndex = 1;
			this->button1->Text = L"ƒÓ·‡‚ËÚ¸";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button2->Location = System::Drawing::Point(606, 548);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 43);
			this->button2->TabIndex = 2;
			this->button2->Text = L"”‰‡ÎËÚ¸";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button3->Location = System::Drawing::Point(725, 548);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 43);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Õ‡ÈÚË";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button5->Location = System::Drawing::Point(969, 548);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(100, 43);
			this->button5->TabIndex = 5;
			this->button5->Text = L"«‡ÏÂÌËÚ¸";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button6->Location = System::Drawing::Point(1086, 548);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(100, 43);
			this->button6->TabIndex = 6;
			this->button6->Text = L"Œ˜ËÒÚËÚ¸";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(299, 353);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(153, 24);
			this->textBox1->TabIndex = 7;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label1->Location = System::Drawing::Point(137, 360);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(113, 17);
			this->label1->TabIndex = 8;
			this->label1->Text = L"»Ïˇ ÙÓÚÓ„‡Ù‡";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label2->Location = System::Drawing::Point(137, 401);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(118, 17);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Õ‡Á‚‡ÌËÂ ÛÒÎÛ„Ë";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label3->Location = System::Drawing::Point(137, 437);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(140, 17);
			this->label3->TabIndex = 10;
			this->label3->Text = L"¬ÓÁ‡ÒÚ ÙÓÚÓ„‡Ù‡";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label4->Location = System::Drawing::Point(137, 475);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(100, 17);
			this->label4->TabIndex = 11;
			this->label4->Text = L"ÕÓÏÂ Á‡Í‡Á‡";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label5->Location = System::Drawing::Point(504, 397);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(135, 17);
			this->label5->TabIndex = 12;
			this->label5->Text = L" ÓÎË˜ÂÒÚ‚Ó ÛÒÎÛ„";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label6->Location = System::Drawing::Point(504, 433);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(107, 17);
			this->label6->TabIndex = 13;
			this->label6->Text = L"»Ïˇ Á‡Í‡Á˜ËÍ‡";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label7->Location = System::Drawing::Point(504, 470);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(142, 17);
			this->label7->TabIndex = 14;
			this->label7->Text = L"‘‡ÏËÎËˇ Á‡Í‡Á˜ËÍ‡";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(117, 506);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(176, 17);
			this->label8->TabIndex = 15;
			this->label8->Text = L"ƒ‡Ú‡ ‚˚ÔÓÎÌÂÌËˇ Á‡Í‡Á‡";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(504, 356);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(127, 17);
			this->label9->TabIndex = 16;
			this->label9->Text = L"—ÚÓËÏÓÒÚ¸ Á‡Í‡Á‡";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(299, 394);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(153, 24);
			this->textBox2->TabIndex = 17;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(299, 430);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(153, 24);
			this->textBox3->TabIndex = 18;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(299, 468);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(153, 24);
			this->textBox4->TabIndex = 19;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(670, 392);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(147, 25);
			this->textBox5->TabIndex = 20;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(670, 429);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(147, 25);
			this->textBox6->TabIndex = 21;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(670, 467);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(147, 25);
			this->textBox7->TabIndex = 22;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(299, 499);
			this->textBox8->Multiline = true;
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(153, 24);
			this->textBox8->TabIndex = 23;
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->Ù‡ÈÎToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1237, 30);
			this->menuStrip1->TabIndex = 28;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// Ù‡ÈÎToolStripMenuItem
			// 
			this->Ù‡ÈÎToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ÒÓı‡ÌËÚ¸ToolStripMenuItem,
					this->ÓÚÍ˚Ú¸ToolStripMenuItem
			});
			this->Ù‡ÈÎToolStripMenuItem->Name = L"Ù‡ÈÎToolStripMenuItem";
			this->Ù‡ÈÎToolStripMenuItem->Size = System::Drawing::Size(59, 24);
			this->Ù‡ÈÎToolStripMenuItem->Text = L"&‘‡ÈÎ";
			// 
			// ÒÓı‡ÌËÚ¸ToolStripMenuItem
			// 
			this->ÒÓı‡ÌËÚ¸ToolStripMenuItem->Name = L"ÒÓı‡ÌËÚ¸ToolStripMenuItem";
			this->ÒÓı‡ÌËÚ¸ToolStripMenuItem->Size = System::Drawing::Size(166, 26);
			this->ÒÓı‡ÌËÚ¸ToolStripMenuItem->Text = L"—Óı‡ÌËÚ¸";
			this->ÒÓı‡ÌËÚ¸ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ÒÓı‡ÌËÚ¸ToolStripMenuItem_Click);
			// 
			// ÓÚÍ˚Ú¸ToolStripMenuItem
			// 
			this->ÓÚÍ˚Ú¸ToolStripMenuItem->Name = L"ÓÚÍ˚Ú¸ToolStripMenuItem";
			this->ÓÚÍ˚Ú¸ToolStripMenuItem->Size = System::Drawing::Size(166, 26);
			this->ÓÚÍ˚Ú¸ToolStripMenuItem->Text = L"ŒÚÍ˚Ú¸";
			this->ÓÚÍ˚Ú¸ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ÓÚÍ˚Ú¸ToolStripMenuItem_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button7->Location = System::Drawing::Point(851, 548);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(100, 43);
			this->button7->TabIndex = 29;
			this->button7->Text = L"œÓÍ‡Á‡Ú¸";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(670, 348);
			this->textBox9->Multiline = true;
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(147, 25);
			this->textBox9->TabIndex = 30;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ClientSize = System::Drawing::Size(1237, 603);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Zakaz";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();
		}
#pragma endregion
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
		   System::Void PrintGrid() {
			   dataGridView1->Rows->Clear();
			   int sz = T.get_count(); //T.v.getsize();
			   if (sz > 0)
			   {
				   dataGridView1->Rows->Add(sz);
				   dataGridView1->Rows[0]->Cells[0]->Selected = false;
				   for (int i = 0; i < sz; i++) {
					   char* t0 = T.v.v[i].photographer.returnch();
					   String^ managed0 = msclr::interop::marshal_as<String^>((const char*)t0);
					   dataGridView1->Rows[i]->Cells[0]->Value = Convert::ToString(managed0);

					   char* t1 = T.v.v[i].service.returnch();
					   String^ managed1 = msclr::interop::marshal_as<String^>((const char*)t1);
					   dataGridView1->Rows[i]->Cells[1]->Value = Convert::ToString(managed1);

					   int t2 = T.v.v[i].age;
					   dataGridView1->Rows[i]->Cells[2]->Value = t2;

					   int t3 = T.v.v[i].zaknumber;
					   dataGridView1->Rows[i]->Cells[3]->Value = t3;

					   int t4 = T.v.v[i].kol;
					   dataGridView1->Rows[i]->Cells[4]->Value = t4;

					   char* t5 = T.v.v[i].firstname.returnch();
					   String^ managed5 = msclr::interop::marshal_as<String^>((const char*)t5);
					   dataGridView1->Rows[i]->Cells[5]->Value = Convert::ToString(managed5);

					   char* t6 = T.v.v[i].secondname.returnch();
					   String^ managed6 = msclr::interop::marshal_as<String^>((const char*)t6);
					   dataGridView1->Rows[i]->Cells[6]->Value = Convert::ToString(managed6);

					   int d = T.v.v[i].date.get_day();
					   int m = T.v.v[i].date.get_month();
					   int y = T.v.v[i].date.get_year();
					   std::string str = std::to_string(d) + "." + std::to_string(m) + "." + std::to_string(y);
					   String^ managed7 = gcnew String(str.c_str());
					   dataGridView1->Rows[i]->Cells[7]->Value = managed7;

					   int t7 = T.v.v[i].price;
					   dataGridView1->Rows[i]->Cells[8]->Value = t7;
				   }
			   }
		   }
		   void ReadMF(int f)
		   {
			   char s[200];
			   sprintf(s, "%d", f);
			   FILE* FF = fopen(s, "r");
			   Zakaz* tmp = new  Zakaz();
			   tmp->input(FF);
			   T.insert(tmp);
		   }
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Zakaz* zak = new  Zakaz();

		String^ s0 = textBox1->Text;
		marshal_context^ marshal = gcnew marshal_context();
		const char* t0 = marshal->marshal_as<const char*>(s0);
		zak->photographer = MyString((char*)t0);
		delete marshal;

		String^ s1 = textBox2->Text;
		marshal_context^ marshal1 = gcnew marshal_context();
		const char* t1 = marshal1->marshal_as<const char*>(s1);
		zak->service = MyString((char*)t1);
		delete marshal1;

		int s2;
		s2 = Convert::ToInt32(textBox3->Text);
		zak->age = s2;

		int s3;
		s3 = Convert::ToInt32(textBox4->Text);
		zak->zaknumber = s3;

		int s4;
		s4 = Convert::ToInt32(textBox5->Text);
		zak->kol = s4;

		String^ s5 = textBox6->Text;
		marshal_context^ marshal2 = gcnew marshal_context();
		const char* t2 = marshal2->marshal_as<const char*>(s5);
		zak->firstname = MyString((char*)t2);
		delete marshal2;

		String^ s6 = textBox7->Text;
		marshal_context^ marshal3 = gcnew marshal_context();
		const char* t3 = marshal3->marshal_as<const char*>(s6);
		zak->secondname = MyString((char*)t3);
		delete marshal3;

		String^ s7 = textBox8->Text;
		array<String^>^ StringArray = s7->Split('.');
		zak->date.AddDays(Convert::ToInt32(StringArray[0]));
		zak->date.AddMonths(Convert::ToInt32(StringArray[1]) - 1);
		zak->date.AddYears(Convert::ToInt32(StringArray[2]) - 1);

		int s9;
		s9 = Convert::ToInt32(textBox9->Text);
		zak->price = s9;

		T.insert(zak);
		dataGridView1->Rows->Clear();

	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		PrintGrid();
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		T.clear();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		Zakaz* zak = new  Zakaz();

		String^ s0 = textBox1->Text;
		marshal_context^ marshal = gcnew marshal_context();
		const char* t0 = marshal->marshal_as<const char*>(s0);
		zak->photographer = MyString((char*)t0);
		delete marshal;

		String^ s1 = textBox2->Text;
		marshal_context^ marshal1 = gcnew marshal_context();
		const char* t1 = marshal1->marshal_as<const char*>(s1);
		zak->service = MyString((char*)t1);
		delete marshal1;

		int s2;
		s2 = Convert::ToInt32(textBox3->Text);
		zak->age = s2;

		int s3;
		s3 = Convert::ToInt32(textBox4->Text);
		zak->zaknumber = s3;

		int s4;
		s4 = Convert::ToInt32(textBox5->Text);
		zak->kol = s4;

		String^ s5 = textBox6->Text;
		marshal_context^ marshal2 = gcnew marshal_context();
		const char* t2 = marshal2->marshal_as<const char*>(s5);
		zak->firstname = MyString((char*)t2);
		delete marshal2;

		String^ s6 = textBox7->Text;
		marshal_context^ marshal3 = gcnew marshal_context();
		const char* t3 = marshal3->marshal_as<const char*>(s6);
		zak->secondname = MyString((char*)t3);
		delete marshal3;

		String^ s7 = textBox8->Text;
		array<String^>^ StringArray = s7->Split('.');
		zak->date.AddDays(Convert::ToInt32(StringArray[0]));
		zak->date.AddMonths(Convert::ToInt32(StringArray[1]) - 1);
		zak->date.AddYears(Convert::ToInt32(StringArray[2]) - 1);

		int s9;
		s9 = Convert::ToInt32(textBox9->Text);
		zak->price = s9;

		T.remove(zak);
		dataGridView1->Rows->Clear();
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		int i = 0;
		while (dataGridView1->Rows[i]->Selected == false)
		{
			i++;
		}
		char* d0 = T.v.v[i].photographer.returnch();

		char* d1 = T.v.v[i].service.returnch();

		int d2 = T.v.v[i].age;

		int d3 = T.v.v[i].zaknumber;

		int d4 = T.v.v[i].kol;

		char* d5 = T.v.v[i].firstname.returnch();

		char* d6 = T.v.v[i].secondname.returnch();

		int d = T.v.v[i].date.get_day();
		int m = T.v.v[i].date.get_month();
		int y = T.v.v[i].date.get_year();

		int d7 = T.v.v[i].price;
		Zakaz* zak2 = new  Zakaz(d0, d1, d2, d3, d4, d5, d6, T.v.v[i].date, d7);
		Zakaz* zak = new  Zakaz();

		String^ s0 = textBox1->Text;
		marshal_context^ marshal = gcnew marshal_context();
		const char* t0 = marshal->marshal_as<const char*>(s0);
		zak->photographer = MyString((char*)t0);
		delete marshal;

		String^ s1 = textBox2->Text;
		marshal_context^ marshal1 = gcnew marshal_context();
		const char* t1 = marshal1->marshal_as<const char*>(s1);
		zak->service = MyString((char*)t1);
		delete marshal1;

		int s2;
		s2 = Convert::ToInt32(textBox3->Text);
		zak->age = s2;

		int s3;
		s3 = Convert::ToInt32(textBox4->Text);
		zak->zaknumber = s3;

		int s4;
		s4 = Convert::ToInt32(textBox5->Text);
		zak->kol = s4;

		String^ s5 = textBox6->Text;
		marshal_context^ marshal2 = gcnew marshal_context();
		const char* t2 = marshal2->marshal_as<const char*>(s5);
		zak->firstname = MyString((char*)t2);
		delete marshal2;

		String^ s6 = textBox7->Text;
		marshal_context^ marshal3 = gcnew marshal_context();
		const char* t3 = marshal3->marshal_as<const char*>(s6);
		zak->secondname = MyString((char*)t3);
		delete marshal3;

		String^ s7 = textBox8->Text;
		array<String^>^ StringArray = s7->Split('.');
		zak->date.AddDays(Convert::ToInt32(StringArray[0]));
		zak->date.AddMonths(Convert::ToInt32(StringArray[1]) - 1);
		zak->date.AddYears(Convert::ToInt32(StringArray[2]) - 1);

		int s9;
		s9 = Convert::ToInt32(textBox9->Text);
		zak->price = s9;

		T.replace(zak2, zak);
		dataGridView1->Rows->Clear();

	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

		PrintGrid();

		Zakaz* zak = new  Zakaz();

		String^ s0 = textBox1->Text;
		marshal_context^ marshal = gcnew marshal_context();
		const char* t0 = marshal->marshal_as<const char*>(s0);
		zak->photographer = MyString((char*)t0);
		delete marshal;

		String^ s1 = textBox2->Text;
		marshal_context^ marshal1 = gcnew marshal_context();
		const char* t1 = marshal1->marshal_as<const char*>(s1);
		zak->service = MyString((char*)t1);
		delete marshal1;

		int s2;
		s2 = Convert::ToInt32(textBox3->Text);
		zak->age = s2;

		int s3;
		s3 = Convert::ToInt32(textBox4->Text);
		zak->zaknumber = s3;

		int s4;
		s4 = Convert::ToInt32(textBox5->Text);
		zak->kol = s4;

		String^ s5 = textBox6->Text;
		marshal_context^ marshal2 = gcnew marshal_context();
		const char* t2 = marshal2->marshal_as<const char*>(s5);
		zak->firstname = MyString((char*)t2);
		delete marshal2;

		String^ s6 = textBox7->Text;
		marshal_context^ marshal3 = gcnew marshal_context();
		const char* t3 = marshal3->marshal_as<const char*>(s6);
		zak->secondname = MyString((char*)t3);
		delete marshal3;

		String^ s7 = textBox8->Text;
		array<String^>^ StringArray = s7->Split('.');
		zak->date.AddDays(Convert::ToInt32(StringArray[0]));
		zak->date.AddMonths(Convert::ToInt32(StringArray[1]) - 1);
		zak->date.AddYears(Convert::ToInt32(StringArray[2]) - 1);


		int s9;
		s9 = Convert::ToInt32(textBox9->Text);
		zak->price = s9;
		int i = T.find(zak);
		if (i >= 0) {
			dataGridView1->Rows[i]->Selected = true;
		}
		else
		{
			MessageBox::Show("ÕÂ Ì‡È‰ÂÌÓ", "—ÓÓ·˘ÂÌËÂ", MessageBoxButtons::OK);
		}
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void ‰Ó·‡‚ËÚ¸ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void ÒÓı‡ÌËÚ¸ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		FILE* HEAD = fopen("HEAD.txt", "w");
		int COUNT = T.get_count();
		char s[200];
		sprintf(s, "%d", COUNT);
		fputs(s, HEAD);
		fputc('\n', HEAD);
		for (int i = 0; i < COUNT; i++) {
			char ss[50];
			sprintf(ss, "%d", i);
			fputs(ss, HEAD);
			fputc('\n', HEAD);
			FILE* f = fopen(ss, "w");
			T.getitem(i).output(f);
		}
		fclose(HEAD);
		MessageBox::Show("—Óı‡ÌÂÌÓ", "—ÓÓ·˘ÂÌËÂ", MessageBoxButtons::OK);
	}
	private: System::Void ÓÚÍ˚Ú¸ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		FILE* HEAD;
		char buf[50];
		int COUNT = 0;
		HEAD = fopen("HEAD.txt", "r");
		if (HEAD == NULL)
		{
			MessageBox::Show("ŒÚÒÛÚÒÚ‚Û˛Ú Ù‡ÈÎ˚", "—ÓÓ·˘ÂÌËÂ", MessageBoxButtons::OK);
		}
		else
		{
			COUNT = std::stoi(fgets(buf, 48, HEAD));
			for (int i = 0; i < COUNT; i++) {
				fgets(buf, 48, HEAD);
				int a = std::stoi(buf);
				ReadMF(a);
			}
			fclose(HEAD);
			MessageBox::Show("¬˚ÔÓÎÌÂÌÓ", "—ÓÓ·˘ÂÌËÂ", MessageBoxButtons::OK);
		}
	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}