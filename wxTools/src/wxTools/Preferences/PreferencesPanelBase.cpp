#include "wxTools/PreferencesPanelBase.h"
#include <wx/valnum.h> 


PreferencesPanelBase::PreferencesPanelBase(wxWindow *parent):
wxPanel(parent)
{
	mainSizer = new wxBoxSizer(wxVERTICAL);
}


wxCheckBox* PreferencesPanelBase::appendCheckBox(wxWindow *parent, wxWindowID id, wxString label, bool isChecked, bool enabled)
{
	wxBoxSizer *sizer = new wxBoxSizer(wxHORIZONTAL);
	
	//Create label
	wxStaticText *text = new wxStaticText(parent, wxID_ANY, _(label));
	sizer->Add(text, proportion);
	
	//Create checkbox
	wxCheckBox *checkbox = new wxCheckBox(parent, id, wxEmptyString);
	checkbox->Enable(enabled);
	checkbox->SetValue(isChecked);
	sizer->Add(checkbox, proportion);
	
	//Add sizer
	mainSizer->Add(sizer, 0, wxEXPAND | wxTOP | wxRIGHT | wxBOTTOM | wxLEFT, border);

	return checkbox;
}


wxComboBox* PreferencesPanelBase::appendComboBox(wxWindow *parent, wxWindowID id, wxString label, wxArrayString choices, wxValidator val, bool enabled)
{
	wxBoxSizer *sizer = new wxBoxSizer(wxHORIZONTAL);
	
	//Create label
	wxStaticText *text = new wxStaticText(parent, wxID_ANY, _(label));
	sizer->Add(text, proportion);
	
	//Create checkbox
	wxComboBox *combobox = new wxComboBox(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, choices, 0, val);
	combobox->Enable(enabled);
	sizer->Add(combobox, proportion);
	
	//Add sizer
	mainSizer->Add(sizer, 0, wxEXPAND | wxTOP | wxRIGHT | wxBOTTOM | wxLEFT, border);

	return combobox;
}


wxComboBox* PreferencesPanelBase::appendIntegerComboBox(wxWindow *parent, wxWindowID id, wxString label, wxArrayString choices, bool enabled)
{
	//Create combobox
	wxIntegerValidator<unsigned> intValidator;
	wxComboBox *combobox = appendComboBox(parent, id, label, choices, intValidator, enabled);

	return combobox;
}

wxTextCtrl* PreferencesPanelBase::appendTextCtrl(wxWindow *parent, wxWindowID id, wxString label, bool enabled)
{
	wxBoxSizer *sizer = new wxBoxSizer(wxHORIZONTAL);
	
	//Create label
	wxStaticText *text = new wxStaticText(parent, wxID_ANY, _(label));
	sizer->Add(text, proportion);
	
	//Create text ctrl 
	wxTextCtrl *textCtrl = new wxTextCtrl(parent, id);
	textCtrl->Enable(enabled);
	sizer->Add(textCtrl, proportion);
	
	//Add sizer
	mainSizer->Add(sizer, 0, wxEXPAND | wxTOP | wxRIGHT | wxBOTTOM | wxLEFT, border);

	return textCtrl;
}

PreferencesPanelBase::~PreferencesPanelBase()
{

}
