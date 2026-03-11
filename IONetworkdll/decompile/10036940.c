/*
 * func-name: ?erase_channel_from_map@Dgram_Connector@IONetwork@Outpop@@QAEXAAVINET_Addr@23@@Z
 * func-address: 0x10036940
 * callers: 0x10031590
 * callees: 0x1002a4c0
 */

char __thiscall Outpop::IONetwork::Dgram_Connector::erase_channel_from_map(
        Outpop::IONetwork::Dgram_Connector *this,
        struct Outpop::IONetwork::INET_Addr *a2)
{
  Outpop::Utility::Thread_Mutex *v3; // edi
  int v4; // eax
  u_long v5; // eax
  u_short v7; // [esp-4h] [ebp-40h]
  unsigned __int64 v8; // [esp+14h] [ebp-28h] BYREF
  char *v9; // [esp+1Ch] [ebp-20h]
  int v10; // [esp+20h] [ebp-1Ch]
  int v11; // [esp+24h] [ebp-18h]
  int v12; // [esp+38h] [ebp-4h]

  v3 = (Outpop::IONetwork::Dgram_Connector *)((char *)this + 208);
  v9 = (char *)this + 208;
  v4 = Outpop::Utility::Thread_Mutex::acquire((Outpop::IONetwork::Dgram_Connector *)((char *)this + 208)) - 1;
  v10 = v4;
  v12 = 0;
  if ( v4 != -1 )
  {
    v5 = ntohl(*((_DWORD *)a2 + 4));
    v7 = *((_WORD *)a2 + 7);
    v11 = 0;
    v8 = __PAIR64__(v5, 0) + ntohs(v7);
    sub_1002A4C0(&v8, (_DWORD *)this + 74);
    v12 = -1;
    v10 = -1;
    LOBYTE(v4) = Outpop::Utility::Thread_Mutex::release(v3);
  }
  return v4;
}
