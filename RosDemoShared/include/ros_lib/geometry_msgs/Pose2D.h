#ifndef _ROS_geometry_msgs_Pose2D_h
#define _ROS_geometry_msgs_Pose2D_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace geometry_msgs
{

  class Pose2D : public ros::Msg
  {
    public:
      float x;
      float y;
      float theta;

    Pose2D():
      x(0),
      y(0),
      theta(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
#ifndef ROS_MSG_DONT_SERIALIZE
      offset += serializeAvrFloat64(outbuffer + offset, this->x);
      offset += serializeAvrFloat64(outbuffer + offset, this->y);
      offset += serializeAvrFloat64(outbuffer + offset, this->theta);
#endif
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
#ifndef ROS_MSG_DONT_DESERIALIZE
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->x));
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->y));
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->theta));
#endif
     return offset;
    }

    const char * getType(){ return "geometry_msgs/Pose2D"; };
    const char * getMD5(){ return "938fa65709584ad8e77d238529be13b8"; };

  };

}
#endif