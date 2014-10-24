/**
 * JavaScriptCoreCPP
 * Author: Matthew D. Langston
 *
 * Copyright (c) 2014 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License.
 * Please see the LICENSE included with this distribution for details.
 */

#ifndef _JAVASCRIPTCORECPP_RAII_JSDATE_HPP_
#define _JAVASCRIPTCORECPP_RAII_JSDATE_HPP_

#include "JavaScriptCoreCPP/RAII/JSObject.hpp"

namespace JavaScriptCoreCPP { namespace RAII {

/*!
  @class
  
  @discussion A JavaScript object of the Date type.

  The only way to create a JSDate is by using the
  JSContext::CreateDate member function.
*/
#ifdef JAVASCRIPTCORECPP_RAII_PERFORMANCE_COUNTER
class JSDate final : public JSObject, public ::JavaScriptCoreCPP::detail::JSPerformanceCounter<JSDate> {
#else
class JSDate final : public JSObject {
#endif
	
 private:

	// Only a JSContext can create a JSDate.
	JSDate(const JSContext& js_context) : JSDate(js_context, std::vector<JSValue>()) {
	}
	
	// Only a JSContext can create a JSDate.
	JSDate(const JSContext& js_context, const std::vector<JSValue>& arguments);

	friend JSContext;
};

}} // namespace JavaScriptCoreCPP { namespace RAII {

#endif // _JAVASCRIPTCORECPP_RAII_JSDATE_HPP_
