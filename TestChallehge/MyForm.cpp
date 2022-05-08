#include "MyForm.h"
#include <fstream>
#include <ostream>
#include <fstream>
#include <iostream>
#include <string>
#include <msclr\marshal_cppstd.h>
#include <string>
#include <filesystem>

using  namespace System;
using  namespace System::Windows::Forms;

[STAThreadAttribute]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	// ProjectName - name of your project
	// NameForm - name of the form to run





	TestChallehge::MyForm form;
	Application::Run(% form);
}

int ampl=100;		//Амплитуда   Amplitude
int faza=1;	//Фаза(имя phase занято) Phase
int begin=-10;	//Старт  
int end=10;		//Финиш
double h=0.1;  //шаг  Step
int t=0;  //количество тиков таймера timer tick
double scaleY = 1;
double scaleX = 1;



/*System::Void TestChallehge::MyForm::buttonSetVar_Click(System::Object^ sender, System::EventArgs^ e)
{
	//this->timer1->Stop();
	ampl = Convert::ToInt64(this->numericA->Value);
	faza = Convert::ToInt64(this->numericF->Value);
	begin = Convert::ToInt64(this->numericBegin->Text);
	end = Convert::ToInt64(this->numericEnd->Text);
	//this->timer1->Start();


}*/
//запуск анимации/ start animation
System::Void TestChallehge::MyForm::buttonStart_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->timer1->Start();
	return System::Void();
}
//остановка анимации/ stop animation
System::Void TestChallehge::MyForm::buttonStop_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->timer1->Stop();
	
	return System::Void();
}
//очистка поля/ clear field
System::Void TestChallehge::MyForm::buttonClear_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->timer1->Stop();
	this->chart->Series[0]->Points->Clear();
	this->chart->ChartAreas[0]->AxisX->ScaleView->ZoomReset();
	this->chart->Titles->IndexOf("X");

	return System::Void();
}
//Запоминание последнего сохранения/ Save last saves
System::Void saveFileNames(std::string fileName) {
	String^ tmp = Application::StartupPath;
	std::string filename = msclr::interop::marshal_as<std::string>(tmp);
	filename += "\\last save.txt";
	std::ofstream fout(filename);
	if (!fout.bad())
	{
		fout << fileName;
		fout.close();
	}

}
//Вспоминание последнего сохранения/ Load last saves
std::string loadFileName() {
	String^ tmp = Application::StartupPath;//получаем путь к папке с исполняемым файлом
	std::string filename = msclr::interop::marshal_as<std::string>(tmp);
	filename += "\\last save.txt";
	std::string fileName;
	std::ofstream fout(filename);
	if (!fout.bad())
	{
		fout << fileName;
		fout.close();
	}
	return fileName;
}
//сохранение/save
System::Void TestChallehge::MyForm::сохранитьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	std::string filename = loadFileName();
	std::ofstream fout(filename.c_str());
	if (!fout.bad())
	{
		fout << ampl << " " << faza << " " << begin << " " << end << " ";
		fout.close();
	}


	return System::Void();
}

System::Void TestChallehge::MyForm::выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Close();
}


//Сохранить как/save as
System::Void TestChallehge::MyForm::MenuItemSaveAs_Click(System::Object^ sender, System::EventArgs^ e)
{
	//openDlg->Filter = "Image Files(*.BMP;*.JPG;*.GIF)|*.BMP;*.JPG;*.GIF|All files (*.*)|*.*";
	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		String^ fileName = saveFileDialog1->FileName;

		//this->textBox1->Text=fileName;
		std::string filename = msclr::interop::marshal_as<std::string>(fileName);
		saveFileNames(filename);
		std::ofstream fout(filename.c_str());
		if (!fout.bad())
		{
			fout << ampl<< " " << faza << " " << begin << " " << end << " ";
			fout.close();
		}
		else
		{
			System::Windows::Forms::MessageBox::Show("Не удалось сохранить");
		}
	}
	
}

System::Void TestChallehge::MyForm::загрузитьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		String^ fileName = openFileDialog1->FileName;
		std::string filename = msclr::interop::marshal_as<std::string>(fileName);
		std::ifstream fin(filename.c_str());
		if (!fin.bad())
		{
			fin >> ampl >>  faza >> begin >> end;
			if (!fin||ampl<=0||ampl>10000||faza<=0||faza>100||begin>end) {
				MessageBox::Show("Файл поврежден!", "Ошибка!");
				fin.close();
				return System::Void();
			}
			

			fin.close();
			this->numericA->Value = Convert::ToDecimal(ampl);
			this->numericF->Value = Convert::ToDecimal(faza);
			this->numericBegin->Value = Convert::ToDecimal(begin);
			this->numericEnd->Value = Convert::ToDecimal(end);
		}

	}

	return System::Void();
}
//Движение графика мышью/Mouse movement of the graph 


