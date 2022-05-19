#pragma once
#include "MyForm1.h"
#include "MyForm2.h"
#include "MyForm3.h"
#include <map>
#include <string>
#include <math.h>
#include <cstdlib>
namespace Coursework {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace System::Drawing::Drawing2D;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

		// Метод для того, чтобы можно было изменить текст в текстовом поле
		void setGamma(String^ text)
		{
			textBox1->Text = text;
		}



	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ файлToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ открытьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ сохранитьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ восстановитьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ выходToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ инструментыToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ фильтр1ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ фильтр2ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ фильтр3ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ фильтр4ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ фильтр5ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ видToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ увеличитьМасштабToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ уменьшитьМасштабToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ справкаToolStripMenuItem;
	private: System::Windows::Forms::PictureBox^ pictureBox1;



	public: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;

	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::Panel^ panel1;

	public:	double gamma = 1;
	public: int scale = 100;
	public: int operationNum;
	public: bool checkedFlag = 0;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox2;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->файлToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->открытьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сохранитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->восстановитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выходToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->инструментыToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->фильтр1ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->фильтр2ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->фильтр3ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->фильтр4ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->фильтр5ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->видToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->увеличитьМасштабToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->уменьшитьМасштабToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->справкаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->файлToolStripMenuItem,
					this->инструментыToolStripMenuItem, this->видToolStripMenuItem, this->справкаToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1062, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// файлToolStripMenuItem
			// 
			this->файлToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->открытьToolStripMenuItem,
					this->сохранитьToolStripMenuItem, this->восстановитьToolStripMenuItem, this->выходToolStripMenuItem
			});
			this->файлToolStripMenuItem->Name = L"файлToolStripMenuItem";
			this->файлToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->файлToolStripMenuItem->Text = L"Файл";
			this->файлToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::файлToolStripMenuItem_Click);
			// 
			// открытьToolStripMenuItem
			// 
			this->открытьToolStripMenuItem->Name = L"открытьToolStripMenuItem";
			this->открытьToolStripMenuItem->Size = System::Drawing::Size(149, 22);
			this->открытьToolStripMenuItem->Text = L"Открыть";
			this->открытьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::открытьToolStripMenuItem_Click);
			// 
			// сохранитьToolStripMenuItem
			// 
			this->сохранитьToolStripMenuItem->Name = L"сохранитьToolStripMenuItem";
			this->сохранитьToolStripMenuItem->Size = System::Drawing::Size(149, 22);
			this->сохранитьToolStripMenuItem->Text = L"Сохранить";
			this->сохранитьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::сохранитьToolStripMenuItem_Click);
			// 
			// восстановитьToolStripMenuItem
			// 
			this->восстановитьToolStripMenuItem->Name = L"восстановитьToolStripMenuItem";
			this->восстановитьToolStripMenuItem->Size = System::Drawing::Size(149, 22);
			this->восстановитьToolStripMenuItem->Text = L"Восстановить";
			this->восстановитьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::восстановитьToolStripMenuItem_Click);
			// 
			// выходToolStripMenuItem
			// 
			this->выходToolStripMenuItem->Name = L"выходToolStripMenuItem";
			this->выходToolStripMenuItem->Size = System::Drawing::Size(149, 22);
			this->выходToolStripMenuItem->Text = L"Выход";
			this->выходToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::выходToolStripMenuItem_Click);
			// 
			// инструментыToolStripMenuItem
			// 
			this->инструментыToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->фильтр1ToolStripMenuItem,
					this->фильтр2ToolStripMenuItem, this->фильтр3ToolStripMenuItem, this->фильтр4ToolStripMenuItem, this->фильтр5ToolStripMenuItem
			});
			this->инструментыToolStripMenuItem->Name = L"инструментыToolStripMenuItem";
			this->инструментыToolStripMenuItem->Size = System::Drawing::Size(95, 20);
			this->инструментыToolStripMenuItem->Text = L"Инструменты";
			// 
			// фильтр1ToolStripMenuItem
			// 
			this->фильтр1ToolStripMenuItem->Name = L"фильтр1ToolStripMenuItem";
			this->фильтр1ToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->фильтр1ToolStripMenuItem->Text = L"Фильтр 1";
			this->фильтр1ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::фильтр1ToolStripMenuItem_Click);
			// 
			// фильтр2ToolStripMenuItem
			// 
			this->фильтр2ToolStripMenuItem->Name = L"фильтр2ToolStripMenuItem";
			this->фильтр2ToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->фильтр2ToolStripMenuItem->Text = L"Фильтр 2";
			this->фильтр2ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::фильтр2ToolStripMenuItem_Click);
			// 
			// фильтр3ToolStripMenuItem
			// 
			this->фильтр3ToolStripMenuItem->Name = L"фильтр3ToolStripMenuItem";
			this->фильтр3ToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->фильтр3ToolStripMenuItem->Text = L"Фильтр 3";
			this->фильтр3ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::фильтр3ToolStripMenuItem_Click);
			// 
			// фильтр4ToolStripMenuItem
			// 
			this->фильтр4ToolStripMenuItem->Name = L"фильтр4ToolStripMenuItem";
			this->фильтр4ToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->фильтр4ToolStripMenuItem->Text = L"Фильтр 4";
			this->фильтр4ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::фильтр4ToolStripMenuItem_Click);
			// 
			// фильтр5ToolStripMenuItem
			// 
			this->фильтр5ToolStripMenuItem->Name = L"фильтр5ToolStripMenuItem";
			this->фильтр5ToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->фильтр5ToolStripMenuItem->Text = L"Фильтр 5";
			this->фильтр5ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::фильтр5ToolStripMenuItem_Click);
			// 
			// видToolStripMenuItem
			// 
			this->видToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->увеличитьМасштабToolStripMenuItem,
					this->уменьшитьМасштабToolStripMenuItem
			});
			this->видToolStripMenuItem->Name = L"видToolStripMenuItem";
			this->видToolStripMenuItem->Size = System::Drawing::Size(39, 20);
			this->видToolStripMenuItem->Text = L"Вид";
			// 
			// увеличитьМасштабToolStripMenuItem
			// 
			this->увеличитьМасштабToolStripMenuItem->Name = L"увеличитьМасштабToolStripMenuItem";
			this->увеличитьМасштабToolStripMenuItem->Size = System::Drawing::Size(191, 22);
			this->увеличитьМасштабToolStripMenuItem->Text = L"Увеличить масштаб";
			this->увеличитьМасштабToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::увеличитьМасштабToolStripMenuItem_Click);
			// 
			// уменьшитьМасштабToolStripMenuItem
			// 
			this->уменьшитьМасштабToolStripMenuItem->Name = L"уменьшитьМасштабToolStripMenuItem";
			this->уменьшитьМасштабToolStripMenuItem->Size = System::Drawing::Size(191, 22);
			this->уменьшитьМасштабToolStripMenuItem->Text = L"Уменьшить масштаб";
			this->уменьшитьМасштабToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::уменьшитьМасштабToolStripMenuItem_Click);
			// 
			// справкаToolStripMenuItem
			// 
			this->справкаToolStripMenuItem->Name = L"справкаToolStripMenuItem";
			this->справкаToolStripMenuItem->Size = System::Drawing::Size(65, 20);
			this->справкаToolStripMenuItem->Text = L"Справка";
			this->справкаToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::справкаToolStripMenuItem_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(4, 5);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(708, 503);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			this->pictureBox1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox1_MouseMove);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(508, 380);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(214, 17);
			this->checkBox1->TabIndex = 5;
			this->checkBox1->Text = L"Применить к половине изображения";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			this->checkBox1->CheckStateChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckStateChanged);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// panel1
			// 
			this->panel1->AutoScroll = true;
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(20, 27);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(479, 343);
			this->panel1->TabIndex = 7;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(17, 385);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(27, 13);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Size";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(102, 385);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 13);
			this->label2->TabIndex = 9;
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(180, 384);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 13);
			this->label3->TabIndex = 10;
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(261, 385);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 13);
			this->label4->TabIndex = 11;
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(341, 384);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 13);
			this->label5->TabIndex = 12;
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(416, 384);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(0, 13);
			this->label6->TabIndex = 13;
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(81, 385);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(15, 13);
			this->label7->TabIndex = 14;
			this->label7->Text = L"x:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(159, 385);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(15, 13);
			this->label8->TabIndex = 15;
			this->label8->Text = L"y:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(237, 385);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(18, 13);
			this->label9->TabIndex = 16;
			this->label9->Text = L"R:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(317, 385);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(18, 13);
			this->label10->TabIndex = 17;
			this->label10->Text = L"G:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(393, 384);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(17, 13);
			this->label11->TabIndex = 18;
			this->label11->Text = L"B:";
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(738, 32);
			this->chart1->Name = L"chart1";
			this->chart1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::None;
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(300, 300);
			this->chart1->TabIndex = 2;
			this->chart1->TabStop = false;
			this->chart1->Text = L"chart1";
			this->chart1->Customize += gcnew System::EventHandler(this, &MyForm::chart1_Customize);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Location = System::Drawing::Point(514, 32);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(200, 103);
			this->groupBox1->TabIndex = 19;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Параметр фильтра 1";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(119, 74);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Применить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(6, 32);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(188, 20);
			this->textBox1->TabIndex = 0;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Controls->Add(this->textBox2);
			this->groupBox2->Location = System::Drawing::Point(514, 141);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(200, 102);
			this->groupBox2->TabIndex = 2;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Параметр фильтра 2";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(119, 73);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Применить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(6, 32);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(188, 20);
			this->textBox2->TabIndex = 0;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1062, 412);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Bitmap^ img1;
		bool imageUploaded = false;
		int halfOfThePicture = 0;
		bool filter_5 = 0;
		bool filter_2 = 0;
		//Dictionary <double, double> f1 = gcnew Dictionary<double, double>();
		//ArrayList points = gcnew ArrayList();

		// Открыть
