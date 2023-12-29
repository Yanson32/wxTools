#ifndef STATUS_RAII_H
#define STATUS_RAII_H

#include <wx/wxprec.h>
#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif

#include <awesomewm-shared_export.h>

class AWESOMEWM_SHARED_EXPORT StatusRAII
{
	public:
        	StatusRAII(wxStatusBar *statusbar, const wxString &message, const long newPosition = 0);
                virtual ~StatusRAII();
	private:
		wxStatusBar *status = nullptr;
		const long position = 0;
};

#endif
