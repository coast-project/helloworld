/*
 * Copyright (c) 2001-2002 itopia
 * All Rights Reserved
 *
 * $Id$
 */

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
