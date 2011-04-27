/*
 * Copyright (c) 2009, Peter Sommerlad and IFS Institute for Software at HSR Rapperswil, Switzerland
 * All rights reserved.
 *
 * This library/application is free software; you can redistribute and/or modify it under the terms of
 * the license that is included with this library/application in the file license.txt.
 */

#ifndef _DAImplTest_H
#define _DAImplTest_H

#include "TestCase.h"

class DAImplTest: public TestFramework::TestCase {
public:
	DAImplTest(TString tstrName) :
		TestCaseType(tstrName) {
	}
	static Test *suite();
	void CaseTest();
};

#endif
