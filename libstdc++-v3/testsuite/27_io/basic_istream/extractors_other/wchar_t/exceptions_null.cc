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

// The library still throws the original definition of std::ios::failure
// { dg-options "-D_GLIBCXX_USE_CXX11_ABI=0" }

#include <istream>
#include <ostream>
#include <streambuf>
#include <sstream>
#include <testsuite_hooks.h>

using namespace std;

void test2()
{
  wistringstream stream;
  stream >> static_cast<wstreambuf*>(0);
  VERIFY( stream.rdstate() & ios_base::failbit );
}

void test4()
{
  wistringstream stream;
  stream.exceptions(ios_base::failbit);

  try
    {
      stream >> static_cast<wstreambuf*>(0);
      VERIFY( false );
    }
  catch (ios_base::failure&)
    {
    }

  VERIFY( stream.rdstate() & ios_base::failbit );
}

// libstdc++/9371
int main()
{
  test2();
  test4();
  return 0;
}