int oldChartX;
int oldChartY;
bool isMouseDown = false;
System::Void TestChallehge::MyForm::MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	oldChartX = e->Location.X;
	oldChartY = e->Location.Y;
	isMouseDown = true;
}

System::Void TestChallehge::MyForm::MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	if (isMouseDown)
	{
		chart->Left += e->Location.X - oldChartX;
		chart->Top += e->Location.Y - oldChartY;
	}
}

System::Void TestChallehge::MyForm::MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	isMouseDown = false;
}







//timer
System::Void TestChallehge::MyForm::timer1_Tick(System::Object^ sender, System::EventArgs^ e)
{
	paintChart();
	return System::Void();
}

//Отрисовка графика/Drawing a graph
void TestChallehge::MyForm::paintChart()
{
		double x = begin;
		double y;
		double temp,s;
		Random^ rand = gcnew Random();
		//s=rand->NextDouble()/100;
		s = 0;
		this->chart->Series[0]->Points->Clear();
		while (x <= end)
		{
			temp= Convert::ToDouble(this->timer1->Interval)/1000;
			y = ampl*Math::Sin(2*Math::PI*(faza*t*temp+x-begin));
			this->chart->Series[0]->Points->AddXY(x, y);
			x += h*(1+s);
	}
	t++;
	if (t > 1000000000)
		t = 0;
	return;
}

//тест
System::Void TestChallehge::MyForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	chart->ChartAreas[0]->CursorX->IsUserEnabled = true;
	chart->ChartAreas[0]->CursorX->IsUserSelectionEnabled = true;
	chart->ChartAreas[0]->AxisX->ScaleView->Zoomable = true;
	chart->ChartAreas[0]->AxisX->ScrollBar->IsPositionedInside = true;

	

	this->chart->ChartAreas[0]->AxisX->ScaleView->Zoom(-1, 1);
	
	return System::Void();
}
//Изменение значения стартовых данных/Changing the value of the starting data
System::Void TestChallehge::MyForm::numericA_ValueChanged(System::Object^ sender, System::EventArgs^ e)
{
	ampl = Convert::ToInt64(this->numericA->Value);
	return System::Void();
}

System::Void TestChallehge::MyForm::numericF_ValueChanged(System::Object^ sender, System::EventArgs^ e)
{
	faza = Convert::ToInt64(this->numericF->Value);


	return System::Void();
}

System::Void TestChallehge::MyForm::numericBegin_ValueChanged(System::Object^ sender, System::EventArgs^ e)
{

	begin = Convert::ToInt64(this->numericBegin->Value);

	return System::Void();
}

System::Void TestChallehge::MyForm::numericEnd_ValueChanged(System::Object^ sender, System::EventArgs^ e)
{

	end = Convert::ToInt64(this->numericEnd->Value);

	return System::Void();
}

//Маштабирование графика/Scaling the graph
System::Void TestChallehge::MyForm::yplus_Click(System::Object^ sender, System::EventArgs^ e)
{
	scaleY /= 2;
	//this->chart->ChartAreas[0]->AxisY->ScaleView->ZoomReset();
	this->chart->ChartAreas[0]->AxisY->ScaleView->Zoom(begin*scaleY, end*scaleY);
	return System::Void();
}

System::Void TestChallehge::MyForm::yminus_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (scaleY >= 1)
		this->chart->ChartAreas[0]->AxisY->ScaleView->ZoomReset();
	else {
		scaleY *= 2;
		this->chart->ChartAreas[0]->AxisY->ScaleView->Zoom(-1*ampl * scaleY, ampl * scaleY);
	}
	return System::Void();
}

System::Void TestChallehge::MyForm::xplus_Click(System::Object^ sender, System::EventArgs^ e)
{
	scaleX /= 2;
	this->chart->ChartAreas[0]->AxisX->ScaleView->Zoom(begin * scaleX, end * scaleX);
	return System::Void();
}
System::Void TestChallehge::MyForm::xminus_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (scaleX >= 1)
		this->chart->ChartAreas[0]->AxisX->ScaleView->ZoomReset();
	else {
		scaleX *= 2;
		this->chart->ChartAreas[0]->AxisX->ScaleView->Zoom(begin * scaleX, end * scaleX);
	}
	return System::Void();
}




