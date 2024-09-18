#pragma once

#include "Sort.h"
#include <msclr\marshal_cppstd.h>

namespace Очередьформа 
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	int size;
	string str;
	int flag = 0;
	int* mem;
	Sort A(mem, size);

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
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DataGridView^ dataGridView1;

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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBox1->Location = System::Drawing::Point(170, 22);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(828, 20);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBox2->Location = System::Drawing::Point(170, 74);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(828, 20);
			this->textBox2->TabIndex = 1;
			this->textBox2->Text = L" ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(79, 74);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(63, 26);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Вывод";
			// 
			// button1
			// 
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(1024, 22);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(95, 37);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Go";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(1024, 74);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(95, 37);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Step";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(1024, 148);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(95, 37);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Next step";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Visible = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(26, 22);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(116, 26);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Массив чисел";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::Window;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->ColumnHeadersVisible = false;
			this->dataGridView1->Cursor = System::Windows::Forms::Cursors::Default;
			this->dataGridView1->EditMode = System::Windows::Forms::DataGridViewEditMode::EditOnEnter;
			this->dataGridView1->GridColor = System::Drawing::SystemColors::Desktop;
			this->dataGridView1->Location = System::Drawing::Point(21, 148);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->RowHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 4;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->dataGridView1->RowsDefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView1->Size = System::Drawing::Size(977, 396);
			this->dataGridView1->TabIndex = 8;
			this->dataGridView1->Visible = false;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick_1);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
			this->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->ClientSize = System::Drawing::Size(1131, 556);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		void rasdel(string str, int& k, int* w) 
		{
			k = 0;
			str = str + " ";
			while (str.size() > 0) 
			{
				int l = static_cast<int>(str.find(" "));
				if (l > 0) 
				{
					w[k++] = stoi(str.substr(0, l));
				}

				str.erase(0, l + 1);
			}
		}

		void cleardataGrid(int size) 
		{
			if (size > 0) 
			{
				dataGridView1->RowCount = 0;
				dataGridView1->ColumnCount = 0;
				dataGridView1->RowTemplate->Height = 687 / (size + 1);
				dataGridView1->RowCount = size + 1;
				dataGridView1->ColumnCount = 10;
			}
		}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
{
	size = 0;
	int* mem = new int[100];
	int* res;

	str = msclr::interop::marshal_as<std::string>(textBox1->Text);
	rasdel(str, size, mem);
	Sort A(mem, size);
	A.allStep();
	res = A.GetMem();
	str = "";
	for (int i = 0; i < size; i++) 
	{
		str += to_string(res[i]) + " ";
	}

	textBox2->Text = gcnew String(str.c_str());
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
{
	   button3->Visible = TRUE;
	   dataGridView1->Visible = TRUE;
	   label3->Visible = TRUE;

	   size = 0;
	   flag = 0;

	   int* mem = new int[100];
	   str = msclr::interop::marshal_as<std::string>(textBox1->Text);
	   rasdel(str, size, mem);

	   A = Sort(mem, size);

	   cleardataGrid(size);

	   for (int i = 0; i < 10; i++) 
	   {
		   dataGridView1->Rows[0]->Cells[i]->Value = gcnew String(to_string(i).c_str());
	   }
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (flag % 2 == 0) 
	{
		cleardataGrid(size);

		for (int i = 0; i < 10; i++) 
		{
			dataGridView1->Rows[0]->Cells[i]->Value = gcnew String(to_string(i).c_str());
		}

		A.step1(flag/2);
		flag++;
		QueueC tmp;

		for (int i = 0; i < 10; i++) 
		{
			tmp = A.GetQueueC(i);
			int j = 1;
			while (!tmp.is_empty()) 
			{
				str = to_string(tmp.pop());
				dataGridView1->Rows[j++]->Cells[i]->Value = gcnew String(str.c_str());
			}
		}
	}
	else 
	{
		cleardataGrid(size);
		for (int i = 0; i < 10; i++) 
		{
			dataGridView1->Rows[0]->Cells[i]->Value = gcnew String(to_string(i).c_str());
		}
		A.step2();
		str = "";
		int* mem = A.GetMem();
		for (int i = 0; i < size; i++) 
		{
			str += to_string(mem[i]) + " ";
		}
		textBox2->Text = gcnew String(str.c_str());
		flag++;
	}
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}

private: System::Void dataGridView1_CellContentClick_1(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
};
}
