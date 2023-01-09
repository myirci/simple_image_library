#pragma once

#include <cstdio>
#include <iostream>
#include <new>
#include <memory>
#include <string>
#include <cstdlib>

#include <jpeglib.h>

#include <imglib/image/image.hpp>
#include <imglib/color/color.hpp>

#pragma warning(disable : 26812)
#pragma warning(disable : 4996)  

namespace imglib::jpeg
{
    using data_type = JSAMPLE;

    // Saves the given image to a jpeg file
    void Export(const std::string& fileName, int quality, const Image<data_type>& img);
    
    // Reads the given jpeg file
    void Import(const std::string& fileName, Image<data_type>& img);
}