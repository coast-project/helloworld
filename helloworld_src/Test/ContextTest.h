/*
 * Copyright (c) 2009, Peter Sommerlad and IFS Institute for Software at HSR Rapperswil, Switzerland
 * All rights reserved.
 *
 * This library/application is free software; you can redistribute and/or modify it under the terms of
 * the license that is included with this library/application in the file license.txt.
 */

#ifndef _ContextTest_H
#define _ContextTest_H

#include "TestCase.h"

//---- ContextTest ----------------------------------------------------------
//!TestCases description
class ContextTest : public TestFramework::TestCase
{
public:
	//--- constructors

    //!TestCase constructor
	//! \param name name of the test
	ContextTest(TString tstrName);

    //!destroys the test case
	~ContextTest();

	//--- public api

	//!builds up a suite of testcases for this test
	static Test *suite ();

    //!describe this testcase
	void CaseTest();
};

#endif
