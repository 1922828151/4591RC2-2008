/*
 * func-name: ?GetEstabID@HookEstablishment@@QBEHXZ_0
 * func-address: 0x1012ae00
 * callers: 0x10004787
 * callees: none
 */

int __thiscall HookEstablishment::GetEstabID(HookEstablishment *this)
{
  return *((_DWORD *)this + 324);
}
