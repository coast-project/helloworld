/*
 * Copyright (c) 2001-2002 itopia
 * All Rights Reserved
 *
 * $Id$
 */

#ifndef _DAImplTest_H
#define _DAImplTest_H

#ifdef __GNUG__
	#pragma interface
#endif

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
