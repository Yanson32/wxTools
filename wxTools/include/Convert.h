/********************************************************************//**
*   @author Wayne J Larson Jr.
*   @date   12/14/23
*   @description    This file defines functions to convert one object
*                   to another object. 
************************************************************************/

/*************************************************************************
*                           COPYRIGHT NOTICE
* The AwesomeWM application changes the desktop wallpaper. 
* Copyright (C) 2020 Wayne J Larson Jr.  *
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License version 3 as 
* published by the Free Software Foundation.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
* 
* You should have received a copy of the GNU General Public License
* along with this program.  If not, see <https://www.gnu.org/licenses/>.
***************************************************************************/
#include <wx/wxprec.h>
#include <filesystem>

#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif

#include <string>
#include <wx/filename.h>


/**************************************************************************
*   @brief  This function converts an object to an std::string 
*   @param  param is the object to be converted 
*   @return A std::string equivalent to the input parameter 
**************************************************************************/
std::string toStdString(const wxFileName &param);


/**************************************************************************
*   @brief  This function converts an object to an std::string 
*   @param  param is the object to be converted 
*   @return A std::string equivalent to the input parameter 
**************************************************************************/
std::string toStdString(const wxString &param);


/**************************************************************************
*   @brief  This function converts an object to an std::string 
*   @param  param is the object to be converted 
*   @return A std::string equivalent to the input parameter 
**************************************************************************/
std::string toStdString(const std::filesystem::path &param);


/**************************************************************************
*   @brief  This function converts an object to an std::string 
*   @param  param is the object to be converted 
*   @return A std::string equivalent to the input parameter 
**************************************************************************/
std::string toStdString(const int &param);


/**************************************************************************
*   @brief  This function converts an object to an std::string 
*   @param  param is the object to be converted 
*   @return A std::string equivalent to the input parameter 
**************************************************************************/
std::string toStdString(const float &param);


/**************************************************************************
*   @brief  This function converts an object to a wxString 
*   @param  param is the object to be converted 
*   @return A wxString equivalent to the input parameter 
**************************************************************************/
wxString toWxString(const std::string &param);


/**************************************************************************
*   @brief  This function converts an object to a wxString 
*   @param  param is the object to be converted 
*   @return A wxString equivalent to the input parameter 
**************************************************************************/
wxString toWxString(const wxFileName &param);


/**************************************************************************
*   @brief  This function converts an object to a wxString 
*   @param  param is the object to be converte
*   @return A wxString equivalent to the input parameter 
**************************************************************************/
wxString toWxString(const std::filesystem::path &param);


/**************************************************************************
*   @brief  This function converts an object to a wxString 
*   @param  param is the object to be converte
*   @return A wxString equivalent to the input parameter 
**************************************************************************/
wxString toWxString(const int &param);


/**************************************************************************
*   @brief  This function converts an object to a wxString 
*   @param  param is the object to be converte
*   @return A wxString equivalent to the input parameter 
**************************************************************************/
wxString toWxString(const float &param);


/**************************************************************************
*   @brief  This function converts an object to a wxFileName
*   @param  param is the object to be converte
*   @return A wxFileName equivalent to the input parameter 
**************************************************************************/
wxFileName toWxFileName(const std::string &param);


/**************************************************************************
*   @brief  This function converts an object to a wxFileName
*   @param  param is the object to be converte
*   @return A wxFileName equivalent to the input parameter 
**************************************************************************/
wxFileName toWxFileName(const wxString &param);


/**************************************************************************
*   @brief  This function converts an object to a wxFileName
*   @param  param is the object to be converte
*   @return A wxFileName equivalent to the input parameter 
**************************************************************************/
wxFileName toWxFileName(const std::filesystem::path &param);
