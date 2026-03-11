/*
 * func-name: ?Set@Script@@QAEXPAD0@Z
 * func-address: 0x10118e70
 * callers: 0x101198c0
 * callees: none
 */

void __thiscall Script::Set(Script *this, char *a2, char *a3)
{
  int v4; // eax

  if ( *(_DWORD *)this != -1 )
  {
    v4 = PyString_FromString(a3);
    PyObject_SetAttrString(*((_DWORD *)this + 33), a2, v4);
  }
}
