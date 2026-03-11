/*
 * func-name: ?remove@Group@Message@Outpop@@QAEXHI@Z
 * func-address: 0x10017620
 * callers: none
 * callees: 0x10018150, 0x10018240, 0x100182b0
 */

void __thiscall Outpop::Message::Group::remove(Outpop::Message::Group *this, char a2, unsigned int a3)
{
  char *v3; // esi
  int v4; // eax

  v3 = (char *)this + 40;
  v4 = sub_10018150();
  sub_100182B0(v4);
  if ( !*(_DWORD *)(sub_10018150() + 12) )
    sub_10018240((int)v3);
}
