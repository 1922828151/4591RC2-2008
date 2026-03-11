/*
 * func-name: ?GetString@Script@@QAEPADPAD@Z
 * func-address: 0x10118ed0
 * callers: none
 * callees: 0x100956d0
 */

char *__thiscall Script::GetString(Script *this, char *a2)
{
  int AttrString; // eax
  char *result; // eax

  AttrString = PyObject_GetAttrString(*((_DWORD *)this + 33), a2);
  result = (char *)PyString_AsString(AttrString);
  if ( !result )
  {
    Error("Paranoia: Script conversion might have failed for attrib: %s", a2);
    return 0;
  }
  return result;
}
