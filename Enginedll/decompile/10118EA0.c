/*
 * func-name: ?Set@Script@@QAEXPADPAX@Z
 * func-address: 0x10118ea0
 * callers: none
 * callees: none
 */

void __thiscall Script::Set(Script *this, char *a2, void *a3)
{
  if ( *(_DWORD *)this != -1 )
    PyObject_SetAttrString(*((_DWORD *)this + 33), a2, a3);
}
