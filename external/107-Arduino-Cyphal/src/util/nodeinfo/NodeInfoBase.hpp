/**
 * This software is distributed under the terms of the MIT License.
 * Copyright (c) 2020-2023 LXRobotics.
 * Author: Alexander Entinger <alexander.entinger@lxrobotics.com>
 * Contributors: https://github.com/107-systems/107-Arduino-Cyphal/graphs/contributors.
 */

#pragma once

/**************************************************************************************
 * INCLUDES
 **************************************************************************************/

#include <memory>

#include "../../DSDL_Types.h"

/**************************************************************************************
 * NAMESPACE
 **************************************************************************************/

namespace cyphal
{

namespace impl
{

/**************************************************************************************
 * CLASS DECLARATION
 **************************************************************************************/

class NodeInfoBase
{
public:
  NodeInfoBase()
    : _node_info_rsp{}
  {}

protected:
  uavcan::node::GetInfo::Response_1_0 _node_info_rsp;
};

/**************************************************************************************
 * NAMESPACE
 **************************************************************************************/

} /* impl */

/**************************************************************************************
 * TYPEDEF
 **************************************************************************************/

using NodeInfo = std::shared_ptr<impl::NodeInfoBase>;

/**************************************************************************************
 * NAMESPACE
 **************************************************************************************/

} /* cyphal */