# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from esr_radar/Object.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class Object(genpy.Message):
  _md5sum = "97ede7e7e19fbfe109801d49f808f9e9"
  _type = "esr_radar/Object"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """uint8 NEW_TARGET = 1
uint8 UPDATE_TARGET = 3
uint8 COASTED_TARGET = 4

float32 azimuth
float32 distance

float32 x
float32 y

float32 speed
uint8 status
uint8 id

"""
  # Pseudo-constants
  NEW_TARGET = 1
  UPDATE_TARGET = 3
  COASTED_TARGET = 4

  __slots__ = ['azimuth','distance','x','y','speed','status','id']
  _slot_types = ['float32','float32','float32','float32','float32','uint8','uint8']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       azimuth,distance,x,y,speed,status,id

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(Object, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.azimuth is None:
        self.azimuth = 0.
      if self.distance is None:
        self.distance = 0.
      if self.x is None:
        self.x = 0.
      if self.y is None:
        self.y = 0.
      if self.speed is None:
        self.speed = 0.
      if self.status is None:
        self.status = 0
      if self.id is None:
        self.id = 0
    else:
      self.azimuth = 0.
      self.distance = 0.
      self.x = 0.
      self.y = 0.
      self.speed = 0.
      self.status = 0
      self.id = 0

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
      buff.write(_get_struct_5f2B().pack(_x.azimuth, _x.distance, _x.x, _x.y, _x.speed, _x.status, _x.id))
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
      end += 22
      (_x.azimuth, _x.distance, _x.x, _x.y, _x.speed, _x.status, _x.id,) = _get_struct_5f2B().unpack(str[start:end])
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
      buff.write(_get_struct_5f2B().pack(_x.azimuth, _x.distance, _x.x, _x.y, _x.speed, _x.status, _x.id))
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
      end += 22
      (_x.azimuth, _x.distance, _x.x, _x.y, _x.speed, _x.status, _x.id,) = _get_struct_5f2B().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_5f2B = None
def _get_struct_5f2B():
    global _struct_5f2B
    if _struct_5f2B is None:
        _struct_5f2B = struct.Struct("<5f2B")
    return _struct_5f2B