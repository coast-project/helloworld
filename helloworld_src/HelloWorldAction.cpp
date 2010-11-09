/*
 * Copyright (c) 2009, Peter Sommerlad and IFS Institute for Software at HSR Rapperswil, Switzerland
 * All rights reserved.
 *
 * This library/application is free software; you can redistribute and/or modify it under the terms of
 * the license that is included with this library/application in the file license.txt.
 */

//--- interface include -------------------------------------------------------
#include "HelloWorldAction.h"

//--- standard modules used ----------------------------------------------------
#include "Context.h"
#include "Dbg.h"

//--- c-modules used -----------------------------------------------------------

//---- HelloWorldAction ---------------------------------------------------------------
RegisterAction(HelloWorldAction);

HelloWorldAction::HelloWorldAction(const char *name) : Action(name) { }

HelloWorldAction::~HelloWorldAction() { }

bool HelloWorldAction::DoExecAction(String &transitionToken, Context &ctx, const ROAnything &config)
{
	// this is the new method that also gets a config ( similar to Renderer::RenderAll )
	// write the action code here - you don't have to override DoAction anymore
	StartTrace(HelloWorldAction.DoExecAction);

	// lets go to the next page, a very simple action only for example
	transitionToken = "GoPicturePage";

	return true;
}
