/*
 * func-name: ?GetFloat@Script@@QAEMPAD@Z
 * func-address: 0x10118f10
 * callers: none
 * callees: 0x100956d0
 */

double __thiscall Script::GetFloat(Script *this, char *a2)
{
  int AttrString; // eax
  double result; // st7
  float v5; // [esp+8h] [ebp+4h]

  AttrString = PyObject_GetAttrString(*((_DWORD *)this + 33), a2);
  v5 = PyFloat_AsDouble(AttrString);
  result = v5;
  if ( v5 == -1.0 )
  {
    Error("Paranoia: Script conversion might have failed for attrib: %s", a2);
    return v5;
  }
  return result;
}
