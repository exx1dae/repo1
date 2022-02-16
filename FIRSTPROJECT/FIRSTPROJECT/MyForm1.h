#pragma once
#include <math.h>


namespace FIRSTPROJECT {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	protected:

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 104);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(169, 21);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Введите значение x:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(16, 128);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(165, 28);
			this->textBox1->TabIndex = 1;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm1::textBox1_KeyPress);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(460, 41);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(114, 21);
			this->label2->TabIndex = 2;
			this->label2->Text = L"результат z =";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(580, 41);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(165, 21);
			this->textBox2->TabIndex = 3;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(580, 82);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(165, 21);
			this->textBox3->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(284, 82);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(290, 21);
			this->label3->TabIndex = 4;
			this->label3->Text = L"округление в большую сторону i =";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(580, 126);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(165, 21);
			this->textBox4->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(273, 126);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(301, 21);
			this->label4->TabIndex = 6;
			this->label4->Text = L"округление в меньшую сторону m =";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(580, 172);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(165, 21);
			this->textBox5->TabIndex = 9;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(489, 172);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(85, 21);
			this->label5->TabIndex = 8;
			this->label5->Text = L"целое n =";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(580, 214);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(165, 21);
			this->textBox6->TabIndex = 11;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(489, 214);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(85, 21);
			this->label6->TabIndex = 10;
			this->label6->Text = L"целое k =";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(580, 257);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(165, 21);
			this->textBox7->TabIndex = 13;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(233, 257);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(341, 21);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Значение префиксного выражения ++k =";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(580, 300);
			this->textBox8->Multiline = true;
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(165, 21);
			this->textBox8->TabIndex = 15;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(224, 300);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(350, 21);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Значение постфиксного выражения n++ =";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(16, 446);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(153, 52);
			this->button1->TabIndex = 16;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(175, 446);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(153, 51);
			this->button2->TabIndex = 17;
			this->button2->Text = L"На главную";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(757, 558);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm1";
			this->Text = L"ЛР1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		double x, z;
		int k, i, m, n;
		x = Convert::ToDouble(textBox1->Text);
		z = sqrt(exp(fabs(sin(x)))) + (2 * log(3 * x)) - 0.1111111;
		k = z;
		i = ceil(z);
		m = floor(z);
		n = int(z);
		textBox2->Text = Convert::ToString(z);
		textBox3->Text = Convert::ToString(i);
		textBox4->Text = Convert::ToString(m);
		textBox5->Text = Convert::ToString(n);
		textBox6->Text = Convert::ToString(k);
		textBox7->Text = Convert::ToString(++k);
		textBox8->Text = Convert::ToString(n++);
	}
	private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!Char::IsDigit(e->KeyChar) && !(Char::IsControl(e->KeyChar))) {
			if (!(e->KeyChar.ToString() == "," && textBox1->Text->IndexOf(",") == -1) && !(e->KeyChar.ToString() == "-"))
				e->Handled = true;
			if (e->KeyChar.Equals((char)13))
				textBox2->Focus();

		}
	};
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Owner->Show();
		this->Close();
	}
};
}