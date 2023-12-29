/********************************************************************//**
*   @author Wayne J Larson Jr.
*   @date   12/14/23
*   @description    This file defines functions to convert one object
*                   to another object. 
************************************************************************/

/*************************************************************************
*                           COPYRIGHT NOTICE
* The AwesomeWM application changes the desktop wallpaper. 
* Copyright (C) 2020 Wayne J Larson Jr. 
*
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
#include "Functions.h"
#include <cassert>
#include <string>

/**************************************************************************
*   @brief  This function converts an object to an std::string 
*   @param  param is the object to be converted 
*   @return A std::string equivalent to the input parameter 
**************************************************************************/
std::string toStdString(const wxFileName &file)
{
    wxLogTrace("Convert.cpp", __FUNCTION__);
    return file.GetFullPath().ToStdString();
}


/**************************************************************************
*   @brief  This function converts an object to an std::string 
*   @param  param is the object to be converted 
*   @return A std::string equivalent to the input parameter 
**************************************************************************/
std::string toStdString(const wxString &param)
{
    wxLogTrace("Convert.cpp", __FUNCTION__);
    return param.ToStdString();
}


/**************************************************************************
*   @brief  This function converts an object to an std::string 
*   @param  param is the object to be converted 
*   @return A std::string equivalent to the input parameter 
**************************************************************************/
std::string toStdString(const std::filesystem::path &param)
{
    wxLogTrace("Convert.cpp", __FUNCTION__);
    return param.string();
}


/**************************************************************************
*   @brief  This function converts an object to an std::string 
*   @param  param is the object to be converted 
*   @return A std::string equivalent to the input parameter 
**************************************************************************/
std::string toStdString(const int &param)
{
    wxLogTrace("Convert.cpp", __FUNCTION__);
    return std::to_string(param);
}


/**************************************************************************
*   @brief  This function converts an object to an std::string 
*   @param  param is the object to be converted 
*   @return A std::string equivalent to the input parameter 
**************************************************************************/
std::string toStdString(const float &param)
{
    wxLogTrace("Convert.cpp", __FUNCTION__);
    return std::to_string(param);
}


/**************************************************************************
*   @brief  This function converts an object to an std::string 
*   @param  param is the object to be converted 
*   @return A std::string equivalent to the input parameter 
**************************************************************************/
std::string toStdString(const std::size_t &param)
{
    wxLogTrace("Convert.cpp", __FUNCTION__);
    return std::to_string(param);
}


/**************************************************************************
*   @brief  This function converts an object to an std::string 
*   @param  param is the object to be converted 
*   @return A std::string equivalent to the input parameter 
**************************************************************************/
std::string toStdString(const long &param)
{
    wxLogTrace("Convert.cpp", __FUNCTION__);
    return std::to_string(param);
}


/**************************************************************************
*   @brief  This function converts an object to a wxString 
*   @param  param is the object to be converted 
*   @return A wxString equivalent to the input parameter 
**************************************************************************/
wxString toWxString(const std::string &param)
{
    wxLogTrace("Convert.cpp", __FUNCTION__);
    return wxString(param);
}


/**************************************************************************
*   @brief  This function converts an object to a wxString 
*   @param  param is the object to be converted 
*   @return A wxString equivalent to the input parameter 
**************************************************************************/
wxString toWxString(const wxFileName &param)
{
    wxLogTrace("Convert.cpp", __FUNCTION__);
    return toWxString(toStdString(param));
}


/*************************************************************************
*   @brief  This function converts an object to a wxString 
*   @param  param is the object to be converte
*   @return A wxString equivalent to the input parameter 
**************************************************************************/
wxString toWxString(const std::filesystem::path &param)
{
    wxLogTrace("Convert.cpp", __FUNCTION__);
    return toWxString(toStdString(param));
}


/**************************************************************************
*   @brief  This function converts an object to a wxString 
*   @param  param is the object to be converte
*   @return A wxString equivalent to the input parameter 
**************************************************************************/
wxString toWxString(const int &param)
{
    wxLogTrace("Convert.cpp", __FUNCTION__);
    return wxString::Format("%d", param);
}


/**************************************************************************
*   @brief  This function converts an object to a wxString 
*   @param  param is the object to be converte
*   @return A wxString equivalent to the input parameter 
**************************************************************************/
wxString toWxString(const float &param)
{
    wxLogTrace("Convert.cpp", __FUNCTION__);
    return wxString::Format("%f", param);
}


/**************************************************************************
*   @brief  This function converts an object to a wxString 
*   @param  param is the object to be converte
*   @return A wxString equivalent to the input parameter 
**************************************************************************/
wxString toWxString(const std::size_t &param)
{
    wxLogTrace("Convert.cpp", __FUNCTION__);
    return wxString::Format("%ld", param);
}


/**********************************************************************//**
*   @brief  This function converts an object to a wxString 
*   @param  param is the object to be converte
*   @return A wxString equivalent to the input parameter 
**************************************************************************/
wxString toWxString(const long &param)
{
    wxLogTrace("Convert.cpp", __FUNCTION__);
    return toWxString(toStdString(param));
}


/**********************************************************************//**
*   @brief  This function converts an object to a wxFileName
*   @param  param is the object to be converte
*   @return A wxFileName equivalent to the input parameter 
**************************************************************************/
wxFileName toWxFileName(const std::string &param)
{
    wxLogTrace("Convert.cpp", __FUNCTION__);
    return wxFileName(param);
}


/**********************************************************************//**
*   @brief  This function converts an object to a wxFileName
*   @param  param is the object to be converte
*   @return A wxFileName equivalent to the input parameter 
**************************************************************************/
wxFileName toWxFileName(const wxString &param)
{
    wxLogTrace("Convert.cpp", __FUNCTION__);
    return wxFileName(param);
}


/**********************************************************************//**
*   @brief  This function converts an object to a wxFileName
*   @param  param is the object to be converte
*   @return A wxFileName equivalent to the input parameter 
**************************************************************************/
wxFileName toWxFileName(const std::filesystem::path &param)
{
    wxLogTrace("Convert.cpp", __FUNCTION__);
    return wxFileName(param.string());
}
