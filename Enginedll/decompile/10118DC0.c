/*
 * func-name: ?Tick@Script@@QAEXXZ
 * func-address: 0x10118dc0
 * callers: 0x1012de10, 0x1012e1d0, 0x10138880
 * callees: 0x10097800, 0x10119160
 */

void __thiscall Script::Tick(Script *this)
{
  const char *v2; // eax

  if ( *(_DWORD *)this != -1 && !PyObject_CallMethod(*((_DWORD *)this + 33), "Tick", 0) )
  {
    v2 = (const char *)sub_10119160();
    Warning("Error calling Script::Tick: %s", v2);
    *(_DWORD *)this = -1;
  }
}
