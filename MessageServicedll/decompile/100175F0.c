/*
 * func-name: ?add_id@Group@Message@Outpop@@QAEXHI@Z
 * func-address: 0x100175f0
 * callers: 0x10017670, 0x100178c0, 0x10028370
 * callees: 0x10007810, 0x10018150
 */

void __thiscall Outpop::Message::Group::add_id(Outpop::Message::Group *this, char a2, unsigned int a3)
{
  _DWORD *v3; // eax
  _BYTE v4[12]; // [esp+Ch] [ebp-Ch] BYREF

  v3 = (_DWORD *)sub_10018150();
  sub_10007810(v3, (int)v4, &a3);
}
