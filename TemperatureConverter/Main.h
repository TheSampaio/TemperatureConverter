#pragma once

namespace TemperatureConverter {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Main
	/// </summary>
	public ref class Main : public System::Windows::Forms::Form
	{
	public:
		Main(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Main()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txt_input;
	private: System::Windows::Forms::RadioButton^ rtn_celInput;
	private: System::Windows::Forms::RadioButton^ rtn_fahInput;
	private: System::Windows::Forms::RadioButton^ rtn_kelInput;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txt_output;
	private: System::Windows::Forms::RadioButton^ rtn_fahOutput;
	private: System::Windows::Forms::RadioButton^ rtn_kelOutput;
	private: System::Windows::Forms::RadioButton^ rtn_celOutput;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Button^ btn_clear;
	private: System::Windows::Forms::Button^ btn_calculate;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::RichTextBox^ rxt_console;
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Main::typeid));
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txt_input = (gcnew System::Windows::Forms::TextBox());
			this->rtn_fahInput = (gcnew System::Windows::Forms::RadioButton());
			this->rtn_kelInput = (gcnew System::Windows::Forms::RadioButton());
			this->rtn_celInput = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txt_output = (gcnew System::Windows::Forms::TextBox());
			this->rtn_fahOutput = (gcnew System::Windows::Forms::RadioButton());
			this->rtn_kelOutput = (gcnew System::Windows::Forms::RadioButton());
			this->rtn_celOutput = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->btn_clear = (gcnew System::Windows::Forms::Button());
			this->btn_calculate = (gcnew System::Windows::Forms::Button());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->rxt_console = (gcnew System::Windows::Forms::RichTextBox());
			this->flowLayoutPanel1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->SuspendLayout();
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Controls->Add(this->groupBox1);
			this->flowLayoutPanel1->Controls->Add(this->groupBox2);
			this->flowLayoutPanel1->Controls->Add(this->groupBox3);
			this->flowLayoutPanel1->Controls->Add(this->groupBox4);
			resources->ApplyResources(this->flowLayoutPanel1, L"flowLayoutPanel1");
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->txt_input);
			this->groupBox1->Controls->Add(this->rtn_fahInput);
			this->groupBox1->Controls->Add(this->rtn_kelInput);
			this->groupBox1->Controls->Add(this->rtn_celInput);
			resources->ApplyResources(this->groupBox1, L"groupBox1");
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->TabStop = false;
			// 
			// label1
			// 
			resources->ApplyResources(this->label1, L"label1");
			this->label1->Name = L"label1";
			// 
			// txt_input
			// 
			resources->ApplyResources(this->txt_input, L"txt_input");
			this->txt_input->Name = L"txt_input";
			// 
			// rtn_fahInput
			// 
			resources->ApplyResources(this->rtn_fahInput, L"rtn_fahInput");
			this->rtn_fahInput->Name = L"rtn_fahInput";
			this->rtn_fahInput->TabStop = true;
			this->rtn_fahInput->UseVisualStyleBackColor = true;
			// 
			// rtn_kelInput
			// 
			resources->ApplyResources(this->rtn_kelInput, L"rtn_kelInput");
			this->rtn_kelInput->Name = L"rtn_kelInput";
			this->rtn_kelInput->TabStop = true;
			this->rtn_kelInput->UseVisualStyleBackColor = true;
			// 
			// rtn_celInput
			// 
			resources->ApplyResources(this->rtn_celInput, L"rtn_celInput");
			this->rtn_celInput->Name = L"rtn_celInput";
			this->rtn_celInput->TabStop = true;
			this->rtn_celInput->UseVisualStyleBackColor = true;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->txt_output);
			this->groupBox2->Controls->Add(this->rtn_fahOutput);
			this->groupBox2->Controls->Add(this->rtn_kelOutput);
			this->groupBox2->Controls->Add(this->rtn_celOutput);
			resources->ApplyResources(this->groupBox2, L"groupBox2");
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->TabStop = false;
			// 
			// label2
			// 
			resources->ApplyResources(this->label2, L"label2");
			this->label2->Name = L"label2";
			// 
			// txt_output
			// 
			resources->ApplyResources(this->txt_output, L"txt_output");
			this->txt_output->Name = L"txt_output";
			// 
			// rtn_fahOutput
			// 
			resources->ApplyResources(this->rtn_fahOutput, L"rtn_fahOutput");
			this->rtn_fahOutput->Name = L"rtn_fahOutput";
			this->rtn_fahOutput->TabStop = true;
			this->rtn_fahOutput->UseVisualStyleBackColor = true;
			// 
			// rtn_kelOutput
			// 
			resources->ApplyResources(this->rtn_kelOutput, L"rtn_kelOutput");
			this->rtn_kelOutput->Name = L"rtn_kelOutput";
			this->rtn_kelOutput->TabStop = true;
			this->rtn_kelOutput->UseVisualStyleBackColor = true;
			// 
			// rtn_celOutput
			// 
			resources->ApplyResources(this->rtn_celOutput, L"rtn_celOutput");
			this->rtn_celOutput->Name = L"rtn_celOutput";
			this->rtn_celOutput->TabStop = true;
			this->rtn_celOutput->UseVisualStyleBackColor = true;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->btn_clear);
			this->groupBox3->Controls->Add(this->btn_calculate);
			resources->ApplyResources(this->groupBox3, L"groupBox3");
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->TabStop = false;
			// 
			// btn_clear
			// 
			resources->ApplyResources(this->btn_clear, L"btn_clear");
			this->btn_clear->Name = L"btn_clear";
			this->btn_clear->UseVisualStyleBackColor = true;
			this->btn_clear->Click += gcnew System::EventHandler(this, &Main::btn_clear_Click);
			// 
			// btn_calculate
			// 
			resources->ApplyResources(this->btn_calculate, L"btn_calculate");
			this->btn_calculate->Name = L"btn_calculate";
			this->btn_calculate->UseVisualStyleBackColor = true;
			this->btn_calculate->Click += gcnew System::EventHandler(this, &Main::btn_calculate_Click);
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->rxt_console);
			resources->ApplyResources(this->groupBox4, L"groupBox4");
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->TabStop = false;
			// 
			// rxt_console
			// 
			resources->ApplyResources(this->rxt_console, L"rxt_console");
			this->rxt_console->Name = L"rxt_console";
			// 
			// Main
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			resources->ApplyResources(this, L"$this");
			this->Controls->Add(this->flowLayoutPanel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Main";
			this->flowLayoutPanel1->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btn_calculate_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (txt_input->Text != "")
		{
			// Celsius to Fahrenheit
			if (rtn_celInput->Checked && rtn_fahOutput->Checked)
			{
				txt_output->Text = Convert::ToString((Convert::ToDouble(txt_input->Text) * 9 / 5) + 32);
				rxt_console->Text = "Successfully converted.";
			}

			// Celsius to Kelvin
			else if (rtn_celInput->Checked && rtn_kelOutput->Checked)
			{
				txt_output->Text = Convert::ToString((Convert::ToDouble(txt_input->Text) + 273.15));
				rxt_console->Text = "Successfully converted.";
			}

			// Fahrenheit to Celsius
			else if (rtn_fahInput->Checked && rtn_celOutput->Checked)
			{
				txt_output->Text = Convert::ToString((Convert::ToDouble(txt_input->Text) - 32) * 5 / 9);
				rxt_console->Text = "Successfully converted.";
			}

			// Fahrenheit to Kelvin
			else if (rtn_fahInput->Checked && rtn_kelOutput->Checked)
			{
				txt_output->Text = Convert::ToString((Convert::ToDouble(txt_input->Text) - 32) * 5 / 9 + 273.15);
				rxt_console->Text = "Successfully converted.";
			}

			// Kelvin to Celsius
			else if (rtn_kelInput->Checked && rtn_celOutput->Checked)
			{
				txt_output->Text = Convert::ToString(Convert::ToDouble(txt_input->Text) - 273.15);
				rxt_console->Text = "Successfully converted.";
			}

			// Kelvin to Fahrenheit
			else if (rtn_kelInput->Checked && rtn_fahOutput->Checked)
			{
				txt_output->Text = Convert::ToString((Convert::ToDouble(txt_input->Text) - 273.15) * 9 / 5 + 32);
				rxt_console->Text = "Successfully converted.";
			}

			else
			{
				rxt_console->Text = "Unable to cast the same temperature's type.";
			}
		}

		else
		{
			rxt_console->Text = "Please enter a temperature to be converted.";
		}
	}
private: System::Void btn_clear_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (txt_input->Text != "" || txt_output->Text != "")
	{
		txt_input->Text = "";
		txt_output->Text = "";
		rxt_console->Text = "";

		rtn_celInput->Checked = false;
		rtn_celOutput->Checked = false;

		rtn_fahInput->Checked = false;
		rtn_fahOutput->Checked = false;

		rtn_kelInput->Checked = false;
		rtn_kelOutput->Checked = false;
	}
}
};
}
