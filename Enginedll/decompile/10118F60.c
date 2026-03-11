/*
 * func-name: ?GetInt@Script@@QAEJPAD@Z
 * func-address: 0x10118f60
 * callers: none
 * callees: 0x100956d0
 */

int __thiscall Script::GetInt(Script *this, char *a2)
{
  int AttrString; // eax
  int result; // eax

  AttrString = PyObject_GetAttrString(*((_DWORD *)this + 33), a2);
  result = PyInt_AsLong(AttrString);
  if ( result == -1 )
  {
    Error("Paranoia: Script conversion might have failed for attrib: %s", a2);
    return -1;
  }
  return result;
}
