#ifndef _ROS_control_msgs_PointHeadFeedback_h
#define _ROS_control_msgs_PointHeadFeedback_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace control_msgs
{

  class PointHeadFeedback : public ros::Msg
  {
    public:
      float pointing_angle_error;

    PointHeadFeedback():
      pointing_angle_error(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
#ifndef ROS_MSG_DONT_SERIALIZE
      offset += serializeAvrFloat64(outbuffer + offset, this->pointing_angle_error);
#endif
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
#ifndef ROS_MSG_DONT_DESERIALIZE
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->pointing_angle_error));
#endif
     return offset;
    }

    const char * getType(){ return "control_msgs/PointHeadFeedback"; };
    const char * getMD5(){ return "cce80d27fd763682da8805a73316cab4"; };

  };

}
#endif