//
// Created by n30phyte on 17/11/18.
//

#ifndef HACKEDBETA_HEADLESSOUTPUT_H
#define HACKEDBETA_HEADLESSOUTPUT_H
#include "BaseOutput.h"
#include <vector>
#include "pipe.pb.h"
#include <sstream>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

class HeadlessOutput : public BaseOutput {
public:
    explicit HeadlessOutput();
    void Update(std::vector<int>, std::vector<int>, std::vector<int>);
private:
    int pipe;
};

#endif //HACKEDBETA_HEADLESSOUTPUT_H
