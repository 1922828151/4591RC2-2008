/*
 * func-name: sub_1003AA70
 * func-address: 0x1003aa70
 * callers: 0x100377c0
 * callees: 0x10003930, 0x10004050, 0x100040d0, 0x10005ae0, 0x10007400, 0x10038d30, 0x1003b9c0, 0x1004e861
 */

char *__thiscall sub_1003AA70(int this)
{
  Outpop::Utility::Ref_Object *v2; // ecx
  int v3; // eax
  int v5; // [esp-Ch] [ebp-88h]
  int v6; // [esp-8h] [ebp-84h]
  Outpop::Utility::Ref_Object *v7; // [esp-4h] [ebp-80h] BYREF
  _DWORD v8[7]; // [esp+0h] [ebp-7Ch] BYREF
  _BYTE v9[4]; // [esp+1Ch] [ebp-60h] BYREF
  int v10; // [esp+20h] [ebp-5Ch]
  _BYTE v11[28]; // [esp+24h] [ebp-58h] BYREF
  _BYTE v12[40]; // [esp+40h] [ebp-3Ch] BYREF
  _DWORD *v13; // [esp+6Ch] [ebp-10h]
  int v14; // [esp+78h] [ebp-4h]

  v13 = v8;
  v8[5] = this;
  v14 = 0;
  if ( !*(_BYTE *)(this + 8) )
    return (char *)Outpop::IONetwork::Dgram_Connector::asynch_receive(
                     *(Outpop::IONetwork::Dgram_Connector **)(this + 72),
                     0);
  Outpop::IONetwork::IO_Channel_Config::IO_Channel_Config((Outpop::IONetwork::IO_Channel_Config *)v9);
  LOBYTE(v14) = 1;
  Outpop::IONetwork::INET_Addr::operator=(v12, this + 40);
  Outpop::IONetwork::INET_Addr::operator=(v11, this + 12);
  v12[36] = 0;
  v10 = 1;
  v7 = v2;
  v8[6] = &v7;
  sub_10005AE0((Outpop::Utility::Ref_Object **)(this + 104), &v7);
  LOBYTE(v14) = 2;
  v3 = **(_DWORD **)(this + 72);
  v6 = *(_DWORD *)(this + 84);
  v5 = *(_DWORD *)(this + 80);
  LOBYTE(v14) = 1;
  (*(void (__cdecl **)(_BYTE *, int, int))(v3 + 24))(v9, v5, v6);
  LOBYTE(v14) = 0;
  return Outpop::IONetwork::IO_Channel_Config::~IO_Channel_Config((Outpop::IONetwork::IO_Channel_Config *)v9);
}
