/*
 * Copyright (c) 2009, Peter Sommerlad and IFS Institute for Software at HSR Rapperswil, Switzerland
 * All rights reserved.
 *
 * This library/application is free software; you can redistribute and/or modify it under the terms of
 * the license that is included with this library/application in the file license.txt.
 */

#ifndef _DAImplTest_H
#define _DAImplTest_H

//---- baseclass include -------------------------------------------------
#include "TestCase.h"

//---- DAImplTest ----------------------------------------------------------
//!TestCases description
class DAImplTest : public TestFramework::TestCase
{
public:
	//--- constructors

    //!TestCase constructor
	//! \param name name of the test
	DAImplTest(TString tstrName);

    //!destroys the test case
	~DAImplTest();

	//--- public api

	//!builds up a suite of testcases for this test
	static Test *suite ();

    //!describe this testcase
	void CaseTest();
};

#endif
