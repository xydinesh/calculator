# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: calculator.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor.FileDescriptor(
  name='calculator.proto',
  package='',
  serialized_pb=_b('\n\x10\x63\x61lculator.proto\"#\n\x07Numbers\x12\t\n\x01i\x18\x01 \x02(\x05\x12\r\n\x01j\x18\x02 \x03(\x05\x42\x02\x10\x01\x32.\n\x11\x43\x61lculatorService\x12\x19\n\x03\x41\x64\x64\x12\x08.Numbers\x1a\x08.Numbers')
)
_sym_db.RegisterFileDescriptor(DESCRIPTOR)




_NUMBERS = _descriptor.Descriptor(
  name='Numbers',
  full_name='Numbers',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='i', full_name='Numbers.i', index=0,
      number=1, type=5, cpp_type=1, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='j', full_name='Numbers.j', index=1,
      number=2, type=5, cpp_type=1, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=_descriptor._ParseOptions(descriptor_pb2.FieldOptions(), _b('\020\001'))),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=20,
  serialized_end=55,
)

DESCRIPTOR.message_types_by_name['Numbers'] = _NUMBERS

Numbers = _reflection.GeneratedProtocolMessageType('Numbers', (_message.Message,), dict(
  DESCRIPTOR = _NUMBERS,
  __module__ = 'calculator_pb2'
  # @@protoc_insertion_point(class_scope:Numbers)
  ))
_sym_db.RegisterMessage(Numbers)


_NUMBERS.fields_by_name['j'].has_options = True
_NUMBERS.fields_by_name['j']._options = _descriptor._ParseOptions(descriptor_pb2.FieldOptions(), _b('\020\001'))
# @@protoc_insertion_point(module_scope)