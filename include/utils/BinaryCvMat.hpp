/*
    (C) Copyright 2016 CEA LIST. All Rights Reserved.
    Contributor(s): Olivier BICHLER (olivier.bichler@cea.fr)

    This software is governed by the CeCILL-C license under French law and
    abiding by the rules of distribution of free software.  You can  use,
    modify and/ or redistribute the software under the terms of the CeCILL-C
    license as circulated by CEA, CNRS and INRIA at the following URL
    "http://www.cecill.info".

    As a counterpart to the access to the source code and  rights to copy,
    modify and redistribute granted by the license, users are provided only
    with a limited warranty  and the software's author,  the holder of the
    economic rights,  and the successive licensors  have only  limited
    liability.

    The fact that you are presently reading this means that you have had
    knowledge of the CeCILL-C license and that you accept its terms.
*/

#ifndef N2D2_BINARYCVMAT_H
#define N2D2_BINARYCVMAT_H

#include <fstream>
#include <stdexcept>
#include <string>

#include "cv.h"
#include "highgui.h"

namespace N2D2 {
namespace BinaryCvMat {
    void write(std::ostream& os, const cv::Mat& mat);
    void write(const std::string& fileName, const cv::Mat& mat);
    void read(std::istream& is, cv::Mat& mat);
    void read(const std::string& fileName, cv::Mat& mat);
}
}

#endif // N2D2_BINARYCVMAT_H