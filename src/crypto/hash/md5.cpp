/*
 * <one line to give the program's name and a brief idea of what it does.>
 * Copyright (C) 2015  <copyright holder> <email>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 * 
 */

#include "md5.h"
#include <iostream>
namespace balhau {
  namespace crypto{
    Md5::Md5()
    {
      std::cout << "Constructor called" << std::endl;
    }

    Md5::Md5(const Md5& other)
    {
      std::cout << "Copy constructor called" << std::endl;
    }
    
    Md5::~Md5()
    {
      std::cout << "Destructor called" << std::endl;
    }

    
    char* Md5::digest(char* data)
    {
      return "MD5 Digest";
    }
    
    void Md5::update(char* data)
    {
       
    }
    
    char* Md5::finish()
    {
      return "Md5 Finished";
    }


  }
}