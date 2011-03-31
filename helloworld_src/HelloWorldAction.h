/*
 * Copyright (c) 2009, Peter Sommerlad and IFS Institute for Software at HSR Rapperswil, Switzerland
 * All rights reserved.
 *
 * This library/application is free software; you can redistribute and/or modify it under the terms of
 * the license that is included with this library/application in the file license.txt.
 */

#ifndef _HelloWorldAction_H
#define _HelloWorldAction_H

#include "Action.h"

//---- HelloWorldAction ----------------------------------------------------------
//! comment action
//!	Structure of config:
//!<PRE>	{
//!		/Slot1	....
//!      ...
//!	}</PRE>
class HelloWorldAction : public Action
{
public:
	//--- constructors
    HelloWorldAction(const char *name);
    ~HelloWorldAction();

    //!DoSomething method for configured Actions 
	//! \param transitionToken (in/out) the event passed by the caller, can be modified. 
	//! \param ctx the context the action runs within.
	//! \param config the configuration of the action.
	//! \return true if the action run successfully, false if an error occurred.
	virtual bool DoExecAction(String &transitionToken, Context& ctx, const ROAnything &config);

};

#endif
