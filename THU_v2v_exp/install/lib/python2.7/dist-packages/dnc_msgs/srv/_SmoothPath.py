# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from dnc_msgs/SmoothPathRequest.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import dnc_msgs.msg

class SmoothPathRequest(genpy.Message):
  _md5sum = "3e2477dfc2c7b4fe5d98a2685ecb8bdb"
  _type = "dnc_msgs/SmoothPathRequest"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """dnc_msgs/DNCpoint st_pt
dnc_msgs/DNCpath  ori_path

================================================================================
MSG: dnc_msgs/DNCpoint
#############################
###       SunHao          ###
#############################


float64 x
float64 y
float64 s

float64 cuv
float64 heading
float64 speed

float32 h

================================================================================
MSG: dnc_msgs/DNCpath
#############################
###       SunHao          ###
#############################


dnc_msgs/DNCpoint[] pts
bool s_flag
bool h_flag"""
  __slots__ = ['st_pt','ori_path']
  _slot_types = ['dnc_msgs/DNCpoint','dnc_msgs/DNCpath']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       st_pt,ori_path

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(SmoothPathRequest, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.st_pt is None:
        self.st_pt = dnc_msgs.msg.DNCpoint()
      if self.ori_path is None:
        self.ori_path = dnc_msgs.msg.DNCpath()
    else:
      self.st_pt = dnc_msgs.msg.DNCpoint()
      self.ori_path = dnc_msgs.msg.DNCpath()

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
      buff.write(_get_struct_6df().pack(_x.st_pt.x, _x.st_pt.y, _x.st_pt.s, _x.st_pt.cuv, _x.st_pt.heading, _x.st_pt.speed, _x.st_pt.h))
      length = len(self.ori_path.pts)
      buff.write(_struct_I.pack(length))
      for val1 in self.ori_path.pts:
        _x = val1
        buff.write(_get_struct_6df().pack(_x.x, _x.y, _x.s, _x.cuv, _x.heading, _x.speed, _x.h))
      _x = self
      buff.write(_get_struct_2B().pack(_x.ori_path.s_flag, _x.ori_path.h_flag))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.st_pt is None:
        self.st_pt = dnc_msgs.msg.DNCpoint()
      if self.ori_path is None:
        self.ori_path = dnc_msgs.msg.DNCpath()
      end = 0
      _x = self
      start = end
      end += 52
      (_x.st_pt.x, _x.st_pt.y, _x.st_pt.s, _x.st_pt.cuv, _x.st_pt.heading, _x.st_pt.speed, _x.st_pt.h,) = _get_struct_6df().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.ori_path.pts = []
      for i in range(0, length):
        val1 = dnc_msgs.msg.DNCpoint()
        _x = val1
        start = end
        end += 52
        (_x.x, _x.y, _x.s, _x.cuv, _x.heading, _x.speed, _x.h,) = _get_struct_6df().unpack(str[start:end])
        self.ori_path.pts.append(val1)
      _x = self
      start = end
      end += 2
      (_x.ori_path.s_flag, _x.ori_path.h_flag,) = _get_struct_2B().unpack(str[start:end])
      self.ori_path.s_flag = bool(self.ori_path.s_flag)
      self.ori_path.h_flag = bool(self.ori_path.h_flag)
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
      buff.write(_get_struct_6df().pack(_x.st_pt.x, _x.st_pt.y, _x.st_pt.s, _x.st_pt.cuv, _x.st_pt.heading, _x.st_pt.speed, _x.st_pt.h))
      length = len(self.ori_path.pts)
      buff.write(_struct_I.pack(length))
      for val1 in self.ori_path.pts:
        _x = val1
        buff.write(_get_struct_6df().pack(_x.x, _x.y, _x.s, _x.cuv, _x.heading, _x.speed, _x.h))
      _x = self
      buff.write(_get_struct_2B().pack(_x.ori_path.s_flag, _x.ori_path.h_flag))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.st_pt is None:
        self.st_pt = dnc_msgs.msg.DNCpoint()
      if self.ori_path is None:
        self.ori_path = dnc_msgs.msg.DNCpath()
      end = 0
      _x = self
      start = end
      end += 52
      (_x.st_pt.x, _x.st_pt.y, _x.st_pt.s, _x.st_pt.cuv, _x.st_pt.heading, _x.st_pt.speed, _x.st_pt.h,) = _get_struct_6df().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.ori_path.pts = []
      for i in range(0, length):
        val1 = dnc_msgs.msg.DNCpoint()
        _x = val1
        start = end
        end += 52
        (_x.x, _x.y, _x.s, _x.cuv, _x.heading, _x.speed, _x.h,) = _get_struct_6df().unpack(str[start:end])
        self.ori_path.pts.append(val1)
      _x = self
      start = end
      end += 2
      (_x.ori_path.s_flag, _x.ori_path.h_flag,) = _get_struct_2B().unpack(str[start:end])
      self.ori_path.s_flag = bool(self.ori_path.s_flag)
      self.ori_path.h_flag = bool(self.ori_path.h_flag)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_2B = None
def _get_struct_2B():
    global _struct_2B
    if _struct_2B is None:
        _struct_2B = struct.Struct("<2B")
    return _struct_2B
_struct_6df = None
def _get_struct_6df():
    global _struct_6df
    if _struct_6df is None:
        _struct_6df = struct.Struct("<6df")
    return _struct_6df
# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from dnc_msgs/SmoothPathResponse.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import dnc_msgs.msg

class SmoothPathResponse(genpy.Message):
  _md5sum = "99200e4c6d865f8a9edb8b7a03edba5e"
  _type = "dnc_msgs/SmoothPathResponse"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """dnc_msgs/DNCpath res_path

================================================================================
MSG: dnc_msgs/DNCpath
#############################
###       SunHao          ###
#############################


dnc_msgs/DNCpoint[] pts
bool s_flag
bool h_flag
================================================================================
MSG: dnc_msgs/DNCpoint
#############################
###       SunHao          ###
#############################


float64 x
float64 y
float64 s

float64 cuv
float64 heading
float64 speed

float32 h
"""
  __slots__ = ['res_path']
  _slot_types = ['dnc_msgs/DNCpath']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       res_path

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(SmoothPathResponse, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.res_path is None:
        self.res_path = dnc_msgs.msg.DNCpath()
    else:
      self.res_path = dnc_msgs.msg.DNCpath()

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
      length = len(self.res_path.pts)
      buff.write(_struct_I.pack(length))
      for val1 in self.res_path.pts:
        _x = val1
        buff.write(_get_struct_6df().pack(_x.x, _x.y, _x.s, _x.cuv, _x.heading, _x.speed, _x.h))
      _x = self
      buff.write(_get_struct_2B().pack(_x.res_path.s_flag, _x.res_path.h_flag))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.res_path is None:
        self.res_path = dnc_msgs.msg.DNCpath()
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.res_path.pts = []
      for i in range(0, length):
        val1 = dnc_msgs.msg.DNCpoint()
        _x = val1
        start = end
        end += 52
        (_x.x, _x.y, _x.s, _x.cuv, _x.heading, _x.speed, _x.h,) = _get_struct_6df().unpack(str[start:end])
        self.res_path.pts.append(val1)
      _x = self
      start = end
      end += 2
      (_x.res_path.s_flag, _x.res_path.h_flag,) = _get_struct_2B().unpack(str[start:end])
      self.res_path.s_flag = bool(self.res_path.s_flag)
      self.res_path.h_flag = bool(self.res_path.h_flag)
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
      length = len(self.res_path.pts)
      buff.write(_struct_I.pack(length))
      for val1 in self.res_path.pts:
        _x = val1
        buff.write(_get_struct_6df().pack(_x.x, _x.y, _x.s, _x.cuv, _x.heading, _x.speed, _x.h))
      _x = self
      buff.write(_get_struct_2B().pack(_x.res_path.s_flag, _x.res_path.h_flag))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.res_path is None:
        self.res_path = dnc_msgs.msg.DNCpath()
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.res_path.pts = []
      for i in range(0, length):
        val1 = dnc_msgs.msg.DNCpoint()
        _x = val1
        start = end
        end += 52
        (_x.x, _x.y, _x.s, _x.cuv, _x.heading, _x.speed, _x.h,) = _get_struct_6df().unpack(str[start:end])
        self.res_path.pts.append(val1)
      _x = self
      start = end
      end += 2
      (_x.res_path.s_flag, _x.res_path.h_flag,) = _get_struct_2B().unpack(str[start:end])
      self.res_path.s_flag = bool(self.res_path.s_flag)
      self.res_path.h_flag = bool(self.res_path.h_flag)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_2B = None
def _get_struct_2B():
    global _struct_2B
    if _struct_2B is None:
        _struct_2B = struct.Struct("<2B")
    return _struct_2B
_struct_6df = None
def _get_struct_6df():
    global _struct_6df
    if _struct_6df is None:
        _struct_6df = struct.Struct("<6df")
    return _struct_6df
class SmoothPath(object):
  _type          = 'dnc_msgs/SmoothPath'
  _md5sum = 'f4c127e6fd3a1d84b001ac0a03f0e720'
  _request_class  = SmoothPathRequest
  _response_class = SmoothPathResponse