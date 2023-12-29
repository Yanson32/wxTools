#ifndef PREFERECES_PAGE_BASE_H
#define PREFERECES_PAGE_BASE_H

#include <wx/wxprec.h>
#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif

class PreferencesPanelBase: public wxPanel
{
	public:
		PreferencesPanelBase(wxWindow *parent);
        wxCheckBox* appendCheckBox(wxWindow *parent, wxWindowID id, wxString label, bool isChecked = false, bool enabled = true);
		wxComboBox* appendComboBox(wxWindow *parent, wxWindowID id, wxString label, wxArrayString choices, wxValidator val = wxDefaultValidator, bool enabled = true);
		wxComboBox* appendIntegerComboBox(wxWindow *parent, wxWindowID id, wxString label, wxArrayString choices, bool enabled = true);
        wxTextCtrl* appendTextCtrl(wxWindow *parent, wxWindowID id, wxString label, bool enabled);
		virtual ~PreferencesPanelBase();
	protected:
		wxBoxSizer *mainSizer = nullptr;
		int proportion = 1;
		int border = 10;

};

#endif
