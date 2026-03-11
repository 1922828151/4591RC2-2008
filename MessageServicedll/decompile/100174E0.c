/*
 * func-name: ??0Group@Message@Outpop@@QAE@XZ
 * func-address: 0x100174e0
 * callers: 0x10017670, 0x100178c0, 0x1001aec0, 0x1001b360, 0x10028240
 * callees: 0x10018320, 0x100185e0
 */

Outpop::Message::Group *__thiscall Outpop::Message::Group::Group(Outpop::Message::Group *this)
{
  char v3; // [esp+Fh] [ebp-15h] BYREF
  Outpop::Message::Group *v4; // [esp+10h] [ebp-14h]
  char *v5; // [esp+14h] [ebp-10h]
  int v6; // [esp+20h] [ebp-4h]

  v4 = this;
  sub_10018320(this, &v3);
  v6 = 1;
  v5 = (char *)this + 40;
  sub_100185E0((char *)this + 40, &v3);
  return this;
}
