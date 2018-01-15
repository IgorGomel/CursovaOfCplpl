#pragma once
#include <string.h>

namespace FootballBase {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SQLite;
	using namespace System::Text;
	using namespace std;



	
	/// <summary>
	/// Сводка для Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	
	static SQLiteConnection^ conn = gcnew SQLiteConnection("DataSource=BaseChLeag.db;");
	public: Int64^ tempValueForTextYear;
		
	
    
	public :	 Form1(void)
		{
			 InitializeComponent();
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Form1()
		{
			
			if (components)
			{
				
				delete components;
				
			}

			
		}
	private: System::Windows::Forms::Button^  btAdd;
	protected: 

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textYear;
	private: System::Windows::Forms::TextBox^  textWinn;
	private: System::Windows::Forms::TextBox^  textFin;
	private: System::Windows::Forms::TextBox^  textScore;




	private: System::Windows::Forms::Button^  btDel;
	private: System::Windows::Forms::Button^  btChange;
	private: System::Windows::Forms::DataGridView^  dataGrView;







	private: System::Windows::Forms::CheckBox^  chBoxYear;
	private: System::Windows::Forms::CheckBox^  chBoxWinn;
	private: System::Windows::Forms::CheckBox^  chBoxFin;
	private: System::Windows::Forms::Button^  btSearch;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  btVisibleBase;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Year;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Winn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Finn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Score;


	protected: 

	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>

		
		void InitializeComponent(void)
		{
			this->btAdd = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textYear = (gcnew System::Windows::Forms::TextBox());
			this->textWinn = (gcnew System::Windows::Forms::TextBox());
			this->textFin = (gcnew System::Windows::Forms::TextBox());
			this->textScore = (gcnew System::Windows::Forms::TextBox());
			this->btDel = (gcnew System::Windows::Forms::Button());
			this->btChange = (gcnew System::Windows::Forms::Button());
			this->dataGrView = (gcnew System::Windows::Forms::DataGridView());
			this->Year = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Winn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Finn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Score = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->chBoxYear = (gcnew System::Windows::Forms::CheckBox());
			this->chBoxWinn = (gcnew System::Windows::Forms::CheckBox());
			this->chBoxFin = (gcnew System::Windows::Forms::CheckBox());
			this->btSearch = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->btVisibleBase = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGrView))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// btAdd
			// 
			this->btAdd->Location = System::Drawing::Point(234, 14);
			this->btAdd->Name = L"btAdd";
			this->btAdd->Size = System::Drawing::Size(75, 23);
			this->btAdd->TabIndex = 0;
			this->btAdd->Text = L"Додати";
			this->btAdd->UseVisualStyleBackColor = true;
			this->btAdd->Click += gcnew System::EventHandler(this, &Form1::btAdd_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(34, 14);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(75, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Рік розіграшу";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(34, 44);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(73, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Переможець";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(34, 72);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(51, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Фіналіст";
			this->label3->Click += gcnew System::EventHandler(this, &Form1::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(34, 98);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(48, 13);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Рахунок";
			// 
			// textYear
			// 
			this->textYear->Location = System::Drawing::Point(168, 14);
			this->textYear->Name = L"textYear";
			this->textYear->Size = System::Drawing::Size(54, 20);
			this->textYear->TabIndex = 5;
			// 
			// textWinn
			// 
			this->textWinn->Location = System::Drawing::Point(113, 44);
			this->textWinn->Name = L"textWinn";
			this->textWinn->Size = System::Drawing::Size(109, 20);
			this->textWinn->TabIndex = 6;
			// 
			// textFin
			// 
			this->textFin->Location = System::Drawing::Point(113, 69);
			this->textFin->Name = L"textFin";
			this->textFin->Size = System::Drawing::Size(109, 20);
			this->textFin->TabIndex = 7;
			// 
			// textScore
			// 
			this->textScore->Location = System::Drawing::Point(168, 98);
			this->textScore->Name = L"textScore";
			this->textScore->Size = System::Drawing::Size(54, 20);
			this->textScore->TabIndex = 8;
			// 
			// btDel
			// 
			this->btDel->Location = System::Drawing::Point(234, 53);
			this->btDel->Name = L"btDel";
			this->btDel->Size = System::Drawing::Size(75, 23);
			this->btDel->TabIndex = 9;
			this->btDel->Text = L"Видалити";
			this->btDel->UseVisualStyleBackColor = true;
			this->btDel->Click += gcnew System::EventHandler(this, &Form1::btDel_Click);
			// 
			// btChange
			// 
			this->btChange->Location = System::Drawing::Point(234, 93);
			this->btChange->Name = L"btChange";
			this->btChange->Size = System::Drawing::Size(75, 23);
			this->btChange->TabIndex = 10;
			this->btChange->Text = L"Змінити";
			this->btChange->UseVisualStyleBackColor = true;
			this->btChange->Click += gcnew System::EventHandler(this, &Form1::btChange_Click);
			// 
			// dataGrView
			// 
			this->dataGrView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGrView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {this->Year, this->Winn, 
				this->Finn, this->Score});
			this->dataGrView->Location = System::Drawing::Point(330, 12);
			this->dataGrView->Name = L"dataGrView";
			this->dataGrView->Size = System::Drawing::Size(416, 335);
			this->dataGrView->TabIndex = 11;
			this->dataGrView->RowEnter += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dataGrView_RowEnter);
			// 
			// Year
			// 
			this->Year->HeaderText = L"Рік ";
			this->Year->Name = L"Year";
			this->Year->Width = 50;
			// 
			// Winn
			// 
			this->Winn->HeaderText = L"Переможець";
			this->Winn->Name = L"Winn";
			this->Winn->Width = 130;
			// 
			// Finn
			// 
			this->Finn->HeaderText = L"Фіналіст";
			this->Finn->Name = L"Finn";
			this->Finn->Width = 130;
			// 
			// Score
			// 
			this->Score->HeaderText = L"Рахунок";
			this->Score->Name = L"Score";
			this->Score->Width = 60;
			// 
			// chBoxYear
			// 
			this->chBoxYear->AutoSize = true;
			this->chBoxYear->Location = System::Drawing::Point(13, 14);
			this->chBoxYear->Name = L"chBoxYear";
			this->chBoxYear->Size = System::Drawing::Size(15, 14);
			this->chBoxYear->TabIndex = 12;
			this->chBoxYear->UseVisualStyleBackColor = true;
			this->chBoxYear->CheckedChanged += gcnew System::EventHandler(this, &Form1::chBoxYear_CheckedChanged);
			// 
			// chBoxWinn
			// 
			this->chBoxWinn->AutoSize = true;
			this->chBoxWinn->Location = System::Drawing::Point(13, 43);
			this->chBoxWinn->Name = L"chBoxWinn";
			this->chBoxWinn->Size = System::Drawing::Size(15, 14);
			this->chBoxWinn->TabIndex = 13;
			this->chBoxWinn->UseVisualStyleBackColor = true;
			this->chBoxWinn->CheckedChanged += gcnew System::EventHandler(this, &Form1::chBoxWinn_CheckedChanged);
			// 
			// chBoxFin
			// 
			this->chBoxFin->AutoSize = true;
			this->chBoxFin->Location = System::Drawing::Point(13, 72);
			this->chBoxFin->Name = L"chBoxFin";
			this->chBoxFin->Size = System::Drawing::Size(15, 14);
			this->chBoxFin->TabIndex = 14;
			this->chBoxFin->UseVisualStyleBackColor = true;
			this->chBoxFin->CheckedChanged += gcnew System::EventHandler(this, &Form1::chBoxFin_CheckedChanged);
			// 
			// btSearch
			// 
			this->btSearch->Location = System::Drawing::Point(23, 29);
			this->btSearch->Name = L"btSearch";
			this->btSearch->Size = System::Drawing::Size(85, 23);
			this->btSearch->TabIndex = 15;
			this->btSearch->Text = L"Пошук";
			this->btSearch->UseVisualStyleBackColor = true;
			this->btSearch->Click += gcnew System::EventHandler(this, &Form1::btSearch_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->btVisibleBase);
			this->groupBox1->Controls->Add(this->btSearch);
			this->groupBox1->Location = System::Drawing::Point(170, 160);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(139, 118);
			this->groupBox1->TabIndex = 16;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Пошук даних";
			// 
			// btVisibleBase
			// 
			this->btVisibleBase->Location = System::Drawing::Point(23, 71);
			this->btVisibleBase->Name = L"btVisibleBase";
			this->btVisibleBase->Size = System::Drawing::Size(85, 35);
			this->btVisibleBase->TabIndex = 16;
			this->btVisibleBase->Text = L"Відобразити базу";
			this->btVisibleBase->UseVisualStyleBackColor = true;
			this->btVisibleBase->Click += gcnew System::EventHandler(this, &Form1::btVisibleBase_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(753, 359);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->chBoxFin);
			this->Controls->Add(this->chBoxWinn);
			this->Controls->Add(this->chBoxYear);
			this->Controls->Add(this->dataGrView);
			this->Controls->Add(this->btChange);
			this->Controls->Add(this->btDel);
			this->Controls->Add(this->textScore);
			this->Controls->Add(this->textFin);
			this->Controls->Add(this->textWinn);
			this->Controls->Add(this->textYear);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btAdd);
			this->Name = L"Form1";
			this->Text = L"База даних фінальних матчів Кубка Європейських Чемпіонів ";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &Form1::Form1_FormClosed);
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGrView))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
			 }