private: System::Void открытьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		//создаем CLI объект с помощью конструктора, принимающего на вход имя файла
		//и возвращаем с помощью gcnew указатель (^) на CLI объект
		img1 = gcnew Bitmap(openFileDialog1->FileName);
		imageUploaded = true;
		halfOfThePicture = img1->Width;

		//создаем CLI объект с помощью конструктора, принимающего на вход размер //картинки
		//и возвращаем с помощью gcnew указатель (^) на CLI объект 
		//в отличие от предыдущего конструктора, данный конструктор создает только //заголовок объекта (размер картинки)
		//никакие графические данные не создаются!

		//Bitmap^ img2 = gcnew Bitmap(img1->Width, img1->Height);
		pictureBox1->Image = img1;

		// Размер в пикселях(записываем в лейбл 1)
		label1->Text = img1->Width + "x" + img1->Height;
	}
}
	   //Сохранить
private: System::Void сохранитьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	SaveFileDialog^ saveDlg = gcnew SaveFileDialog();
	saveDlg->Filter = "Image Files(*.BMP;*.JPG;*.GIF)|*.BMP;*.JPG;*.GIF|All files (*.*)|*.*";
	if (System::Windows::Forms::DialogResult::OK == saveDlg->ShowDialog())
	{
		String^ fileName = saveDlg->FileName;
		// ...
	}
}
	   //Восстановить
