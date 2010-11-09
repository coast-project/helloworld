/*
 * Copyright (c) 2009, Peter Sommerlad and IFS Institute for Software at HSR Rapperswil, Switzerland
 * All rights reserved.
 *
 * This library/application is free software; you can redistribute and/or modify it under the terms of
 * the license that is included with this library/application in the file license.txt.
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
