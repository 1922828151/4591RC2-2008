/*
 * func-name: ?Set@Script@@QAEXPADN@Z
 * func-address: 0x10118e30
 * callers: 0x101198c0
 * callees: none
 */

void __thiscall Script::Set(Script *this, char *a2, double a3)
{
  int v4; // eax

  if ( *(_DWORD *)this != -1 )
  {
    v4 = PyFloat_FromDouble(LODWORD(a3), HIDWORD(a3));
    PyObject_SetAttrString(*((_DWORD *)this + 33), a2, v4);
  }
}
