#pragma once
#include "MyForm1.h"
#include "MyForm2.h"
#include "MyForm3.h"
#include <map>
#include <string>
#include <cmath>
namespace Coursework {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	public: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;

	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ textBox1;
	public:
	private:
		double gamma;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
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
			this->menuStrip1->Size = System::Drawing::Size(734, 24);
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
			this->фильтр1ToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->фильтр1ToolStripMenuItem->Text = L"Фильтр 1";
			this->фильтр1ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::фильтр1ToolStripMenuItem_Click);
			// 
			// фильтр2ToolStripMenuItem
			// 
			this->фильтр2ToolStripMenuItem->Name = L"фильтр2ToolStripMenuItem";
			this->фильтр2ToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->фильтр2ToolStripMenuItem->Text = L"Фильтр 2";
			this->фильтр2ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::фильтр2ToolStripMenuItem_Click);
			// 
			// фильтр3ToolStripMenuItem
			// 
			this->фильтр3ToolStripMenuItem->Name = L"фильтр3ToolStripMenuItem";
			this->фильтр3ToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->фильтр3ToolStripMenuItem->Text = L"Фильтр 3";
			this->фильтр3ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::фильтр3ToolStripMenuItem_Click);
			// 
			// фильтр4ToolStripMenuItem
			// 
			this->фильтр4ToolStripMenuItem->Name = L"фильтр4ToolStripMenuItem";
			this->фильтр4ToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->фильтр4ToolStripMenuItem->Text = L"Фильтр 4";
			this->фильтр4ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::фильтр4ToolStripMenuItem_Click);
			// 
			// фильтр5ToolStripMenuItem
			// 
			this->фильтр5ToolStripMenuItem->Name = L"фильтр5ToolStripMenuItem";
			this->фильтр5ToolStripMenuItem->Size = System::Drawing::Size(180, 22);
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
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(20, 376);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(131, 31);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Размер изображения";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(157, 376);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(335, 31);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Координаты пиксела, значения красного, зеленого, синего";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(508, 376);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(214, 17);
			this->checkBox1->TabIndex = 5;
			this->checkBox1->Text = L"Применить к половине изображения";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
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
			// textBox1
			// 
			this->textBox1->AllowDrop = true;
			this->textBox1->Location = System::Drawing::Point(508, 32);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(214, 321);
			this->textBox1->TabIndex = 2;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(734, 413);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Bitmap^ img1;
		// Открыть
private: System::Void открытьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		//создаем CLI объект с помощью конструктора, принимающего на вход имя файла
		//и возвращаем с помощью gcnew указатель (^) на CLI объект
		img1 = gcnew Bitmap(openFileDialog1->FileName);

		//создаем CLI объект с помощью конструктора, принимающего на вход размер //картинки
		//и возвращаем с помощью gcnew указатель (^) на CLI объект 
		//в отличие от предыдущего конструктора, данный конструктор создает только //заголовок объекта (размер картинки)
		//никакие графические данные не создаются!

		//Bitmap^ img2 = gcnew Bitmap(img1->Width, img1->Height);
		pictureBox1->Image = img1;
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
	//MyForm2^ f2 = gcnew MyForm2();
	//f2->Show();
	////double gamma = f2->getGamma();
	//f2->textBox1->Text = textBox1->Text + Convert::ToString(gamma);
	//Bitmap^ img2 = gcnew Bitmap(img1->Width, img1->Height);
	////проходим по каждому пикселю изображения
	//for (int i = 0; i < img1->Width; i++)
	//{
	//	for (int j = 0; j < img1->Height; j++)
	//	{
	//		//в обект типа Color сохраняем значение цвета пикселя из первого изображения
	//		Color cl1 = img1->GetPixel(i, j);
	//		//инициализируем второй объект типа Color тремя значениями 
	//		// (R, G, B)
	//		float new_red = pow(cl1.R, gamma);
	//		float new_green = pow(cl1.G, gamma);
	//		float new_blue = pow(cl1.B, gamma);
	//		Color cl2 = Color::FromArgb(new_red, new_green, new_blue);
	//		//записываем в соответствующий пиксель второго изображения      
	//		//новый цвет
	//		img2->SetPixel(i, j, cl2);
	//	}
	//	pictureBox1->Image = img2;
	//}
}
	   // Фильтр 3.3 Поворот изображения на 180 градусов
