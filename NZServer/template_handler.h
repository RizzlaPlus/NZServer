//
//  template_handler.h
//  NZServer
//
//  Created by Maximilian Maldacker on 09/11/2014.
//  Copyright (c) 2014 Maximilian Maldacker. All rights reserved.
//

#ifndef __NZServer__template_handler__
#define __NZServer__template_handler__

#include "request.h"
#include "reply.h"
#include "template.h"

class template_handler
{
public:
    template_handler(const std::string & root);
    void handle_request(const request & req, reply & rep);

private:
    template_engine template_engine_;
    std::string root_;
};

#endif /* defined(__NZServer__template_handler__) */