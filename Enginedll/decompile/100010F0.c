/*
 * func-name: ?OnResetDevice@Editor@@UAEJXZ
 * func-address: 0x100010f0
 * callers: none
 * callees: none
 */

int __thiscall Editor::OnResetDevice(Editor *this)
{
  *((_BYTE *)this + 600) = 1;
  return 0;
}
