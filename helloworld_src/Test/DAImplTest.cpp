/*
 * Copyright (c) 2001 itopia
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
#include "DataAccess.h"
#include "ReadFileDAImpl.h"
#include "Dbg.h"

//--- module under test -----------------------------------------------------
#include "StreamingAnythingMapper.h"

//--- interface include -------------------------------------------------------
#include "DAImplTest.h"

//---- DAImplTest ----------------------------------------------------------------
DAImplTest::DAImplTest(TString tstrName) : TestCaseType(tstrName)
{
	StartTrace(DAImplTest.Ctor);
}

DAImplTest::~DAImplTest()
{
	StartTrace(DAImplTest.Dtor);
}

void DAImplTest::CaseTest()
{
	StartTrace(DAImplTest.CaseTest);

	{
		Anything inputArgs;
		Context ctx( inputArgs );
		ctx.GetTmpStore()["Filename"]= "data";
		ctx.GetTmpStore()["Extension"]= "any";

		AnythingToStreamMapper in("TestFileRead");
		in.Initialize("ParameterMapper");

		StreamToAnythingMapper out("TestFileRead");
		out.Initialize("OuputMapper");

		ReadFileDAImpl da("ReadFileDAImpl");
		da.Initialize("TestFileRead");

		da.Exec( ctx, &in, &out );

		Anything expected;
		expected["a"]= "A";
		expected["b"]= "B";
		assertAnyEqual(expected, ctx.GetTmpStore()["Mapper"]["FileContent"]);
	}

	{
		Anything inputArgs;
		Context ctx( inputArgs );

		AnythingToStreamMapper in("TestFileRead");
		in.Initialize("ParameterMapper");

		StreamToAnythingMapper out("TestFileRead");
		out.Initialize("OuputMapper");

		ReadFileDAImpl da("ReadFileDAImpl");
		da.Initialize("DataAccessImpl");

		ctx.Push("DataAccess", &da);
		da.Exec( ctx, &in, &out );
		ctx.Remove("DataAccess");

		Anything expected;
		expected["a"]= "A";
		expected["b"]= "B";
		assertAnyEqual(expected, ctx.GetTmpStore()["Mapper"]["FileContent"]);
	}
}

// builds up a suite of testcases, add a line for each testmethod
Test *DAImplTest::suite ()
{
	StartTrace(DAImplTest.suite);
	TestSuite *testSuite = new TestSuite;

	ADD_CASE(testSuite, DAImplTest, CaseTest);

	return testSuite;
}
