#pragma once

namespace TestChallehge {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Ñâîäêà äëÿ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòğóêòîğà
			//
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ğåñóğñû.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart;
	private: System::Windows::Forms::GroupBox^ gBgraph;
	private: System::Windows::Forms::GroupBox^ gBvariables;

	protected:


	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::Button^ yplus;
	private: System::Windows::Forms::Button^ yminus;
	private: System::Windows::Forms::Button^ xminus;



	private: System::Windows::Forms::Button^ xplus;
	private: System::Windows::Forms::Label^ phase;


	private: System::Windows::Forms::Label^ amplitude;






	private: System::Windows::Forms::ToolStripMenuItem^ ìåíşToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñîõğàíèòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ çàãğóçèòüToolStripMenuItem;


	private: System::Windows::Forms::ToolStripMenuItem^ âûõîäToolStripMenuItem;
	private: System::Windows::Forms::NumericUpDown^ numericF;
	private: System::Windows::Forms::NumericUpDown^ numericA;
	private: System::Windows::Forms::GroupBox^ groupBox_G;
	private: System::Windows::Forms::Button^ buttonStop;
	private: System::Windows::Forms::Button^ buttonStart;





	private: System::Windows::Forms::Label^ labelEnd;
	private: System::Windows::Forms::Label^ labelBegin;
	private: System::Windows::Forms::Timer^ timer1;

	private: System::Windows::Forms::NumericUpDown^ numericEnd;
	private: System::Windows::Forms::NumericUpDown^ numericBegin;
	private: System::Windows::Forms::Button^ buttonClear;
	private: System::Windows::Forms::ToolStripMenuItem^ MenuItemSaveAs;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;

	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;


