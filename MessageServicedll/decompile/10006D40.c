/*
 * func-name: ?add_ip_filter@Context@Message@Outpop@@QAEXGI@Z
 * func-address: 0x10006d40
 * callers: none
 * callees: 0x10006e10, 0x10007810
 */

void __thiscall Outpop::Message::Context::add_ip_filter(Outpop::Message::Context *this, char a2, unsigned int a3)
{
  int v3; // eax
  int v4; // [esp-8h] [ebp-20h]
  int v5; // [esp-4h] [ebp-1Ch]
  _BYTE v6[12]; // [esp+Ch] [ebp-Ch] BYREF

  v3 = sub_10006E10(v6, &a3);
  sub_10007810(v3, v4, v5);
}