//кнопка додавання записів у базу
private: System::Void btAdd_Click(System::Object^  sender, System::EventArgs^  e) {
		 try
		  { 
			dataGrView->Rows->Add(Int64::Parse(textYear->Text), textWinn->Text, textFin->Text, textScore->Text);
            SQLiteCommand^ comm = gcnew SQLiteCommand("INSERT INTO AllFinals ('Year', 'Winner', 'Finalist', 'Score') VALUES ('" + textYear->Text + "', '" + textWinn->Text + "', '" + textFin->Text + "', '" + textScore->Text + "');", conn);
            comm->ExecuteNonQuery();
			dataGrView->Sort(dataGrView->Columns[0], ListSortDirection::Ascending);
			textYear->Clear();
			textWinn->Clear();
			textFin->Clear();
			textScore->Clear();
            //conn->Close();
		  }
		  catch (Exception^ e1)
            {
                MessageBox::Show(e1->Message, "Помилка!");
            }
		 }

private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		try
		{
			conn->Open();
			String^ queryString = "select * from AllFinals;"; 
             
			SQLiteCommand^ command = gcnew SQLiteCommand(queryString, conn);
			SQLiteDataReader^ reader = command->ExecuteReader();
			 
			//проходимось по рідеру і завантажуємо його рядки в DataGriedView
			while(reader->Read())
			{
				dataGrView->Rows->Add(reader["Year"], reader["Winner"], reader["Finalist"], reader["Score"]);
			}

			dataGrView->Sort(dataGrView->Columns[0], ListSortDirection::Ascending);
			textYear->Clear();
			textWinn->Clear();
			textFin->Clear();
			textScore->Clear();
		}
		catch (Exception^ e1)
            {
                MessageBox::Show(e1->Message, "Помилка читання даних!");
            }
		 }

   //видалення запису
