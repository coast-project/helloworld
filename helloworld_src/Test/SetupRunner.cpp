/*
 * Copyright (c) 2001-2002 itopia
 * All Rights Reserved
 *
 * $Id$
 */

#if defined(__GNUG__) || defined(__SUNPRO_CC)
	#ident "@(#) $Id$ (c) itopia"
#else
	static char static_c_rcs_id[] = "@(#) $Id$ (c) itopia";
#endif

//--- standard modules used ----------------------------------------------------

//--- interface include --------------------------------------------------------
#include "TestRunner.h"

//--- test cases ---------------------------------------------------------------
#include "DAImplTest.h"
#include "ContextTest.h"

void setupRunner(TestRunner &runner)
{
	ADD_SUITE(runner, DAImplTest);
	ADD_SUITE(runner, ContextTest);
} // setupRunner
