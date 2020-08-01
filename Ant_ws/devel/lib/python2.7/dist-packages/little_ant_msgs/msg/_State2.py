# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from little_ant_msgs/State2.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import std_msgs.msg

class State2(genpy.Message):
  _md5sum = "7e1f5bf0137abb4b497e51cd65566aa6"
  _type = "little_ant_msgs/State2"
  _has_header = True #flag to mark the presence of a Header object
  _full_text = """#VCU_ABS_1  0x300

std_msgs/Header header

#  km/s
float32 wheel_speed_FL
float32 wheel_speed_FR
float32 wheel_speed_RL
float32 wheel_speed_RR

float32 vehicle_speed   # m/s

bool wheel_speed_FL_valid
bool wheel_speed_FR_valid
bool wheel_speed_RL_valid
bool wheel_speed_RR_valid



================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
# 0: no frame
# 1: global frame
string frame_id
"""
  __slots__ = ['header','wheel_speed_FL','wheel_speed_FR','wheel_speed_RL','wheel_speed_RR','vehicle_speed','wheel_speed_FL_valid','wheel_speed_FR_valid','wheel_speed_RL_valid','wheel_speed_RR_valid']
  _slot_types = ['std_msgs/Header','float32','float32','float32','float32','float32','bool','bool','bool','bool']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       header,wheel_speed_FL,wheel_speed_FR,wheel_speed_RL,wheel_speed_RR,vehicle_speed,wheel_speed_FL_valid,wheel_speed_FR_valid,wheel_speed_RL_valid,wheel_speed_RR_valid

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(State2, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.wheel_speed_FL is None:
        self.wheel_speed_FL = 0.
      if self.wheel_speed_FR is None:
        self.wheel_speed_FR = 0.
      if self.wheel_speed_RL is None:
        self.wheel_speed_RL = 0.
      if self.wheel_speed_RR is None:
        self.wheel_speed_RR = 0.
      if self.vehicle_speed is None:
        self.vehicle_speed = 0.
      if self.wheel_speed_FL_valid is None:
        self.wheel_speed_FL_valid = False
      if self.wheel_speed_FR_valid is None:
        self.wheel_speed_FR_valid = False
      if self.wheel_speed_RL_valid is None:
        self.wheel_speed_RL_valid = False
      if self.wheel_speed_RR_valid is None:
        self.wheel_speed_RR_valid = False
    else:
      self.header = std_msgs.msg.Header()
      self.wheel_speed_FL = 0.
      self.wheel_speed_FR = 0.
      self.wheel_speed_RL = 0.
      self.wheel_speed_RR = 0.
      self.vehicle_speed = 0.
      self.wheel_speed_FL_valid = False
      self.wheel_speed_FR_valid = False
      self.wheel_speed_RL_valid = False
      self.wheel_speed_RR_valid = False

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_get_struct_5f4B().pack(_x.wheel_speed_FL, _x.wheel_speed_FR, _x.wheel_speed_RL, _x.wheel_speed_RR, _x.vehicle_speed, _x.wheel_speed_FL_valid, _x.wheel_speed_FR_valid, _x.wheel_speed_RL_valid, _x.wheel_speed_RR_valid))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 24
      (_x.wheel_speed_FL, _x.wheel_speed_FR, _x.wheel_speed_RL, _x.wheel_speed_RR, _x.vehicle_speed, _x.wheel_speed_FL_valid, _x.wheel_speed_FR_valid, _x.wheel_speed_RL_valid, _x.wheel_speed_RR_valid,) = _get_struct_5f4B().unpack(str[start:end])
      self.wheel_speed_FL_valid = bool(self.wheel_speed_FL_valid)
      self.wheel_speed_FR_valid = bool(self.wheel_speed_FR_valid)
      self.wheel_speed_RL_valid = bool(self.wheel_speed_RL_valid)
      self.wheel_speed_RR_valid = bool(self.wheel_speed_RR_valid)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_get_struct_5f4B().pack(_x.wheel_speed_FL, _x.wheel_speed_FR, _x.wheel_speed_RL, _x.wheel_speed_RR, _x.vehicle_speed, _x.wheel_speed_FL_valid, _x.wheel_speed_FR_valid, _x.wheel_speed_RL_valid, _x.wheel_speed_RR_valid))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 24
      (_x.wheel_speed_FL, _x.wheel_speed_FR, _x.wheel_speed_RL, _x.wheel_speed_RR, _x.vehicle_speed, _x.wheel_speed_FL_valid, _x.wheel_speed_FR_valid, _x.wheel_speed_RL_valid, _x.wheel_speed_RR_valid,) = _get_struct_5f4B().unpack(str[start:end])
      self.wheel_speed_FL_valid = bool(self.wheel_speed_FL_valid)
      self.wheel_speed_FR_valid = bool(self.wheel_speed_FR_valid)
      self.wheel_speed_RL_valid = bool(self.wheel_speed_RL_valid)
      self.wheel_speed_RR_valid = bool(self.wheel_speed_RR_valid)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_3I = None
def _get_struct_3I():
    global _struct_3I
    if _struct_3I is None:
        _struct_3I = struct.Struct("<3I")
    return _struct_3I
_struct_5f4B = None
def _get_struct_5f4B():
    global _struct_5f4B
    if _struct_5f4B is None:
        _struct_5f4B = struct.Struct("<5f4B")
    return _struct_5f4B