private: System::Void восстановитьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	pictureBox1->Image = img1;
}
	   //Выход
private: System::Void выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Close();
}
	   // Увеличить масштаб
private: System::Void увеличитьМасштабToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

}
	   // Уменьшить масштаб
private: System::Void уменьшитьМасштабToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

}
	   //Справка
private: System::Void справкаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm1^ f2 = gcnew MyForm1();
	f2->Show();
}
	   //Фильтр 1.3 ИНВЕРСИЯ
private: System::Void фильтр1ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	operationNum = 1;
	groupBox1->Hide();
	groupBox2->Hide();

	Bitmap^ img2 = gcnew Bitmap(img1->Width, img1->Height);
	//проходим по каждому пикселю изображения
	for (int i = 0; i < img1->Width; i++)
	{
		for (int j = 0; j < img1->Height; j++)
		{
			//в обект типа Color сохраняем значение цвета пикселя из первого изображения
			Color cl1 = img1->GetPixel(i, j);
			//инициализируем второй объект типа Color тремя значениями 
			// (R, G, B)
			float new_red = 255 - cl1.R;
			float new_green = 255 - cl1.G;
			float new_blue = 255 - cl1.B;
			Color cl2 = Color::FromArgb(new_red, new_green, new_blue);
			//записываем в соответствующий пиксель второго изображения      
			//новый цвет
			img2->SetPixel(i, j, cl2);
		}
		pictureBox1->Image = img2;
	}

}
	   // Фильтр 2.1 ГАММА-КОРРЕКЦИЯ
