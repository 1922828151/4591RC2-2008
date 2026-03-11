/*
 * func-name: ??0Stream_Channel@IONetwork@Outpop@@QAE@ABV012@@Z
 * func-address: 0x1000e250
 * callers: none
 * callees: 0x10005380, 0x100147d0
 */

Outpop::IONetwork::Stream_Channel *__thiscall Outpop::IONetwork::Stream_Channel::Stream_Channel(
        Outpop::IONetwork::Stream_Channel *this,
        Outpop::Utility::Ref_Object **a2)
{
  Outpop::IONetwork::Channel::Channel(this, a2);
  *(_DWORD *)this = &Outpop::IONetwork::Stream_Channel::`vftable';
  *((_DWORD *)this + 45) = a2[45];
  *((_DWORD *)this + 46) = a2[46];
  *((_DWORD *)this + 47) = a2[47];
  *((_BYTE *)this + 192) = *((_BYTE *)a2 + 192);
  *((_BYTE *)this + 193) = *((_BYTE *)a2 + 193);
  *((_DWORD *)this + 49) = a2[49];
  *((_BYTE *)this + 200) = *((_BYTE *)a2 + 200);
  *((_BYTE *)this + 201) = *((_BYTE *)a2 + 201);
  *((_DWORD *)this + 51) = a2[51];
  *((_BYTE *)this + 208) = *((_BYTE *)a2 + 208);
  *((_BYTE *)this + 209) = *((_BYTE *)a2 + 209);
  sub_100147D0((char *)this + 212);
  *((_DWORD *)this + 57) = a2[57];
  return this;
}
