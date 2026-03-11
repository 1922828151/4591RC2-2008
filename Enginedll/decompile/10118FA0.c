/*
 * func-name: ?GetObj@Script@@QAEPAXPAD@Z
 * func-address: 0x10118fa0
 * callers: none
 * callees: none
 */

int __thiscall Script::GetObj(Script *this, char *a2)
{
  return PyObject_GetAttrString(*((_DWORD *)this + 33), a2);
}