private: System::Void фильтр2ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	operationNum = 2;
	groupBox1->Hide();
	groupBox2->Show();
	groupBox2->Text = "Введите значение гамма";
	// Остальной код выполняется при нажатии кнопки и описан в блоке обработки нажатия кнопки button2(ниже)
}
	// Кнопка подтверждения для фильтра 2 внутри groupBox2
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ gammaString = textBox1->Text;
	gamma = Convert::ToDouble(gammaString, System::Globalization::CultureInfo::GetCultureInfo("en-US"));


	//Преобразование текста в строку
	/*char* str;

	wchar_t array[] = textBox1->Text;

	wcstombs(str, array, 12);
	int counter = 0;
	for (int i = 0; i < sizeof(gammaString) / sizeof(gammaString[0]); i++)
	{
		while(gammaString[i].c_str() != ",")
	}*/


	//gamma = Convert::ToDouble(textBox1->Text);
	/*if(gammaString = )*/
	/*MyForm2^ f2 = gcnew MyForm2(gamma);
	f2->Show();*/
	//double gamma = f2->getGamma();
	//f2->textBox1->Text = textBox1->Text + Convert::ToString(gamma);
	Bitmap^ img2 = gcnew Bitmap(img1->Width, img1->Height);
	//f2.getGamma();
	//проходим по каждому пикселю изображения
	for (int i = 0; i < img1->Width; i++)
	{
		for (int j = 0; j < img1->Height; j++)
		{
			//в обект типа Color сохраняем значение цвета пикселя из первого изображения
			Color cl1 = img1->GetPixel(i, j);
			//инициализируем второй объект типа Color тремя значениями 
			// (R, G, B)
			double new_red = pow(cl1.R, gamma);
			double new_green = pow(cl1.G, gamma);
			double new_blue = pow(cl1.B, gamma);
			Color cl2 = Color::FromArgb(new_red, new_green, new_blue);
			//записываем в соответствующий пиксель второго изображения      
			//новый цвет
			img2->SetPixel(i, j, cl2);
		}
		pictureBox1->Image = img2;
	}
}









	   // Фильтр 3.3 Поворот изображения на 180 градусов
private: System::Void фильтр3ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	operationNum = 3;
	groupBox1->Hide();
	groupBox2->Hide();
	Bitmap^ img2 = gcnew Bitmap(img1->Width, img1->Height);
	//проходим по каждому пикселю изображения
	for (int i = 0; i < img1->Width; i++)
	{
		for (int j = 0; j < img1->Height; j++)
		{
			//в обект типа Color сохраняем значение цвета пикселя из первого изображения
			Color cl1 = img1->GetPixel(i, j);
			//инициализируем второй объект типа Color тремя значениями 
			// (R, G, B)
			
			//записываем в соответствующий пиксель второго изображения      
			//новый цвет
			img2->SetPixel(img1->Width - i - 1, img1->Height - j - 1, cl1);
		}
		pictureBox1->Image = img2;
	}
}





	   //Фильтр 4.3 ГИСТОГРАММА. Нормализация гистограммы
