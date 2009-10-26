/*
 * Copyright (c) 2001-2002 itopia
 * All Rights Reserved
 *
 * $Id$
 */

#ifndef _ContextTest_H
#define _ContextTest_H

#ifdef __GNUG__
	#pragma interface
#endif

//---- baseclass include -------------------------------------------------
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
