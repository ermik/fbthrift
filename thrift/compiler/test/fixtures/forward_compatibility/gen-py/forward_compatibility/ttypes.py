#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

from __future__ import absolute_import
import six
from thrift.util.Recursive import fix_spec
from thrift.Thrift import *
from thrift.protocol.TProtocol import TProtocolException



import pprint
import warnings
from thrift import Thrift
from thrift.transport import TTransport
from thrift.protocol import TBinaryProtocol
from thrift.protocol import TCompactProtocol
from thrift.protocol import THeaderProtocol
try:
  from thrift.protocol import fastproto
except:
  fastproto = None
all_structs = []
UTF8STRINGS = bool(0) or sys.version_info.major >= 3

__all__ = ['UTF8STRINGS', 'OldStructure', 'NewStructure', 'NewStructure2']

class OldStructure:
  """
  Attributes:
   - features
  """

  thrift_spec = None
  thrift_field_annotations = None
  thrift_struct_annotations = None
  __init__ = None
  @staticmethod
  def isUnion():
    return False

  def read(self, iprot):
    if (isinstance(iprot, TBinaryProtocol.TBinaryProtocolAccelerated) or (isinstance(iprot, THeaderProtocol.THeaderProtocolAccelerate) and iprot.get_protocol_id() == THeaderProtocol.THeaderProtocol.T_BINARY_PROTOCOL)) and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None and fastproto is not None:
      fastproto.decode(self, iprot.trans, [self.__class__, self.thrift_spec, False], utf8strings=UTF8STRINGS, protoid=0)
      self.checkRequired()
      return
    if (isinstance(iprot, TCompactProtocol.TCompactProtocolAccelerated) or (isinstance(iprot, THeaderProtocol.THeaderProtocolAccelerate) and iprot.get_protocol_id() == THeaderProtocol.THeaderProtocol.T_COMPACT_PROTOCOL)) and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None and fastproto is not None:
      fastproto.decode(self, iprot.trans, [self.__class__, self.thrift_spec, False], utf8strings=UTF8STRINGS, protoid=2)
      self.checkRequired()
      return
    iprot.readStructBegin()
    while True:
      (fname, ftype, fid) = iprot.readFieldBegin()
      if ftype == TType.STOP:
        break
      if fid == 1:
        if ftype == TType.MAP:
          self.features = {}
          (_ktype1, _vtype2, _size0 ) = iprot.readMapBegin() 
          if _size0 >= 0:
            for _i4 in six.moves.range(_size0):
              _key5 = iprot.readI16()
              _val6 = iprot.readDouble()
              self.features[_key5] = _val6
          else: 
            while iprot.peekMap():
              _key7 = iprot.readI16()
              _val8 = iprot.readDouble()
              self.features[_key7] = _val8
          iprot.readMapEnd()
        else:
          iprot.skip(ftype)
      else:
        iprot.skip(ftype)
      iprot.readFieldEnd()
    iprot.readStructEnd()
    self.checkRequired()

  def checkRequired(self):
    return

  def write(self, oprot):
    if (isinstance(oprot, TBinaryProtocol.TBinaryProtocolAccelerated) or (isinstance(oprot, THeaderProtocol.THeaderProtocolAccelerate) and oprot.get_protocol_id() == THeaderProtocol.THeaderProtocol.T_BINARY_PROTOCOL)) and self.thrift_spec is not None and fastproto is not None:
      oprot.trans.write(fastproto.encode(self, [self.__class__, self.thrift_spec, False], utf8strings=UTF8STRINGS, protoid=0))
      return
    if (isinstance(oprot, TCompactProtocol.TCompactProtocolAccelerated) or (isinstance(oprot, THeaderProtocol.THeaderProtocolAccelerate) and oprot.get_protocol_id() == THeaderProtocol.THeaderProtocol.T_COMPACT_PROTOCOL)) and self.thrift_spec is not None and fastproto is not None:
      oprot.trans.write(fastproto.encode(self, [self.__class__, self.thrift_spec, False], utf8strings=UTF8STRINGS, protoid=2))
      return
    oprot.writeStructBegin('OldStructure')
    if self.features != None:
      oprot.writeFieldBegin('features', TType.MAP, 1)
      oprot.writeMapBegin(TType.I16, TType.DOUBLE, len(self.features))
      for kiter9,viter10 in self.features.items():
        oprot.writeI16(kiter9)
        oprot.writeDouble(viter10)
      oprot.writeMapEnd()
      oprot.writeFieldEnd()
    oprot.writeFieldStop()
    oprot.writeStructEnd()

  def __repr__(self):
    L = []
    padding = ' ' * 4
    value = pprint.pformat(self.features, indent=0)
    value = padding.join(value.splitlines(True))
    L.append('    features=%s' % (value))
    return "%s(\n%s)" % (self.__class__.__name__, ",\n".join(L))

  def __eq__(self, other):
    if not isinstance(other, self.__class__):
      return False

    return self.__dict__ == other.__dict__ 

  def __ne__(self, other):
    return not (self == other)

  # Override the __hash__ function for Python3 - t10434117
  if not six.PY2:
    __hash__ = object.__hash__

