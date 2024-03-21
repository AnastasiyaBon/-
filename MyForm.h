#pragma once
#include <string>
#include <iostream>
#include <msclr/marshal.h>
#include <msclr/marshal_windows.h>
#include <msclr/marshal_cppstd.h>
#include <map>


namespace Project1 {


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
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(36, -1);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1020, 583);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(40, 248);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox1->Size = System::Drawing::Size(409, 50);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(40, 399);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox2->Size = System::Drawing::Size(409, 50);
			this->textBox2->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::MediumPurple;
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Location = System::Drawing::Point(127, 471);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(218, 43);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Перевести";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(423, 217);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(26, 25);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 4;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &MyForm::pictureBox2_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(423, 368);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(26, 25);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 5;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &MyForm::pictureBox3_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1052, 577);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
		 private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			 //объявляем переменные в которую будет записываться строка и в которую будет выводиться готовая строка
		   std::string inputText = msclr::interop::marshal_as<std::string>(textBox1->Text);
		   std::string outputText;
			//функция перевода текста
		   std::string translateToMorse(std::string inputText, std::string outputText); {
			   setlocale(LC_ALL, "Russian");
			   std::map<char, std::string> morseAlphabet = {
					  {'а', ".-"}, {'б', "-..."}, {'в', ".--"}, {'г', "--."}, {'д', "-.."}, {'е', "."}, {'ё', "."}, {'ж', "...-"}, {'з', "--.."}, {'и', ".."}, {'й', ".---"}, {'к', "-.-"}, {'л', ".-.."}, {'м', "--"}, {'н', "-."}, {'о', "---"}, {'п', ".--."}, {'р', ".-."}, {'с', "..."}, {'т', "-"}, {'у', "..-"}, {'ф', "..-."}, {'х', "...."}, {'ц', "-.-."}, {'ч', "---."}, {'ш', "----"}, {'щ', "--.-"}, {'ъ', ".--.-."}, {'ы', "-.--"},
					  {'ь', "-..-"}, {'э', "..-.."}, {'ю', ".--"}, {'я', ".-.-"}, {' ', "/"}
			   };

			   outputText = "";
			   for (size_t i = 0; i < inputText.size(); ++i) {
				   char c = inputText[i];
				   if (morseAlphabet.find(tolower(c)) != morseAlphabet.end()) {
					   outputText += morseAlphabet[tolower(c)] + " ";
				   }
				   else if (c == ' ') {
					   outputText += " ";
				   }
			   }

		   }
		
			//вносим результат функции в переменную и выводим в виджет
		   textBox2->Text = gcnew System::String(outputText.c_str());
		 }

		private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
			//записываем текст в переменную
			String^ copyText = (textBox1->Text);
			//записываем переменную с текстом в буфер обмена
			Clipboard::SetText(copyText);
			//выводим окно успеха
			MessageBox::Show("Текст успешно скопирован в буфер обмена", "Успех", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
			  

		private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
			//записываем текст в переменную
			String^ copyText = (textBox2->Text);
			//записываем переменную с текстом в буфер обмена
			Clipboard::SetText(copyText);
			//выводим окно успеха
			MessageBox::Show("Текст успешно скопирован в буфер обмена", "Успех", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
};
}
