/*
 * Copyright (c) 2000 itopia
 * All Rights Reserved
 *
 * HelloWorldAction:   
 *
 * $Id$
 */

#ifndef _HelloWorldAction_H
#define _HelloWorldAction_H

#ifdef __GNUG__
	#pragma interface
#endif

//---- Action include -------------------------------------------------
#include "config_helloworld.h"
#include "Action.h"

//---- HelloWorldAction ----------------------------------------------------------
//! comment action
//!	Structure of config:
//!<PRE>	{
//!		/Slot1	....
//!      ...
//!	}</PRE>
class EXPORTDECL_HELLOWORLD HelloWorldAction : public Action
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