class NewStructure:
  """
  Attributes:
   - features
  """

  thrift_spec = None
  thrift_field_annotations = None
  thrift_struct_annotations = None
  __init__ = None
  @staticmethod
  def isUnion():
    return False

  def read(self, iprot):
    if (isinstance(iprot, TBinaryProtocol.TBinaryProtocolAccelerated) or (isinstance(iprot, THeaderProtocol.THeaderProtocolAccelerate) and iprot.get_protocol_id() == THeaderProtocol.THeaderProtocol.T_BINARY_PROTOCOL)) and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None and fastproto is not None:
      fastproto.decode(self, iprot.trans, [self.__class__, self.thrift_spec, False], utf8strings=UTF8STRINGS, protoid=0)
      self.checkRequired()
      return
    if (isinstance(iprot, TCompactProtocol.TCompactProtocolAccelerated) or (isinstance(iprot, THeaderProtocol.THeaderProtocolAccelerate) and iprot.get_protocol_id() == THeaderProtocol.THeaderProtocol.T_COMPACT_PROTOCOL)) and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None and fastproto is not None:
      fastproto.decode(self, iprot.trans, [self.__class__, self.thrift_spec, False], utf8strings=UTF8STRINGS, protoid=2)
      self.checkRequired()
      return
    iprot.readStructBegin()
    while True:
      (fname, ftype, fid) = iprot.readFieldBegin()
      if ftype == TType.STOP:
        break
      if fid == 1:
        if ftype == TType.MAP:
          self.features = {}
          (_ktype12, _vtype13, _size11 ) = iprot.readMapBegin() 
          if _size11 >= 0:
            for _i15 in six.moves.range(_size11):
              _key16 = iprot.readI16()
              _val17 = iprot.readDouble()
              self.features[_key16] = _val17
          else: 
            while iprot.peekMap():
              _key18 = iprot.readI16()
              _val19 = iprot.readDouble()
              self.features[_key18] = _val19
          iprot.readMapEnd()
        else:
          iprot.skip(ftype)
      else:
        iprot.skip(ftype)
      iprot.readFieldEnd()
    iprot.readStructEnd()
    self.checkRequired()

  def checkRequired(self):
    return

  def write(self, oprot):
    if (isinstance(oprot, TBinaryProtocol.TBinaryProtocolAccelerated) or (isinstance(oprot, THeaderProtocol.THeaderProtocolAccelerate) and oprot.get_protocol_id() == THeaderProtocol.THeaderProtocol.T_BINARY_PROTOCOL)) and self.thrift_spec is not None and fastproto is not None:
      oprot.trans.write(fastproto.encode(self, [self.__class__, self.thrift_spec, False], utf8strings=UTF8STRINGS, protoid=0))
      return
    if (isinstance(oprot, TCompactProtocol.TCompactProtocolAccelerated) or (isinstance(oprot, THeaderProtocol.THeaderProtocolAccelerate) and oprot.get_protocol_id() == THeaderProtocol.THeaderProtocol.T_COMPACT_PROTOCOL)) and self.thrift_spec is not None and fastproto is not None:
      oprot.trans.write(fastproto.encode(self, [self.__class__, self.thrift_spec, False], utf8strings=UTF8STRINGS, protoid=2))
      return
    oprot.writeStructBegin('NewStructure')
    if self.features != None:
      oprot.writeFieldBegin('features', TType.MAP, 1)
      oprot.writeMapBegin(TType.I16, TType.DOUBLE, len(self.features))
      for kiter20,viter21 in self.features.items():
        oprot.writeI16(kiter20)
        oprot.writeDouble(viter21)
      oprot.writeMapEnd()
      oprot.writeFieldEnd()
    oprot.writeFieldStop()
    oprot.writeStructEnd()

  def __repr__(self):
    L = []
    padding = ' ' * 4
    value = pprint.pformat(self.features, indent=0)
    value = padding.join(value.splitlines(True))
    L.append('    features=%s' % (value))
    return "%s(\n%s)" % (self.__class__.__name__, ",\n".join(L))

  def __eq__(self, other):
    if not isinstance(other, self.__class__):
      return False

    return self.__dict__ == other.__dict__ 

  def __ne__(self, other):
    return not (self == other)

  # Override the __hash__ function for Python3 - t10434117
  if not six.PY2:
    __hash__ = object.__hash__

