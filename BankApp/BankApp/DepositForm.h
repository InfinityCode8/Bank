#pragma once

namespace BankApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ?????? ??? DepositForm
	/// </summary>
	public ref class DepositForm : public System::Windows::Forms::Form
	{
		Account^ loginAccount;
		AccountRepository^ accRepo = gcnew AccountRepository();
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;
		   HistoryRepository^ hisRepo = gcnew HistoryRepository();
		   DepositRepository^ depRepo = gcnew DepositRepository();
	public:
		DepositForm(void)
		{
			InitializeComponent();
			//
			//TODO: ???????? ??? ????????????
			//
		}
		property Account^ LoginAccount
		{
			Account^ get() 
			{
				return loginAccount;
			}
			void set(Account^ acc) 
			{
				loginAccount = acc;
			}
		}
	protected:
		/// <summary>
		/// ?????????? ??? ???????????? ???????.
		/// </summary>
		~DepositForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ comboBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::Button^ button1;

	private:
		/// <summary>
		/// ???????????? ?????????? ????????????.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ????????? ????? ??? ????????? ???????????? ? ?? ????????? 
		/// ?????????? ????? ?????? ? ??????? ????????? ????.
		/// </summary>
		void InitializeComponent(void)
		{
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(99, 123);
			this->comboBox1->MaxLength = 16;
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(216, 34);
			this->comboBox1->TabIndex = 0;
			this->comboBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &DepositForm::comboBox1_KeyPress);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(99, 197);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(216, 39);
			this->textBox1->TabIndex = 1;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &DepositForm::comboBox1_KeyPress);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(99, 87);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(138, 23);
			this->label1->TabIndex = 2;
			this->label1->Text = L"??????? ??????";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(99, 171);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 23);
			this->label2->TabIndex = 3;
			this->label2->Text = L"????";
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton1->Location = System::Drawing::Point(99, 13);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(181, 27);
			this->radioButton1->TabIndex = 4;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"³?????? ???????";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &DepositForm::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton2->Location = System::Drawing::Point(99, 46);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(132, 27);
			this->radioButton2->TabIndex = 5;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"??????????";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &DepositForm::radioButton2_CheckedChanged);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(143, 330);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(124, 58);
			this->button1->TabIndex = 6;
			this->button1->Text = L"????????";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &DepositForm::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(99, 249);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(151, 23);
			this->label3->TabIndex = 8;
			this->label3->Text = L"ʳ??????? ???????";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(99, 275);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(216, 39);
			this->textBox2->TabIndex = 7;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &DepositForm::comboBox1_KeyPress);
			// 
			// DepositForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(421, 400);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->comboBox1);
			this->Name = L"DepositForm";
			this->Text = L"DepositForm";
			this->Load += gcnew System::EventHandler(this, &DepositForm::DepositForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void DepositForm_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		if (loginAccount->Cards != nullptr)
		{
			for (int i = 0; i < loginAccount->Cards->Count; ++i)
			{
				comboBox1->Items->Add(loginAccount->Cards[i]->CardNumber);
			}
		}
	}
	private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		textBox1->Visible = !radioButton2->Checked;
		comboBox1->Visible = !radioButton2->Checked;
		textBox2->Visible = !radioButton2->Checked;

		label1->Visible = !radioButton2->Checked;
		label2->Visible = !radioButton2->Checked;
		label3->Visible = !radioButton2->Checked;

		if (radioButton1->Checked) 
		{
			label1->Text = "?????:";
			label2->Text = "????:";
			label3->Text = "ʳ??????? ???????:";
		}
		

	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		try {
			if (radioButton1->Checked)
			{
				int index = comboBox1->SelectedIndex;
				double sum = Convert::ToDouble(textBox1->Text);
				Deposit^ oldDepo = depRepo->GetDepositByLogin(loginAccount->Login);
				if (oldDepo == nullptr) {
					if (sum <= loginAccount->Cards[index]->Balance)
					{
						Deposit^ depo = gcnew Deposit();
						depo->Login = loginAccount->Login;
						depo->Month = Convert::ToInt32(textBox2->Text);
						depo->Sum = sum;
						depo->CalculateInterestRate();
						loginAccount->Cards[index]->Balance -= sum;
						depRepo->Create(depo);
						MessageBox::Show("??????? ????????!");
						this->Close();
					}
					else
					{
						MessageBox::Show("??????????? ??????!", "?????!", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}
				}
				else
				{
					MessageBox::Show("? ??? ??? ? ????????? ???????", "?????!", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}
			else if (radioButton2->Checked) 
			{
				Deposit^ oldDepo = depRepo->GetDepositByLogin(loginAccount->Login);
				if (oldDepo != nullptr) 
				{
					label1->Visible = radioButton2->Checked;
					label2->Visible = radioButton2->Checked;
					label3->Visible = radioButton2->Checked;

					label1->Text = "???????? ????: " + oldDepo->Sum.ToString() + " ???";
					label2->Text = "ʳ??????? ???????: " + oldDepo->Month;
					label3->Text = "????????? ??????: " + oldDepo->InterestRate.ToString()+" %";
				}
				else
				{
					MessageBox::Show("? ??? ????? ?????????? ????????", "?????!", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}
		
		}
		catch(...)
		{

		}
	}
	private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
	{

	}
private: System::Void comboBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if ((e->KeyChar >= '0' && e->KeyChar <= '9') || e->KeyChar == 8)
		e->Handled = false;
	else
		e->Handled = true;
}
};
}
