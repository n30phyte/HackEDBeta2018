//
// Created by n30phyte on 17/11/18.
//

#ifndef HACKEDBETA_HEADLESSOUTPUT_H
#define HACKEDBETA_HEADLESSOUTPUT_H
#include "BaseOutput.h"
#include <vector>
#include "pipe.pb.h"
#include <sstream>
#include <zmq.hpp>

class HeadlessOutput : public BaseOutput {
public:
    explicit HeadlessOutput();
    void Update(std::vector<int>, std::vector<int>, std::vector<int>);
private:
    zmq::context_t context = zmq::context_t(1);
    zmq::socket_t publisher = zmq::socket_t(context, ZMQ_PUB);

};

#endif //HACKEDBETA_HEADLESSOUTPUT_H
