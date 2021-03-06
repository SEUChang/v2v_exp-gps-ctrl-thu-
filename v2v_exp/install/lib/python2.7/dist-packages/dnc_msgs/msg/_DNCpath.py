# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from dnc_msgs/DNCpath.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import dnc_msgs.msg

class DNCpath(genpy.Message):
  _md5sum = "99eb39ef67140679ac539ba30d82f7ee"
  _type = "dnc_msgs/DNCpath"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """#############################
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
  __slots__ = ['pts','s_flag','h_flag']
  _slot_types = ['dnc_msgs/DNCpoint[]','bool','bool']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       pts,s_flag,h_flag

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(DNCpath, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.pts is None:
        self.pts = []
      if self.s_flag is None:
        self.s_flag = False
      if self.h_flag is None:
        self.h_flag = False
    else:
      self.pts = []
      self.s_flag = False
      self.h_flag = False

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
      length = len(self.pts)
      buff.write(_struct_I.pack(length))
      for val1 in self.pts:
        _x = val1
        buff.write(_get_struct_6df().pack(_x.x, _x.y, _x.s, _x.cuv, _x.heading, _x.speed, _x.h))
      _x = self
      buff.write(_get_struct_2B().pack(_x.s_flag, _x.h_flag))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.pts is None:
        self.pts = None
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.pts = []
      for i in range(0, length):
        val1 = dnc_msgs.msg.DNCpoint()
        _x = val1
        start = end
        end += 52
        (_x.x, _x.y, _x.s, _x.cuv, _x.heading, _x.speed, _x.h,) = _get_struct_6df().unpack(str[start:end])
        self.pts.append(val1)
      _x = self
      start = end
      end += 2
      (_x.s_flag, _x.h_flag,) = _get_struct_2B().unpack(str[start:end])
      self.s_flag = bool(self.s_flag)
      self.h_flag = bool(self.h_flag)
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
      length = len(self.pts)
      buff.write(_struct_I.pack(length))
      for val1 in self.pts:
        _x = val1
        buff.write(_get_struct_6df().pack(_x.x, _x.y, _x.s, _x.cuv, _x.heading, _x.speed, _x.h))
      _x = self
      buff.write(_get_struct_2B().pack(_x.s_flag, _x.h_flag))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.pts is None:
        self.pts = None
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.pts = []
      for i in range(0, length):
        val1 = dnc_msgs.msg.DNCpoint()
        _x = val1
        start = end
        end += 52
        (_x.x, _x.y, _x.s, _x.cuv, _x.heading, _x.speed, _x.h,) = _get_struct_6df().unpack(str[start:end])
        self.pts.append(val1)
      _x = self
      start = end
      end += 2
      (_x.s_flag, _x.h_flag,) = _get_struct_2B().unpack(str[start:end])
      self.s_flag = bool(self.s_flag)
      self.h_flag = bool(self.h_flag)
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
