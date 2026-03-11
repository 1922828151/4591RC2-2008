/*
 * func-name: ?HasFunction@Script@@QAE_NPAD@Z
 * func-address: 0x10118ce0
 * callers: 0x101198c0
 * callees: none
 */

bool __thiscall Script::HasFunction(Script *this, char *a2)
{
  int AttrString; // eax
  BOOL v4; // esi

  if ( *(_DWORD *)this == -1 )
    return 0;
  AttrString = PyObject_GetAttrString(*((_DWORD *)this + 33), a2);
  v4 = AttrString != 0;
  if ( !AttrString )
    PyErr_Clear();
  return v4;
}
