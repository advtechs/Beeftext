﻿/// \file
/// \author 
///
/// \brief Declaration of function related to the last use file
///  
/// Copyright (c) . All rights reserved.  
/// Licensed under the MIT License. See LICENSE file in the project root for full license information. 


#ifndef BEEFTEXT_LAST_USE_FILE_H
#define BEEFTEXT_LAST_USE_FILE_H


#include "ComboList.h"


void loadLastUseDateTimes(ComboList& comboList); ///< Load the last date/times from file.
void saveLastUseDateTimes(ComboList const& comboList); ///< Save the last date/times to file.


#endif // #ifndef BEEFTEXT_LAST_USE_FILE_H
