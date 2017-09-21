/// \file
/// \author Xavier Michelon
///
/// \brief Implementation of application constants
///  
/// Copyright (c) Xavier Michelon. All rights reserved.  
/// Licensed under the MIT License. See LICENSE file in the project root for full license information.  


#include "stdafx.h"
#include "BeeftextConstants.h"


namespace constants {

   QString const kApplicationName = "Beeftext";
   QString const kOrganizationName = "x-mi.com";
#ifdef NDEBUG
   bool const kShowLogOnStartup = false;
#else 
   bool const kShowLogOnStartup = true;
#endif

} // namespace constants