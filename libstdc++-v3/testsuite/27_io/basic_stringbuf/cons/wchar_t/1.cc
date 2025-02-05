// 2004-09-29  Paolo Carlini  <pcarlini@suse.de>

// Copyright (C) 2004-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License along
// with this library; see the file COPYING3.  If not see
// <http://www.gnu.org/licenses/>.

// 27.7.1.1  basic_stringbuf constructors  [lib.stringbuf.cons]

#include <sstream>
#include <testsuite_hooks.h>
#include <testsuite_io.h>

// http://gcc.gnu.org/ml/libstdc++/2004-09/msg00243.html
void test01()
{
  __gnu_test::constraint_wstringbuf sbuf;
  VERIFY( sbuf.check_pointers() );
}

int main() 
{
  test01();
  return 0;
}