private: System::Void фильтр3ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
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
}
	//Фильтр 5.1 МАСШТАБИРОВАНИЕ ИЗОБРАЖЕНИЯ МЕТОДОМ БЛИЖАЙШЕГО СОСЕДА(Уменьшение масштаба по вертикали)
private: System::Void фильтр5ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	// Окно, в которое мы вводим масштаб в процентах от первоначального изображения
	/*MyForm3^ f3 = gcnew MyForm3();
	f3->Show();
	double scale = f3->scale;*/

	//map <string, Color> matrix;
	double scale = 80;
	int height = ceil((img1->Height) * scale / 100);  //img1->Height;
	Bitmap^ img2 = gcnew Bitmap(img1->Width, height);
	float mean;
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
			img2->SetPixel(i, int(j*scale/100), new_p);
			j++;
		}
		//for (int j = 0; j < img1->Height; j++)
		//{

		//	for (int i = 0; i < ceil(100 / scale); i++)
		//	{
		//		matrix[string("p" + i)] = img1->GetPixel(i, j);
		//	}

		//	/* Компоненты */
		//	int red = (p1.R + p2.R + p3.R + p4.R)/4;
		//	int green = (p1.G + p2.G + p3.G + p4.G)/4;
		//	int blue = (p1.B + p2.B + p3.B + p4.B)/4;

		//	Color new_p = Color::FromArgb(red, green, blue);

		//	img2->SetPixel(i, j, new_p);
		//}
	}
	pictureBox1->Image = img2;
	//int h, w;
	//float t, u;
	//float tmp;
	//float d1, d2, d3, d4;
	//Color p1, p2, p3, p4;	

	///* Окрестные пикселы */
	//int red, green, blue;

	//if (height % 2 == 0)
	//{
	//	for (int j = 0; j < img1->Height - 2; j += 2) {
	//		tmp = j * (float)(img2->Height - 1) / (float)(img1->Height - 1);
	//		h = tmp;
	//		/*if (h < 0) {
	//			h = 0;
	//		}
	//		else {
	//			if (h >= img1->Height - 1) {
	//				h = img1->Height - 2;
	//			}
	//		}*/
	//		u = tmp - h;

	//		for (int i = 0; i < img1->Width - 2; i++) {

	//			t = 0;

	//			/* Коэффициенты */
	//			d1 = (1 - t) * (1 - u);
	//			d2 = t * (1 - u);
	//			d3 = t * u;
	//			d4 = (1 - t) * u;

	//			/* Окрестные пиксели: a[i][j] */
	//			p1 = img1->GetPixel(i, j);
	//			p2 = img1->GetPixel(i, j + 1);
	//			p3 = img1->GetPixel(i + 1, j + 1);
	//			p4 = img1->GetPixel(i + 1, j);

	//			/* Компоненты */
	//			red = p1.R * d1 + p2.R * d2 + p3.R * d3 + p4.R * d4;
	//			green = p1.G * d1 + p2.G * d2 + p3.G * d3 + p4.G * d4;
	//			blue = p1.B * d1 + p2.B * d2 + p3.B * d3 + p4.B * d4;

	//			Color cl = Color::FromArgb(red, green, blue);
	//			/* Новый пиксел из R G B  */
	//			img2->SetPixel(i, j, cl);

	//		}
	//	}
	//	pictureBox1->Image = img2;
	//}
	//else
	//{
	//	textBox1->Text = textBox1->Text + "NO";
	//}
}
		
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void файлToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}



private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {

}
	   //Текстовое поле(выполняется при вводе текста)
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
