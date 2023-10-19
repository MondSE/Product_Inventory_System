#pragma once
#include "ProductTableForm.h"

namespace Projecttest2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	using namespace System::IO;

	/// <summary>
	/// Summary for ProductForm
	/// </summary>
	public ref class ProductForm : public System::Windows::Forms::Form
	{
	public:
		ProductForm(void)
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
		~ProductForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ imgProduct;
	protected:

	private: System::Windows::Forms::TextBox^ txtProducName;
	private: System::Windows::Forms::RichTextBox^ txtProductDescription;
	private: System::Windows::Forms::Button^ btnAddImage;


	private: System::Windows::Forms::Label^ lblProductName;
	private: System::Windows::Forms::Label^ lblProductDescription;
	private: System::Windows::Forms::NumericUpDown^ numProductStock;
	private: System::Windows::Forms::NumericUpDown^ numProductPrice;
	private: System::Windows::Forms::Label^ lblProductStock;
	private: System::Windows::Forms::Label^ lblProductPrice;
	private: System::Windows::Forms::Button^ btnAddProduct;
	private: System::Windows::Forms::Button^ btnViewProducts;






	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ProductForm::typeid));
			this->imgProduct = (gcnew System::Windows::Forms::PictureBox());
			this->txtProducName = (gcnew System::Windows::Forms::TextBox());
			this->txtProductDescription = (gcnew System::Windows::Forms::RichTextBox());
			this->btnAddImage = (gcnew System::Windows::Forms::Button());
			this->lblProductName = (gcnew System::Windows::Forms::Label());
			this->lblProductDescription = (gcnew System::Windows::Forms::Label());
			this->numProductStock = (gcnew System::Windows::Forms::NumericUpDown());
			this->numProductPrice = (gcnew System::Windows::Forms::NumericUpDown());
			this->lblProductStock = (gcnew System::Windows::Forms::Label());
			this->lblProductPrice = (gcnew System::Windows::Forms::Label());
			this->btnAddProduct = (gcnew System::Windows::Forms::Button());
			this->btnViewProducts = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgProduct))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numProductStock))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numProductPrice))->BeginInit();
			this->SuspendLayout();
			// 
			// imgProduct
			// 
			this->imgProduct->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->imgProduct->Location = System::Drawing::Point(12, 12);
			this->imgProduct->Name = L"imgProduct";
			this->imgProduct->Size = System::Drawing::Size(155, 138);
			this->imgProduct->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->imgProduct->TabIndex = 0;
			this->imgProduct->TabStop = false;
			// 
			// txtProducName
			// 
			this->txtProducName->Location = System::Drawing::Point(176, 38);
			this->txtProducName->Name = L"txtProducName";
			this->txtProducName->Size = System::Drawing::Size(383, 20);
			this->txtProducName->TabIndex = 2;
			// 
			// txtProductDescription
			// 
			this->txtProductDescription->Location = System::Drawing::Point(176, 93);
			this->txtProductDescription->Name = L"txtProductDescription";
			this->txtProductDescription->Size = System::Drawing::Size(383, 99);
			this->txtProductDescription->TabIndex = 3;
			this->txtProductDescription->Text = L"";
			// 
			// btnAddImage
			// 
			this->btnAddImage->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAddImage->Location = System::Drawing::Point(13, 157);
			this->btnAddImage->Name = L"btnAddImage";
			this->btnAddImage->Size = System::Drawing::Size(154, 35);
			this->btnAddImage->TabIndex = 4;
			this->btnAddImage->Text = L"Add Image";
			this->btnAddImage->UseVisualStyleBackColor = true;
			this->btnAddImage->Click += gcnew System::EventHandler(this, &ProductForm::btnAddImage_Click);
			// 
			// lblProductName
			// 
			this->lblProductName->AutoSize = true;
			this->lblProductName->Location = System::Drawing::Point(176, 19);
			this->lblProductName->Name = L"lblProductName";
			this->lblProductName->Size = System::Drawing::Size(75, 13);
			this->lblProductName->TabIndex = 5;
			this->lblProductName->Text = L"Product Name";
			// 
			// lblProductDescription
			// 
			this->lblProductDescription->AutoSize = true;
			this->lblProductDescription->Location = System::Drawing::Point(179, 74);
			this->lblProductDescription->Name = L"lblProductDescription";
			this->lblProductDescription->Size = System::Drawing::Size(100, 13);
			this->lblProductDescription->TabIndex = 6;
			this->lblProductDescription->Text = L"Product Description";
			// 
			// numProductStock
			// 
			this->numProductStock->Location = System::Drawing::Point(12, 232);
			this->numProductStock->Name = L"numProductStock";
			this->numProductStock->Size = System::Drawing::Size(154, 20);
			this->numProductStock->TabIndex = 7;
			// 
			// numProductPrice
			// 
			this->numProductPrice->DecimalPlaces = 2;
			this->numProductPrice->Location = System::Drawing::Point(12, 277);
			this->numProductPrice->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 99999, 0, 0, 0 });
			this->numProductPrice->Name = L"numProductPrice";
			this->numProductPrice->Size = System::Drawing::Size(155, 20);
			this->numProductPrice->TabIndex = 8;
			// 
			// lblProductStock
			// 
			this->lblProductStock->AutoSize = true;
			this->lblProductStock->Location = System::Drawing::Point(12, 213);
			this->lblProductStock->Name = L"lblProductStock";
			this->lblProductStock->Size = System::Drawing::Size(75, 13);
			this->lblProductStock->TabIndex = 9;
			this->lblProductStock->Text = L"Product Stock";
			// 
			// lblProductPrice
			// 
			this->lblProductPrice->AutoSize = true;
			this->lblProductPrice->Location = System::Drawing::Point(12, 259);
			this->lblProductPrice->Name = L"lblProductPrice";
			this->lblProductPrice->Size = System::Drawing::Size(71, 13);
			this->lblProductPrice->TabIndex = 10;
			this->lblProductPrice->Text = L"Product Price";
			// 
			// btnAddProduct
			// 
			this->btnAddProduct->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAddProduct->Location = System::Drawing::Point(176, 213);
			this->btnAddProduct->Name = L"btnAddProduct";
			this->btnAddProduct->Size = System::Drawing::Size(383, 84);
			this->btnAddProduct->TabIndex = 11;
			this->btnAddProduct->Text = L"Add Product";
			this->btnAddProduct->UseVisualStyleBackColor = true;
			this->btnAddProduct->Click += gcnew System::EventHandler(this, &ProductForm::btnAddProduct_Click);
			// 
			// btnViewProducts
			// 
			this->btnViewProducts->Location = System::Drawing::Point(12, 313);
			this->btnViewProducts->Name = L"btnViewProducts";
			this->btnViewProducts->Size = System::Drawing::Size(547, 45);
			this->btnViewProducts->TabIndex = 12;
			this->btnViewProducts->Text = L"View Products";
			this->btnViewProducts->UseVisualStyleBackColor = true;
			this->btnViewProducts->Click += gcnew System::EventHandler(this, &ProductForm::btnViewProducts_Click);
			// 
			// ProductForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(571, 369);
			this->Controls->Add(this->btnViewProducts);
			this->Controls->Add(this->btnAddProduct);
			this->Controls->Add(this->lblProductPrice);
			this->Controls->Add(this->lblProductStock);
			this->Controls->Add(this->numProductPrice);
			this->Controls->Add(this->numProductStock);
			this->Controls->Add(this->lblProductDescription);
			this->Controls->Add(this->lblProductName);
			this->Controls->Add(this->btnAddImage);
			this->Controls->Add(this->txtProductDescription);
			this->Controls->Add(this->txtProducName);
			this->Controls->Add(this->imgProduct);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"ProductForm";
			this->Text = L"Product Form";
			this->Load += gcnew System::EventHandler(this, &ProductForm::ProductForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgProduct))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numProductStock))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numProductPrice))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//Connection DataBase MySQL
	String^ connString = "Server=localhost;port=3306;database=dbshop;uid=root;password=admin";
	MySqlConnection^ conn = gcnew MySqlConnection(connString);

	void clearFields() {
		imgProduct->ImageLocation = "";
		txtProducName->Text = "";
		txtProductDescription->Text = "";
		numProductStock->Value = 0;
		numProductPrice->Value = 0;
	}

	private: System::Void ProductForm_Load(System::Object^ sender, System::EventArgs^ e) {

		//Server = localhost
		//Port = 3306
		//Database Name = dbshop
		//UID = root
		//Password = admin

		try {
			conn->Open();
			MessageBox::Show("Connection Succeeded");
			conn->Close();
		}
		catch (Exception^ e) {
			MessageBox::Show("Connection Error");
		}
	}
	private: System::Void btnAddProduct_Click(System::Object^ sender, System::EventArgs^ e) {
		
		String^ productName = txtProducName->Text;
		String^	productDescription = txtProductDescription->Text;
		int productStock = Convert::ToInt32(numProductStock->Value);
		double productPrice = Convert::ToDouble(numProductPrice->Value);
		array<unsigned char>^ productImage;

		String^ fileLocation = imgProduct->ImageLocation;

		try {
			FileStream^ fs = gcnew FileStream(fileLocation, FileMode::Open, FileAccess::Read);
			BinaryReader^ br = gcnew BinaryReader(fs);
			productImage = br->ReadBytes(fs->Length);
		}
		catch(Exception^ e) {

		}

		bool isValid = true;

		if (productName->Trim()->Length <= 2) {
			MessageBox::Show("Enter a Proper Product Name.");
			isValid = false;
		}

		if (productPrice <= 0) {
			MessageBox::Show("Enter a Proper Product Price.");
			isValid = false;
		}

		if (isValid) {
			//Insert Data

			conn->Open();

			String^ cmdString = "INSERT INTO tblproducts (ProductName,ProductDescription,ProductStock,ProductPrice,ProductImage) VALUES (@productName,@productDescription,@productStock,@productPrice,@productImage)";
			MySqlCommand^ cmd = gcnew MySqlCommand(cmdString,conn);

			cmd->Parameters->AddWithValue("@productName", productName);
			cmd->Parameters->AddWithValue("@productDescription",productDescription);
			cmd->Parameters->AddWithValue("@productStock", productStock);
			cmd->Parameters->AddWithValue("@productPrice", productPrice);
			cmd->Parameters->AddWithValue("@productImage", productImage);

			try {
				cmd->ExecuteNonQuery();
				MessageBox::Show(productName + " Inserted Succesfully.");
				conn->Close();
				clearFields();
			}
			catch (Exception^ e) {
				MessageBox::Show("Inserting Data Failed.");
			}
		}
	}
	private: System::Void btnAddImage_Click(System::Object^ sender, System::EventArgs^ e) {

		OpenFileDialog^ ofd = gcnew OpenFileDialog();
		ofd->Filter = "PNG Files *.png|*.png|JPG Files *.jpg|*.jpg|All Files *.*|*.*";
		
		if (ofd->ShowDialog() == Windows::Forms::DialogResult::OK) {
			imgProduct->ImageLocation = ofd->FileName;
		}

	}
private: System::Void btnViewProducts_Click(System::Object^ sender, System::EventArgs^ e) {
	ProductTableForm^ ptf = gcnew ProductTableForm();
	ptf->Visible = true;
	Hide();
}
};
}
