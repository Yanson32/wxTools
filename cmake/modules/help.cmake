function(display_help_text)
    if(WXT_HELP)
        message("BUILD_SHARED_LIBS  Set this variable to True for dynamic libraries and False for staic libraries")
        message("WXT_HELP           Set to True to display help text")
        message("WXT_EXAMPLES       Set to true to build examples")
        message("WXT_WX_VERSION     Set to the desired version of the wxWidgets library")
    endif()
endfunction()
