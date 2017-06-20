# This file was automatically generated by SWIG (http://www.swig.org).
# Version 3.0.8
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.





from sys import version_info
if version_info >= (2, 6, 0):
    def swig_import_helper():
        from os.path import dirname
        import imp
        fp = None
        try:
            fp, pathname, description = imp.find_module('_enum_ArmMachineType', [dirname(__file__)])
        except ImportError:
            import _enum_ArmMachineType
            return _enum_ArmMachineType
        if fp is not None:
            try:
                _mod = imp.load_module('_enum_ArmMachineType', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _enum_ArmMachineType = swig_import_helper()
    del swig_import_helper
else:
    import _enum_ArmMachineType
del version_info
try:
    _swig_property = property
except NameError:
    pass  # Python < 2.2 doesn't have 'property'.


def _swig_setattr_nondynamic(self, class_type, name, value, static=1):
    if (name == "thisown"):
        return self.this.own(value)
    if (name == "this"):
        if type(value).__name__ == 'SwigPyObject':
            self.__dict__[name] = value
            return
    method = class_type.__swig_setmethods__.get(name, None)
    if method:
        return method(self, value)
    if (not static):
        object.__setattr__(self, name, value)
    else:
        raise AttributeError("You cannot add attributes to %s" % self)


def _swig_setattr(self, class_type, name, value):
    return _swig_setattr_nondynamic(self, class_type, name, value, 0)


def _swig_getattr_nondynamic(self, class_type, name, static=1):
    if (name == "thisown"):
        return self.this.own()
    method = class_type.__swig_getmethods__.get(name, None)
    if method:
        return method(self)
    if (not static):
        return object.__getattr__(self, name)
    else:
        raise AttributeError(name)

def _swig_getattr(self, class_type, name):
    return _swig_getattr_nondynamic(self, class_type, name, 0)


def _swig_repr(self):
    try:
        strthis = "proxy of " + self.this.__repr__()
    except Exception:
        strthis = ""
    return "<%s.%s; %s >" % (self.__class__.__module__, self.__class__.__name__, strthis,)

try:
    _object = object
    _newclass = 1
except AttributeError:
    class _object:
        pass
    _newclass = 0



def _swig_setattr_nondynamic_method(set):
    def set_attr(self, name, value):
        if (name == "thisown"):
            return self.this.own(value)
        if hasattr(self, name) or (name == "this"):
            set(self, name, value)
        else:
            raise AttributeError("You cannot add attributes to %s" % self)
    return set_attr



_enum_ArmMachineType.RealView_EB_swigconstant(_enum_ArmMachineType)
RealView_EB = _enum_ArmMachineType.RealView_EB

_enum_ArmMachineType.RealView_PBX_swigconstant(_enum_ArmMachineType)
RealView_PBX = _enum_ArmMachineType.RealView_PBX

_enum_ArmMachineType.VExpress_EMM_swigconstant(_enum_ArmMachineType)
VExpress_EMM = _enum_ArmMachineType.VExpress_EMM

_enum_ArmMachineType.VExpress_EMM64_swigconstant(_enum_ArmMachineType)
VExpress_EMM64 = _enum_ArmMachineType.VExpress_EMM64

_enum_ArmMachineType.Num_ArmMachineType_swigconstant(_enum_ArmMachineType)
Num_ArmMachineType = _enum_ArmMachineType.Num_ArmMachineType

cvar = _enum_ArmMachineType.cvar
