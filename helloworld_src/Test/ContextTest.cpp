/*
 * Copyright (c) 2001-2002 itopia
 * All Rights Reserved
 *
 * $Id$
 */

#ifdef __GNUG__
	#pragma implementation
#endif

//--- standard modules used ----------------------------------------------------
#include "TestSuite.h"
#include "Anything.h"
#include "Context.h"
#include "Page.h"
#include "Dbg.h"

//--- module under test -----------------------------------------------------
#include "Context.h"

//--- interface include -------------------------------------------------------
#include "ContextTest.h"

//---- ContextTest ----------------------------------------------------------------
ContextTest::ContextTest(TString tstrName) : TestCaseType(tstrName)
{
	StartTrace(ContextTest.Ctor);
}

ContextTest::~ContextTest()
{
	StartTrace(ContextTest.Dtor);
}

void ContextTest::CaseTest() {
	StartTrace(ContextTest.CaseTest);

	Anything env, query;
	env["name"] = "marco";
	query["id"] = 12345;
	Context ourContext( env, query, 0, 0, 0, 0 );

	Trace( "TRACE: Name = " << ourContext.Lookup( "name" ).AsString() );

	t_assert( ourContext.Lookup("name") == "marco" );
	assertEqual("marco", ourContext.Lookup("name", "not found") );
	assertEqualm("marco", ourContext.Lookup("name", "not found"), "Lookup semantic not understood");

	// Page example
	Page *myPage = Page::FindPage( "Page" );
	ourContext.SetPage( myPage );
	Page *newPage = ourContext.GetPage();
	Trace( "TRACE: PageLayout = " << ourContext.Lookup( "PageLayout" ).AsString() );

	t_assert( myPage == newPage);
	assertEqualm( (long)myPage, (long)newPage, "Page screwup");
}

// builds up a suite of testcases, add a line for each testmethod
Test *ContextTest::suite ()
{
	StartTrace(ContextTest.suite);
	TestSuite *testSuite = new TestSuite;

	ADD_CASE(testSuite, ContextTest, CaseTest);

	return testSuite;
}
