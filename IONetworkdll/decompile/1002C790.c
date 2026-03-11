/*
 * func-name: ??0Dgram_Connector@IONetwork@Outpop@@QAE@ABV012@@Z
 * func-address: 0x1002c790
 * callers: none
 * callees: 0x10002e10, 0x10004e20, 0x1002a450
 */

Outpop::IONetwork::Dgram_Connector *__thiscall Outpop::IONetwork::Dgram_Connector::Dgram_Connector(
        Outpop::IONetwork::Dgram_Connector *this,
        Outpop::Utility::Ref_Object **a2)
{
  Outpop::IONetwork::Connector::Connector(this, a2);
  *(_DWORD *)this = &Outpop::IONetwork::Dgram_Connector::`vftable';
  *((_DWORD *)this + 29) = a2[29];
  *((_DWORD *)this + 30) = a2[30];
  Outpop::IONetwork::INET_Addr::INET_Addr(
    (Outpop::IONetwork::Dgram_Connector *)((char *)this + 124),
    (const struct Outpop::IONetwork::INET_Addr *)(a2 + 31));
  Outpop::IONetwork::INET_Addr::INET_Addr(
    (Outpop::IONetwork::Dgram_Connector *)((char *)this + 152),
    (const struct Outpop::IONetwork::INET_Addr *)(a2 + 38));
  *((_DWORD *)this + 46) = a2[46];
  *((_DWORD *)this + 47) = a2[47];
  *((_DWORD *)this + 48) = a2[48];
  *((_DWORD *)this + 49) = a2[49];
  *((_DWORD *)this + 50) = a2[50];
  *((_DWORD *)this + 51) = a2[51];
  *((_DWORD *)this + 52) = a2[52];
  *((_DWORD *)this + 53) = a2[53];
  *((_DWORD *)this + 54) = a2[54];
  *((_DWORD *)this + 55) = a2[55];
  *((_DWORD *)this + 56) = a2[56];
  *((_DWORD *)this + 57) = a2[57];
  *((_DWORD *)this + 58) = a2[58];
  *((_DWORD *)this + 59) = a2[59];
  *((_DWORD *)this + 60) = a2[60];
  *((_DWORD *)this + 61) = a2[61];
  *((_DWORD *)this + 62) = a2[62];
  *((_DWORD *)this + 63) = a2[63];
  sub_1002A450((_BYTE *)a2 + 256, (int)this + 256);
  sub_1002A450((_BYTE *)a2 + 296, (int)this + 296);
  sub_1002A450((_BYTE *)a2 + 336, (int)this + 336);
  *((_DWORD *)this + 94) = a2[94];
  *((_DWORD *)this + 95) = a2[95];
  *((_DWORD *)this + 96) = a2[96];
  *((_BYTE *)this + 388) = *((_BYTE *)a2 + 388);
  return this;
}
