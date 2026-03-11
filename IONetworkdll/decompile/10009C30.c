/*
 * func-name: ??0Priority_Container@IONetwork@Outpop@@QAE@ABV012@@Z
 * func-address: 0x10009c30
 * callers: none
 * callees: 0x1000acf0
 */

Outpop::IONetwork::Priority_Container *__thiscall Outpop::IONetwork::Priority_Container::Priority_Container(
        Outpop::IONetwork::Priority_Container *this,
        const struct Outpop::IONetwork::Priority_Container *a2)
{
  *(_DWORD *)this = *(_DWORD *)a2;
  *((_DWORD *)this + 1) = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2);
  *((_DWORD *)this + 3) = *((_DWORD *)a2 + 3);
  *((_DWORD *)this + 4) = *((_DWORD *)a2 + 4);
  *((_DWORD *)this + 5) = *((_DWORD *)a2 + 5);
  sub_1000ACF0((char *)this + 24);
  sub_1000ACF0((char *)this + 44);
  sub_1000ACF0((char *)this + 64);
  return this;
}
