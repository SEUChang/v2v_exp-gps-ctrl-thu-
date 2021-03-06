# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from perception_msgs/PtLocalizationRequest.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import perception_msgs.msg
import std_msgs.msg

class PtLocalizationRequest(genpy.Message):
  _md5sum = "160a51e9f1b26585fb6898083120feae"
  _type = "perception_msgs/PtLocalizationRequest"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """perception_msgs/Point pt

================================================================================
MSG: perception_msgs/Point
#############################
###       SunHao          ###
#############################

float64 x
float64 y
float64 z
float64 s
float64 cuv
float64 heading
float64 speed
float64 speedkmh

############################


int32 rtk_mode # 0: 无影响 1： Not rtk stop
int32 driving_mode # acc or collision avoidance
int32 special_mode  #

####################################33
int32 obs_search_strategy  # 0: donot search obs
int32 speed_mode  #
int32 obs_strategy  #
int32 follow_strategy  #
int32 cross_option  #
int32 reserved_option  #



############################

#int32 id
std_msgs/String uuid

#############################

#int32 line_id
std_msgs/String lane_uuid

#############################

#int32 section_id
std_msgs/String section_uuid



================================================================================
MSG: std_msgs/String
string data
"""
  __slots__ = ['pt']
  _slot_types = ['perception_msgs/Point']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       pt

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(PtLocalizationRequest, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.pt is None:
        self.pt = perception_msgs.msg.Point()
    else:
      self.pt = perception_msgs.msg.Point()

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
      buff.write(_get_struct_8d9i().pack(_x.pt.x, _x.pt.y, _x.pt.z, _x.pt.s, _x.pt.cuv, _x.pt.heading, _x.pt.speed, _x.pt.speedkmh, _x.pt.rtk_mode, _x.pt.driving_mode, _x.pt.special_mode, _x.pt.obs_search_strategy, _x.pt.speed_mode, _x.pt.obs_strategy, _x.pt.follow_strategy, _x.pt.cross_option, _x.pt.reserved_option))
      _x = self.pt.uuid.data
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self.pt.lane_uuid.data
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self.pt.section_uuid.data
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.pt is None:
        self.pt = perception_msgs.msg.Point()
      end = 0
      _x = self
      start = end
      end += 100
      (_x.pt.x, _x.pt.y, _x.pt.z, _x.pt.s, _x.pt.cuv, _x.pt.heading, _x.pt.speed, _x.pt.speedkmh, _x.pt.rtk_mode, _x.pt.driving_mode, _x.pt.special_mode, _x.pt.obs_search_strategy, _x.pt.speed_mode, _x.pt.obs_strategy, _x.pt.follow_strategy, _x.pt.cross_option, _x.pt.reserved_option,) = _get_struct_8d9i().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.pt.uuid.data = str[start:end].decode('utf-8')
      else:
        self.pt.uuid.data = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.pt.lane_uuid.data = str[start:end].decode('utf-8')
      else:
        self.pt.lane_uuid.data = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.pt.section_uuid.data = str[start:end].decode('utf-8')
      else:
        self.pt.section_uuid.data = str[start:end]
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
      buff.write(_get_struct_8d9i().pack(_x.pt.x, _x.pt.y, _x.pt.z, _x.pt.s, _x.pt.cuv, _x.pt.heading, _x.pt.speed, _x.pt.speedkmh, _x.pt.rtk_mode, _x.pt.driving_mode, _x.pt.special_mode, _x.pt.obs_search_strategy, _x.pt.speed_mode, _x.pt.obs_strategy, _x.pt.follow_strategy, _x.pt.cross_option, _x.pt.reserved_option))
      _x = self.pt.uuid.data
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self.pt.lane_uuid.data
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self.pt.section_uuid.data
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.pt is None:
        self.pt = perception_msgs.msg.Point()
      end = 0
      _x = self
      start = end
      end += 100
      (_x.pt.x, _x.pt.y, _x.pt.z, _x.pt.s, _x.pt.cuv, _x.pt.heading, _x.pt.speed, _x.pt.speedkmh, _x.pt.rtk_mode, _x.pt.driving_mode, _x.pt.special_mode, _x.pt.obs_search_strategy, _x.pt.speed_mode, _x.pt.obs_strategy, _x.pt.follow_strategy, _x.pt.cross_option, _x.pt.reserved_option,) = _get_struct_8d9i().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.pt.uuid.data = str[start:end].decode('utf-8')
      else:
        self.pt.uuid.data = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.pt.lane_uuid.data = str[start:end].decode('utf-8')
      else:
        self.pt.lane_uuid.data = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.pt.section_uuid.data = str[start:end].decode('utf-8')
      else:
        self.pt.section_uuid.data = str[start:end]
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_8d9i = None
def _get_struct_8d9i():
    global _struct_8d9i
    if _struct_8d9i is None:
        _struct_8d9i = struct.Struct("<8d9i")
    return _struct_8d9i
# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from perception_msgs/PtLocalizationResponse.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class PtLocalizationResponse(genpy.Message):
  _md5sum = "1e90f6b1d5bdc7872c8f3385bddd9cb1"
  _type = "perception_msgs/PtLocalizationResponse"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """int32 s
int32 l
int32 p
"""
  __slots__ = ['s','l','p']
  _slot_types = ['int32','int32','int32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       s,l,p

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(PtLocalizationResponse, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.s is None:
        self.s = 0
      if self.l is None:
        self.l = 0
      if self.p is None:
        self.p = 0
    else:
      self.s = 0
      self.l = 0
      self.p = 0

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
      buff.write(_get_struct_3i().pack(_x.s, _x.l, _x.p))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      _x = self
      start = end
      end += 12
      (_x.s, _x.l, _x.p,) = _get_struct_3i().unpack(str[start:end])
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
      buff.write(_get_struct_3i().pack(_x.s, _x.l, _x.p))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      _x = self
      start = end
      end += 12
      (_x.s, _x.l, _x.p,) = _get_struct_3i().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_3i = None
def _get_struct_3i():
    global _struct_3i
    if _struct_3i is None:
        _struct_3i = struct.Struct("<3i")
    return _struct_3i
class PtLocalization(object):
  _type          = 'perception_msgs/PtLocalization'
  _md5sum = '8aef997f06107575271338a7eeacbecc'
  _request_class  = PtLocalizationRequest
  _response_class = PtLocalizationResponse