private: System::Void фильтр4ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	operationNum = 4;
	groupBox1->Hide();
	groupBox2->Hide();
	
}



	//Фильтр 5.1 МАСШТАБИРОВАНИЕ ИЗОБРАЖЕНИЯ МЕТОДОМ БЛИЖАЙШЕГО СОСЕДА(Уменьшение масштаба по вертикали)
private: System::Void фильтр5ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	operationNum = 5;
	groupBox1->Show();
	groupBox2->Hide();
	groupBox1->Text = "Введите количество процентов от первоначального размера";
	// Остальной код выполняется при нажатии кнопки и описан в блоке обработки нажатия кнопки button1(ниже)
}
// Кнопка подтверждения для фильтра 5 внутри groupBox1
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	scale = Convert::ToInt32(textBox1->Text);
	if (imageUploaded)
	{
		// Окно, в которое мы вводим масштаб в процентах от первоначального изображения
		/*MyForm3^ f3 = gcnew MyForm3(scale);
		f3->Show();*/
		if (scale != 100)
		{
			// Окно, в которое мы вводим масштаб в процентах от первоначального изображения
			int height = ceil((img1->Height) * scale);  //img1->Height;
			Bitmap^ img2 = gcnew Bitmap(img1->Width, height);
			//проходим по каждому пикселю изображения 1
			for (int i = 0; i < img1->Width; i++)
			{
				int j = 0;
				while (j < img1->Height)
				{
					/* Компоненты */
					int red;
					int green;
					int blue;
					Color p;
					int t = 1;
					while (t < ceil(100 / scale) + 1)
					{
						p = img1->GetPixel(i, j);
						red += p.R;
						green += p.G;
						blue += p.B;
						t++;
					}

					red /= t;
					red = int(red);
					//red %= 256;
					green /= t;
					green = int(green);
					//green %= 256;
					blue /= t;
					blue = int(blue);
					//blue %= 256;

					Color new_p = Color::FromArgb(red, green, blue);
					img2->SetPixel(i, int(j * scale / 100), new_p);
					j++;
				}
			}
			pictureBox1->Image = img2;
		}
	}
}

// Применить к половине изображения
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

}
	   // Изменение нажатия checkBox