class NewStructure2:
  """
  Attributes:
   - features
  """

  thrift_spec = None
  thrift_field_annotations = None
  thrift_struct_annotations = None
  __init__ = None
  @staticmethod
  def isUnion():
    return False

  def read(self, iprot):
    if (isinstance(iprot, TBinaryProtocol.TBinaryProtocolAccelerated) or (isinstance(iprot, THeaderProtocol.THeaderProtocolAccelerate) and iprot.get_protocol_id() == THeaderProtocol.THeaderProtocol.T_BINARY_PROTOCOL)) and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None and fastproto is not None:
      fastproto.decode(self, iprot.trans, [self.__class__, self.thrift_spec, False], utf8strings=UTF8STRINGS, protoid=0)
      self.checkRequired()
      return
    if (isinstance(iprot, TCompactProtocol.TCompactProtocolAccelerated) or (isinstance(iprot, THeaderProtocol.THeaderProtocolAccelerate) and iprot.get_protocol_id() == THeaderProtocol.THeaderProtocol.T_COMPACT_PROTOCOL)) and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None and fastproto is not None:
      fastproto.decode(self, iprot.trans, [self.__class__, self.thrift_spec, False], utf8strings=UTF8STRINGS, protoid=2)
      self.checkRequired()
      return
    iprot.readStructBegin()
    while True:
      (fname, ftype, fid) = iprot.readFieldBegin()
      if ftype == TType.STOP:
        break
      if fid == 1:
        if ftype == TType.MAP:
          self.features = {}
          (_ktype23, _vtype24, _size22 ) = iprot.readMapBegin() 
          if _size22 >= 0:
            for _i26 in six.moves.range(_size22):
              _key27 = iprot.readI16()
              _val28 = iprot.readFloat()
              self.features[_key27] = _val28
          else: 
            while iprot.peekMap():
              _key29 = iprot.readI16()
              _val30 = iprot.readFloat()
              self.features[_key29] = _val30
          iprot.readMapEnd()
        else:
          iprot.skip(ftype)
      else:
        iprot.skip(ftype)
      iprot.readFieldEnd()
    iprot.readStructEnd()
    self.checkRequired()

  def checkRequired(self):
    return

  def write(self, oprot):
    if (isinstance(oprot, TBinaryProtocol.TBinaryProtocolAccelerated) or (isinstance(oprot, THeaderProtocol.THeaderProtocolAccelerate) and oprot.get_protocol_id() == THeaderProtocol.THeaderProtocol.T_BINARY_PROTOCOL)) and self.thrift_spec is not None and fastproto is not None:
      oprot.trans.write(fastproto.encode(self, [self.__class__, self.thrift_spec, False], utf8strings=UTF8STRINGS, protoid=0))
      return
    if (isinstance(oprot, TCompactProtocol.TCompactProtocolAccelerated) or (isinstance(oprot, THeaderProtocol.THeaderProtocolAccelerate) and oprot.get_protocol_id() == THeaderProtocol.THeaderProtocol.T_COMPACT_PROTOCOL)) and self.thrift_spec is not None and fastproto is not None:
      oprot.trans.write(fastproto.encode(self, [self.__class__, self.thrift_spec, False], utf8strings=UTF8STRINGS, protoid=2))
      return
    oprot.writeStructBegin('NewStructure2')
    if self.features != None:
      oprot.writeFieldBegin('features', TType.MAP, 1)
      oprot.writeMapBegin(TType.I16, TType.FLOAT, len(self.features))
      for kiter31,viter32 in self.features.items():
        oprot.writeI16(kiter31)
        oprot.writeFloat(viter32)
      oprot.writeMapEnd()
      oprot.writeFieldEnd()
    oprot.writeFieldStop()
    oprot.writeStructEnd()

  def __repr__(self):
    L = []
    padding = ' ' * 4
    value = pprint.pformat(self.features, indent=0)
    value = padding.join(value.splitlines(True))
    L.append('    features=%s' % (value))
    return "%s(\n%s)" % (self.__class__.__name__, ",\n".join(L))

  def __eq__(self, other):
    if not isinstance(other, self.__class__):
      return False

    return self.__dict__ == other.__dict__ 

  def __ne__(self, other):
    return not (self == other)

  # Override the __hash__ function for Python3 - t10434117
  if not six.PY2:
    __hash__ = object.__hash__

all_structs.append(OldStructure)
OldStructure.thrift_spec = (
  None, # 0
  (1, TType.MAP, 'features', (TType.I16,None,TType.DOUBLE,None), None, 2, ), # 1
)

OldStructure.thrift_struct_annotations = {
}
OldStructure.thrift_field_annotations = {
}

def OldStructure__init__(self, features=None,):
  self.features = features

OldStructure.__init__ = OldStructure__init__

all_structs.append(NewStructure)
NewStructure.thrift_spec = (
  None, # 0
  (1, TType.MAP, 'features', (TType.I16,None,TType.DOUBLE,None), None, 2, ), # 1
)

NewStructure.thrift_struct_annotations = {
}
NewStructure.thrift_field_annotations = {
}

def NewStructure__init__(self, features=None,):
  self.features = features

NewStructure.__init__ = NewStructure__init__

all_structs.append(NewStructure2)
NewStructure2.thrift_spec = (
  None, # 0
  (1, TType.MAP, 'features', (TType.I16,None,TType.FLOAT,None), None, 2, ), # 1
)

NewStructure2.thrift_struct_annotations = {
}
NewStructure2.thrift_field_annotations = {
}

def NewStructure2__init__(self, features=None,):
  self.features = features

NewStructure2.__init__ = NewStructure2__init__

fix_spec(all_structs)
del all_structs