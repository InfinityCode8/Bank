#pragma once

namespace BankApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� CreditForm
	/// </summary>
	public ref class CreditForm : public System::Windows::Forms::Form
	{
		double maxCreditSum = 50000;
		List<Card^>^ cards;
		HistoryRepository^ repo = gcnew HistoryRepository();
	public:
		CreditForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}
		property List<Card^>^ Cards
		{
			List<Card^>^ get() {
				return cards;
			}
			void set(List<Card^>^ cards) {
				this->cards = cards;
			}
		}


	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~CreditForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RadioButton^ radioButton1;
	protected:
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton1->Location = System::Drawing::Point(81, 103);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(159, 27);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"������ �������";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton2->Location = System::Drawing::Point(81, 152);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(167, 27);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"�������� ������";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &CreditForm::radioButton2_CheckedChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(103, 254);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(124, 43);
			this->button1->TabIndex = 2;
			this->button1->Text = L"��������";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CreditForm::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(131, 212);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(193, 36);
			this->textBox2->TabIndex = 4;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &CreditForm::comboBox1_KeyPress);
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(66, 40);
			this->comboBox1->MaxLength = 16;
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(193, 34);
			this->comboBox1->TabIndex = 5;
			this->comboBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &CreditForm::comboBox1_KeyPress);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 218);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(102, 21);
			this->label1->TabIndex = 6;
			this->label1->Text = L"���� ������";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(66, 13);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(114, 19);
			this->label2->TabIndex = 7;
			this->label2->Text = L"������ ������";
			// 
			// CreditForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(336, 309);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Name = L"CreditForm";
			this->Text = L"CreditForm";
			this->Load += gcnew System::EventHandler(this, &CreditForm::CreditForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		try {
			int index = comboBox1->SelectedIndex;
			History^ badHistory=nullptr;
			List<History^>^ histories = repo->GetHistoriesByCardNumber(Cards[index]->CardNumber);
			if (histories->Count!=0) {
				for (int i = 0; i < histories->Count; ++i)
				{
					if (histories[i]->IsCredit) {			//�������� �������� ������� � �����������
						badHistory = histories[i];
					}
				}
			}
			if (radioButton1->Checked)
			{
				if (badHistory!=nullptr)
				{
					MessageBox::Show("�� �� ������ ������ ��� ������,\n��� �� �� �� �������� ������� ����", "�����!", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				else
				{
					double sum = Convert::ToDouble(textBox2->Text);
					if (sum <= maxCreditSum) 
					{
						Cards[index]->Balance += sum;

						History^ newHistory = gcnew History();
						newHistory->CardNumver = Cards[index]->CardNumber;
						newHistory->Date = DateTime::Today;
						newHistory->Operation = "������ ������� ";
						newHistory->Sum = sum;
						newHistory->IsCredit = true;
						repo->Create(newHistory);
						MessageBox::Show("������ ������ ������!", "�����!", MessageBoxButtons::OK);
					}
					else {
						MessageBox::Show("�������� ����! ����������� ���� ������� "+maxCreditSum.ToString()+" ���", "�����!", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}
				}

			}
			else if(radioButton2->Checked) 
			{
				if (badHistory != nullptr) 
				{
					if (Cards[index]->Balance >= badHistory->Sum) 
					{
						Cards[index]->Balance -= badHistory->Sum;
						badHistory->IsCredit = false;

						History^ newHistory = gcnew History();
						newHistory->CardNumver = Cards[index]->CardNumber;
						newHistory->Date = DateTime::Today;
						newHistory->Operation = "��������� ������� ";
						newHistory->Sum = badHistory->Sum;
						newHistory->IsCredit = false;
						repo->Create(newHistory);


						MessageBox::Show("������ ������ ��������! :)", "�����!", MessageBoxButtons::OK);

					}
					else
					{
						MessageBox::Show("����������� ����� ��� ��������� �������!", "�����!", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}
				}
				else 
				{
					MessageBox::Show("� ��� ���� �������!", "�����!", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}
			this->Close();
		}
		catch (Exception^e) 
		{
			MessageBox::Show(e->Message);
			MessageBox::Show("�� ������� �������� �������� � ���������,�������� ���������� �������� �����", "�����!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		label1->Visible = !radioButton2->Checked;
		textBox2->Visible = !radioButton2->Checked;
	}
private: System::Void CreditForm_Load(System::Object^ sender, System::EventArgs^ e) {
	if (Cards != nullptr)
	{
		for (int i = 0; i < Cards->Count; ++i)
		{
			comboBox1->Items->Add(Cards[i]->CardNumber);
		}
	}
}
private: System::Void comboBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if ((e->KeyChar >= '0' && e->KeyChar <= '9') || e->KeyChar == 8)
		e->Handled = false;
	else
		e->Handled = true;
}
};
}