private: System::Void checkBox1_CheckStateChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkedFlag)
	{
		halfOfThePicture *= 2;
		checkedFlag = 0;
	}
	else
	{
		halfOfThePicture /= 2;
		checkedFlag = 1;
	}
	if (imageUploaded)
	{
		Bitmap^ img2 = gcnew Bitmap(img1->Width, img1->Height);
		//Переносим правую половинку img1 на картинку img2
		for (int i = halfOfThePicture; i < img1->Width; i++)
		{
			for (int j = 0; j < img1->Height; j++)
			{
				//в обект типа Color сохраняем значение цвета пикселя из первого изображения
				Color cl1 = img1->GetPixel(i, j);
				img2->SetPixel(i, j, cl1);
			}
		}

		switch (operationNum)
		{
		case 1:
			//проходим по каждому пикселю изображения
			for (int i = 0; i < halfOfThePicture; i++)
			{
				for (int j = 0; j < img1->Height; j++)
				{
					//в обект типа Color сохраняем значение цвета пикселя из первого изображения
					Color cl1 = img1->GetPixel(i, j);
					//инициализируем второй объект типа Color тремя значениями 
					// (R, G, B)
					float new_red = 255 - cl1.R;
					float new_green = 255 - cl1.G;
					float new_blue = 255 - cl1.B;
					Color cl2 = Color::FromArgb(new_red, new_green, new_blue);
					//записываем в соответствующий пиксель второго изображения      
					//новый цвет
					img2->SetPixel(i, j, cl2);
				}
				pictureBox1->Image = img2;
			}
			break;
		case 2:
			gamma = 0.5;
			//f2.getGamma();
			//проходим по каждому пикселю изображения
			for (int i = 0; i < img1->Width; i++)
			{
				for (int j = 0; j < img1->Height; j++)
				{
					//в обект типа Color сохраняем значение цвета пикселя из первого изображения
					Color cl1 = img1->GetPixel(i, j);
					//инициализируем второй объект типа Color тремя значениями 
					// (R, G, B)
					double new_red = pow(cl1.R, gamma);
					double new_green = pow(cl1.G, gamma);
					double new_blue = pow(cl1.B, gamma);
					Color cl2 = Color::FromArgb(new_red, new_green, new_blue);
					//записываем в соответствующий пиксель второго изображения      
					//новый цвет
					img2->SetPixel(i, j, cl2);
				}
				pictureBox1->Image = img2;
			}
			break;
		case 3:
			//проходим по каждому пикселю изображения
			for (int i = 0; i < halfOfThePicture; i++)
			{
				for (int j = 0; j < img1->Height; j++)
				{
					//в обект типа Color сохраняем значение цвета пикселя из первого изображения
					Color cl1 = img1->GetPixel(i, j);
					//инициализируем второй объект типа Color тремя значениями 
					// (R, G, B)

					//записываем в соответствующий пиксель второго изображения      
					//новый цвет
					img2->SetPixel(halfOfThePicture - i - 1, img1->Height - j - 1, cl1);
				}
			}
			pictureBox1->Image = img2;
			break;
		case 4:

			break;
		case 5:
			if (scale != 100)
			{
				// Окно, в которое мы вводим масштаб в процентах от первоначального изображения
				int height = ceil((img1->Height) * scale);  //img1->Height;
				//img2 = gcnew Bitmap(halfOfThePicture, height);
				//проходим по каждому пикселю изображения 1
				for (int i = 0; i < halfOfThePicture; i++)
				{
					int j = 0;
					while (j < img1->Height)
					{
						/* Компоненты */
						int red;
						int green;
						int blue;
						Color p;
						int t = 1;
						while (t < ceil(100 / scale) + 1)
						{
							p = img1->GetPixel(i, j);
							red += p.R;
							green += p.G;
							blue += p.B;
							t++;
						}

						red /= t;
						red = int(red);
						//red %= 256;
						green /= t;
						green = int(green);
						//green %= 256;
						blue /= t;
						blue = int(blue);
						//blue %= 256;

						Color new_p = Color::FromArgb(red, green, blue);
						img2->SetPixel(i, int(j * scale / 100), new_p);
						j++;
					}
				}
				pictureBox1->Image = img2;
			}
			break;
		}
	}
}

private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void файлToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}

	   //Текстовое поле(выполняется при вводе текста)
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {

}
	   // Размеры в пикселях
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
	   // координата x
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {

}
	   // координата y
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {

}
	   // R
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {

}
	   // G
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {

}
	   // B
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {

}
	   //Если мы перемещаем мышью по pictureBox1
private: System::Void pictureBox1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	// проверка, что картинка загружена
	if (imageUploaded)
	{
		// проверка, что мы не выходим за пределы изображения
		if ((e->X > 0) && (e->X < img1->Width) &&
			(e->Y > 0) && (e->Y < img1->Height))
		{
			// координата x (записываем в лейбл 2)
			label2->Text = Convert::ToString(e->X);
			// координата y (записываем в лейбл 3)
			label3->Text = Convert::ToString(e->Y);

			Color current_p = img1->GetPixel(e->X, e->Y);
			// Записываем значения цветов в соответствующие лейблы
			label4->Text = Convert::ToString(current_p.R);
			label5->Text = Convert::ToString(current_p.G);
			label6->Text = Convert::ToString(current_p.B);
		}
	}
}
private: System::Void chart1_Customize(System::Object^ sender, System::EventArgs^ e) {
	/*for (int i = 0; i < 256; i++) 
	{
		chart1->Series->Add()
	}*/
}
};
}