private: System::Void btDel_Click(System::Object^  sender, System::EventArgs^  e) {	
		  try
		   { 
			int n = dataGrView->CurrentRow->Index;
            String^ queryString = "DELETE  from AllFinals WHERE Year='"+dataGrView[0, n]->Value->ToString()+"' AND Winner='"+dataGrView[1, n]->Value->ToString()+"'   ;"; 
			SQLiteCommand^ command = gcnew SQLiteCommand(queryString, conn);
			command->ExecuteReader();
            dataGrView->Rows->RemoveAt(dataGrView->CurrentRow->Index);
			textYear->Clear();
			textWinn->Clear();
			textFin->Clear();
			textScore->Clear();
		   }
		  catch (Exception^ e1)
            {
                MessageBox::Show(e1->Message, "Помилка!");
                
            }
		 }

	//ПОДІЯ присвоєння значень комірок виділеного запису текстбоксам
private: System::Void dataGrView_RowEnter(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
			dataGrView->SelectionMode = DataGridViewSelectionMode::FullRowSelect;//виділення всього рядка 
			int row = e->RowIndex;
			textYear->Text = dataGrView[0, row]->Value->ToString();
            textWinn->Text = dataGrView[1, row]->Value->ToString();
            textFin->Text = dataGrView[2, row]->Value->ToString();
            textScore->Text = dataGrView[3, row]->Value->ToString();
			tempValueForTextYear = Int64::Parse(textYear->Text);
		 }