	private: System::ComponentModel::IContainer^ components;


	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òğåáóåìûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà — íå èçìåíÿéòå 
		/// ñîäåğæèìîå ıòîãî ìåòîäà ñ ïîìîùüş ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::Title^ title4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			this->chart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->gBgraph = (gcnew System::Windows::Forms::GroupBox());
			this->yplus = (gcnew System::Windows::Forms::Button());
			this->yminus = (gcnew System::Windows::Forms::Button());
			this->xminus = (gcnew System::Windows::Forms::Button());
			this->xplus = (gcnew System::Windows::Forms::Button());
			this->gBvariables = (gcnew System::Windows::Forms::GroupBox());
			this->numericEnd = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericBegin = (gcnew System::Windows::Forms::NumericUpDown());
			this->labelEnd = (gcnew System::Windows::Forms::Label());
			this->numericF = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericA = (gcnew System::Windows::Forms::NumericUpDown());
			this->labelBegin = (gcnew System::Windows::Forms::Label());
			this->phase = (gcnew System::Windows::Forms::Label());
			this->amplitude = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ìåíşToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->MenuItemSaveAs = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñîõğàíèòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->çàãğóçèòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âûõîäToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBox_G = (gcnew System::Windows::Forms::GroupBox());
			this->buttonClear = (gcnew System::Windows::Forms::Button());
			this->buttonStop = (gcnew System::Windows::Forms::Button());
			this->buttonStart = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart))->BeginInit();
			this->gBgraph->SuspendLayout();
			this->gBvariables->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericEnd))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericBegin))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericF))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericA))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->groupBox_G->SuspendLayout();
			this->SuspendLayout();
			// 
			// chart
			// 
			chartArea2->AlignmentOrientation = static_cast<System::Windows::Forms::DataVisualization::Charting::AreaAlignmentOrientations>((System::Windows::Forms::DataVisualization::Charting::AreaAlignmentOrientations::Vertical | System::Windows::Forms::DataVisualization::Charting::AreaAlignmentOrientations::Horizontal));
			chartArea2->AlignmentStyle = System::Windows::Forms::DataVisualization::Charting::AreaAlignmentStyles::None;
			chartArea2->AxisX->ArrowStyle = System::Windows::Forms::DataVisualization::Charting::AxisArrowStyle::Triangle;
			chartArea2->AxisX->IntervalAutoMode = System::Windows::Forms::DataVisualization::Charting::IntervalAutoMode::VariableCount;
			chartArea2->AxisX->IsLabelAutoFit = false;
			chartArea2->AxisX->LabelAutoFitMaxFontSize = 6;
			chartArea2->AxisX->LabelStyle->Interval = 0;
			chartArea2->AxisX->LabelStyle->IntervalOffset = 0;
			chartArea2->AxisX->LabelStyle->IntervalOffsetType = System::Windows::Forms::DataVisualization::Charting::DateTimeIntervalType::Auto;
			chartArea2->AxisX->LabelStyle->IntervalType = System::Windows::Forms::DataVisualization::Charting::DateTimeIntervalType::Auto;
			chartArea2->AxisX->LabelStyle->IsEndLabelVisible = false;
			chartArea2->AxisX->LabelStyle->TruncatedLabels = true;
			chartArea2->AxisX->TextOrientation = System::Windows::Forms::DataVisualization::Charting::TextOrientation::Horizontal;
			chartArea2->AxisX->Title = L"x";
			chartArea2->AxisX->TitleAlignment = System::Drawing::StringAlignment::Far;
			chartArea2->AxisX->TitleForeColor = System::Drawing::Color::Linen;
			chartArea2->AxisY->IntervalAutoMode = System::Windows::Forms::DataVisualization::Charting::IntervalAutoMode::VariableCount;
			chartArea2->AxisY->LabelAutoFitMaxFontSize = 6;
			chartArea2->Name = L"ChartArea1";
			this->chart->ChartAreas->Add(chartArea2);
			this->chart->Location = System::Drawing::Point(37, 78);
			this->chart->Name = L"chart";
			series2->BorderWidth = 3;
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series2->Color = System::Drawing::Color::Red;
			series2->Name = L"Series1";
			series2->XValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Int32;
			series2->YValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Int32;
			this->chart->Series->Add(series2);
			this->chart->Size = System::Drawing::Size(314, 190);
			this->chart->TabIndex = 0;
			this->chart->Text = L"chart";
			title3->Alignment = System::Drawing::ContentAlignment::BottomRight;
			title3->BackColor = System::Drawing::Color::Transparent;
			title3->DockedToChartArea = L"ChartArea1";
			title3->DockingOffset = 85;
			title3->IsDockedInsideChartArea = false;
			title3->Name = L"X";
			title3->ShadowColor = System::Drawing::Color::Black;
			title3->Text = L"X";
			title4->Alignment = System::Drawing::ContentAlignment::TopLeft;
			title4->DockedToChartArea = L"ChartArea1";
			title4->DockingOffset = -15;
			title4->Name = L"Y";
			title4->Text = L"Y";
			this->chart->Titles->Add(title3);
			this->chart->Titles->Add(title4);
			this->chart->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MouseDown);
			this->chart->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MouseMove);
			this->chart->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MouseUp);
			// 
			// gBgraph
			// 
			this->gBgraph->Controls->Add(this->chart);
			this->gBgraph->Controls->Add(this->yplus);
			this->gBgraph->Controls->Add(this->yminus);
			this->gBgraph->Controls->Add(this->xminus);
			this->gBgraph->Controls->Add(this->xplus);
			this->gBgraph->Location = System::Drawing::Point(12, 38);
			this->gBgraph->Name = L"gBgraph";
			this->gBgraph->Size = System::Drawing::Size(442, 343);
			this->gBgraph->TabIndex = 1;
			this->gBgraph->TabStop = false;
			this->gBgraph->Text = L"Ãğàôèê";
			// 
			// yplus
			// 
			this->yplus->Location = System::Drawing::Point(37, 22);
			this->yplus->Name = L"yplus";
			this->yplus->Size = System::Drawing::Size(23, 23);
			this->yplus->TabIndex = 4;
			this->yplus->Text = L"+";
			this->yplus->UseMnemonic = false;
			this->yplus->UseVisualStyleBackColor = true;
			this->yplus->Click += gcnew System::EventHandler(this, &MyForm::yplus_Click);
			// 
			// yminus
			// 
			this->yminus->Location = System::Drawing::Point(74, 22);
			this->yminus->Name = L"yminus";
			this->yminus->Size = System::Drawing::Size(23, 23);
			this->yminus->TabIndex = 3;
			this->yminus->Text = L"-";
			this->yminus->UseVisualStyleBackColor = true;
			this->yminus->Click += gcnew System::EventHandler(this, &MyForm::yminus_Click);
			// 
			// xminus
			// 
			this->xminus->Location = System::Drawing::Point(326, 301);
			this->xminus->Name = L"xminus";
			this->xminus->Size = System::Drawing::Size(25, 23);
			this->xminus->TabIndex = 2;
			this->xminus->Text = L"-";
			this->xminus->UseVisualStyleBackColor = true;
			this->xminus->Click += gcnew System::EventHandler(this, &MyForm::xminus_Click);
			// 
			// xplus
			// 
			this->xplus->Location = System::Drawing::Point(297, 301);
			this->xplus->Name = L"xplus";
			this->xplus->Size = System::Drawing::Size(23, 23);
			this->xplus->TabIndex = 1;
			this->xplus->Text = L"+";
			this->xplus->UseVisualStyleBackColor = true;
			this->xplus->Click += gcnew System::EventHandler(this, &MyForm::xplus_Click);
			// 
			// gBvariables
			// 
			this->gBvariables->Controls->Add(this->numericEnd);
			this->gBvariables->Controls->Add(this->numericBegin);
			this->gBvariables->Controls->Add(this->labelEnd);
			this->gBvariables->Controls->Add(this->numericF);
			this->gBvariables->Controls->Add(this->numericA);
			this->gBvariables->Controls->Add(this->labelBegin);
			this->gBvariables->Controls->Add(this->phase);
			this->gBvariables->Controls->Add(this->amplitude);
			this->gBvariables->Location = System::Drawing::Point(520, 38);
			this->gBvariables->Name = L"gBvariables";
			this->gBvariables->Size = System::Drawing::Size(265, 82);
			this->gBvariables->TabIndex = 2;
			this->gBvariables->TabStop = false;
			this->gBvariables->Text = L"Ïåğåìåííûå";
			// 
			// numericEnd
			// 
			this->numericEnd->Location = System::Drawing::Point(195, 51);
			this->numericEnd->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->numericEnd->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, System::Int32::MinValue });
			this->numericEnd->Name = L"numericEnd";
			this->numericEnd->Size = System::Drawing::Size(52, 20);
			this->numericEnd->TabIndex = 8;
			this->numericEnd->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->numericEnd->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericEnd_ValueChanged);
			// 
			// numericBegin
			// 
			this->numericBegin->Location = System::Drawing::Point(195, 18);
			this->numericBegin->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->numericBegin->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, System::Int32::MinValue });
			this->numericBegin->Name = L"numericBegin";
			this->numericBegin->Size = System::Drawing::Size(52, 20);
			this->numericBegin->TabIndex = 7;
			this->numericBegin->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, System::Int32::MinValue });
			this->numericBegin->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericBegin_ValueChanged);
			// 
			// labelEnd
			// 
			this->labelEnd->AutoSize = true;
			this->labelEnd->Location = System::Drawing::Point(145, 51);
			this->labelEnd->Name = L"labelEnd";
			this->labelEnd->Size = System::Drawing::Size(38, 13);
			this->labelEnd->TabIndex = 1;
			this->labelEnd->Text = L"Êîíåö";
			// 
			// numericF
			// 
			this->numericF->Location = System::Drawing::Point(75, 49);
			this->numericF->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericF->Name = L"numericF";
			this->numericF->Size = System::Drawing::Size(64, 20);
			this->numericF->TabIndex = 4;
			this->numericF->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericF->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericF_ValueChanged);
			// 
			// numericA
			// 
			this->numericA->Location = System::Drawing::Point(75, 22);
			this->numericA->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->numericA->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, 0 });
			this->numericA->Name = L"numericA";
			this->numericA->Size = System::Drawing::Size(64, 20);
			this->numericA->TabIndex = 4;
			this->numericA->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, 0 });
			this->numericA->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericA_ValueChanged);
			// 
			// labelBegin
			// 
			this->labelBegin->AutoSize = true;
			this->labelBegin->Location = System::Drawing::Point(145, 22);
			this->labelBegin->Name = L"labelBegin";
			this->labelBegin->Size = System::Drawing::Size(44, 13);
			this->labelBegin->TabIndex = 0;
			this->labelBegin->Text = L"Íà÷àëî";
			// 
			// phase
			// 
			this->phase->AutoSize = true;
			this->phase->Location = System::Drawing::Point(7, 51);
			this->phase->Name = L"phase";
			this->phase->Size = System::Drawing::Size(36, 13);
			this->phase->TabIndex = 5;
			this->phase->Text = L"Ôàçà";
			// 
			// amplitude
			// 
			this->amplitude->AutoSize = true;
			this->amplitude->Location = System::Drawing::Point(7, 25);
			this->amplitude->Name = L"amplitude";
			this->amplitude->Size = System::Drawing::Size(62, 13);
			this->amplitude->TabIndex = 3;
			this->amplitude->Text = L"Àìïëèòóäà";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ìåíşToolStripMenuItem,
					this->âûõîäToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(881, 24);
			this->menuStrip1->TabIndex = 3;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ìåíşToolStripMenuItem
			// 
			this->ìåíşToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->MenuItemSaveAs,
					this->ñîõğàíèòüToolStripMenuItem, this->çàãğóçèòüToolStripMenuItem
			});
			this->ìåíşToolStripMenuItem->Name = L"ìåíşToolStripMenuItem";
			this->ìåíşToolStripMenuItem->Size = System::Drawing::Size(53, 20);
			this->ìåíşToolStripMenuItem->Text = L"Ìåíş";
			// 
			// MenuItemSaveAs
			// 
			this->MenuItemSaveAs->Name = L"MenuItemSaveAs";
			this->MenuItemSaveAs->Size = System::Drawing::Size(154, 22);
			this->MenuItemSaveAs->Text = L"Ñîõğàíèòü êàê";
			this->MenuItemSaveAs->Click += gcnew System::EventHandler(this, &MyForm::MenuItemSaveAs_Click);
			// 
			// ñîõğàíèòüToolStripMenuItem
			// 
			this->ñîõğàíèòüToolStripMenuItem->Name = L"ñîõğàíèòüToolStripMenuItem";
			this->ñîõğàíèòüToolStripMenuItem->Size = System::Drawing::Size(154, 22);
			this->ñîõğàíèòüToolStripMenuItem->Text = L"Ñîõğàíèòü";
			this->ñîõğàíèòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ñîõğàíèòüToolStripMenuItem_Click);
			// 
			// çàãğóçèòüToolStripMenuItem
			// 
			this->çàãğóçèòüToolStripMenuItem->Name = L"çàãğóçèòüToolStripMenuItem";
			this->çàãğóçèòüToolStripMenuItem->Size = System::Drawing::Size(154, 22);
			this->çàãğóçèòüToolStripMenuItem->Text = L"Çàãğóçèòü";
			this->çàãğóçèòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::çàãğóçèòüToolStripMenuItem_Click);
			// 
			// âûõîäToolStripMenuItem
			// 
			this->âûõîäToolStripMenuItem->Name = L"âûõîäToolStripMenuItem";
			this->âûõîäToolStripMenuItem->Size = System::Drawing::Size(54, 20);
			this->âûõîäToolStripMenuItem->Text = L"Âûõîä";
			this->âûõîäToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::âûõîäToolStripMenuItem_Click);
			// 
			// groupBox_G
			// 
			this->groupBox_G->Controls->Add(this->buttonClear);
			this->groupBox_G->Controls->Add(this->buttonStop);
			this->groupBox_G->Controls->Add(this->buttonStart);
			this->groupBox_G->Location = System::Drawing::Point(520, 149);
			this->groupBox_G->Name = L"groupBox_G";
			this->groupBox_G->Size = System::Drawing::Size(265, 49);
			this->groupBox_G->TabIndex = 4;
			this->groupBox_G->TabStop = false;
			this->groupBox_G->Text = L"Óïğàâëåíèå ãğàôèêîì";
			// 
			// buttonClear
			// 
			this->buttonClear->Location = System::Drawing::Point(101, 19);
			this->buttonClear->Name = L"buttonClear";
			this->buttonClear->Size = System::Drawing::Size(67, 23);
			this->buttonClear->TabIndex = 2;
			this->buttonClear->Text = L"Î÷èñòèòü";
			this->buttonClear->UseVisualStyleBackColor = true;
			this->buttonClear->Click += gcnew System::EventHandler(this, &MyForm::buttonClear_Click);
			// 
			// buttonStop
			// 
			this->buttonStop->Location = System::Drawing::Point(184, 19);
			this->buttonStop->Name = L"buttonStop";
			this->buttonStop->Size = System::Drawing::Size(75, 23);
			this->buttonStop->TabIndex = 1;
			this->buttonStop->Text = L"Ñòîï";
			this->buttonStop->UseVisualStyleBackColor = true;
			this->buttonStop->Click += gcnew System::EventHandler(this, &MyForm::buttonStop_Click);
			// 
			// buttonStart
			// 
			this->buttonStart->Location = System::Drawing::Point(14, 19);
			this->buttonStart->Name = L"buttonStart";
			this->buttonStart->Size = System::Drawing::Size(69, 23);
			this->buttonStart->TabIndex = 0;
			this->buttonStart->Text = L"Ñòàğò";
			this->buttonStart->UseVisualStyleBackColor = true;
			this->buttonStart->Click += gcnew System::EventHandler(this, &MyForm::buttonStart_Click);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(881, 409);
			this->Controls->Add(this->groupBox_G);
			this->Controls->Add(this->gBvariables);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->gBgraph);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart))->EndInit();
			this->gBgraph->ResumeLayout(false);
			this->gBvariables->ResumeLayout(false);
			this->gBvariables->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericEnd))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericBegin))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericF))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericA))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox_G->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
//Project function
//private: System::Void buttonSetVar_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonStart_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonStop_Click(System::Object^ sender, System::EventArgs^ e);
//Timer
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e);
//Paint chart


private: void paintChart();

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void numericA_ValueChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void numericF_ValueChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void yplus_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void yminus_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void xplus_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void xminus_Click(System::Object^ sender, System::EventArgs^ e);



private: System::Void numericBegin_ValueChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void numericEnd_ValueChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonClear_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ñîõğàíèòüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);

//private: System::Void MenuItemSaveAs_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void âûõîäToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void MenuItemSaveAs_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void çàãğóçèòüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);

//Äâèæåíèå ãğàôèêà/ ChartMoves
private: System::Void MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
private: System::Void MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
private: System::Void MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
};

}