//обробщик кнопки зміни значення запису
private: System::Void btChange_Click(System::Object^  sender, System::EventArgs^  e) { 
		  try
			{
				int row = dataGrView->CurrentRow->Index;
				dataGrView[0, row]->Value = Int64::Parse(textYear->Text);
				dataGrView[1, row]->Value = textWinn->Text;
				dataGrView[2, row]->Value = textFin->Text;
				dataGrView[3, row]->Value = textScore->Text;

				String^ queryString = "update AllFinals set Year='" + textYear->Text+"', Winner='" + textWinn->Text + "', Finalist='" + textFin->Text + "', Score='" + textScore->Text + "' where Year='" + tempValueForTextYear +"'; "; 
				SQLiteCommand^ command = gcnew SQLiteCommand(queryString, conn);
				command->ExecuteReader();
				dataGrView->Sort(dataGrView->Columns[0], ListSortDirection::Ascending);
				textYear->Clear();
				textWinn->Clear();
				textFin->Clear();
				textScore->Clear();
		  }
		  catch (Exception^ e1)
            {
                MessageBox::Show(e1->Message, "Помилка!");
                
            }
		 }

private: System::Void chBoxYear_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		  if (chBoxYear->Checked == true)
           {
            textYear->Clear();
			textWinn->Clear();
			textFin->Clear();
			textScore->Clear();

			chBoxWinn->Checked = false;
			chBoxFin->Checked = false;

			textWinn->Enabled = false;
			textFin->Enabled = false;
			textScore->Enabled = false;
           }
		  else
		  {
            textWinn->Enabled = true;
			textFin->Enabled = true;
			textScore->Enabled = true;
		  }
		 }

private: System::Void chBoxWinn_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		  if (chBoxWinn->Checked == true)
           {
            textYear->Clear();
			textWinn->Clear();
			textFin->Clear();
			textScore->Clear();

			chBoxYear->Checked = false;
			chBoxFin->Checked = false;

			textYear->Enabled = false;
			textFin->Enabled = false;
			textScore->Enabled = false;
           }
		  else
		  {
            textYear->Enabled = true;
			textFin->Enabled = true;
			textScore->Enabled = true;
		  }
		 }
private: System::Void chBoxFin_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		  if (chBoxFin->Checked == true)
           {
            textYear->Clear();
			textWinn->Clear();
			textFin->Clear();
			textScore->Clear();

			chBoxYear->Checked = false;
			chBoxWinn->Checked = false;

			textYear->Enabled = false;
			textWinn->Enabled = false;
			textScore->Enabled = false;
           }
		  else
		  {
            textYear->Enabled = true;
			textWinn->Enabled = true;
			textScore->Enabled = true;
		  }
		 }

//кнопка пошуку даних
private: System::Void btSearch_Click(System::Object^  sender, System::EventArgs^  e) {
			try
			 {
			  if (chBoxYear->Checked == true)
			  {
				 for (int i = 0; i < dataGrView->Rows->Count-1; i++)
				 {
					 if(textYear->Text != dataGrView[0, i]->Value->ToString())
						 dataGrView->Rows[i]->Visible = false;
				 }
			  }

			  if (chBoxWinn->Checked == true)
			  {
				  for (int i = 0; i < dataGrView->Rows->Count-1; i++)
				   {
					 if(textWinn->Text != dataGrView[1, i]->Value->ToString())
						 dataGrView->Rows[i]->Visible = false;
				   }
			  }

			  if (chBoxFin->Checked == true)
			  {
				  for (int i = 0; i < dataGrView->Rows->Count-1; i++)
				   {
					 if(textFin->Text != dataGrView[2, i]->Value->ToString())
						 dataGrView->Rows[i]->Visible = false;
				   }
			  }
			}
			catch (Exception^ e1)
            {
                MessageBox::Show(e1->Message, "Помилка!");
                
            }
		 }

//кнопка відображення записів таблиці
private: System::Void btVisibleBase_Click(System::Object^  sender, System::EventArgs^  e) {
			 try
			 {
			   for (int i = 0; i < dataGrView->Rows->Count-1; i++)
				 {
					 dataGrView->Rows[i]->Visible = true;
				 }
			   textYear->Clear();
    		   textWinn->Clear();
			   textFin->Clear();
			 }
			 catch (Exception^ e1)
             {
                MessageBox::Show(e1->Message, "Помилка!");
                
             }
		 }
private: System::Void Form1_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
			conn->Close();
		 }
};
}

