/*
 * func-name: sub_1001D570
 * func-address: 0x1001d570
 * callers: 0x1001ba00
 * callees: 0x10002e10, 0x10003930, 0x10004050, 0x100040d0, 0x10005ae0, 0x10007400, 0x10018f50, 0x100227d0, 0x1004e861
 */

char *__fastcall sub_1001D570(int a1, _DWORD *a2)
{
  Outpop::Utility::Ref_Object *v4; // ecx
  SOCKET v6; // eax
  Outpop::Utility::Ref_Object *v7; // ecx
  int v8; // eax
  void **v9[7]; // [esp-20h] [ebp-A4h] BYREF
  Outpop::Utility::Ref_Object *v10; // [esp-4h] [ebp-88h] BYREF
  _DWORD v11[6]; // [esp+0h] [ebp-84h] BYREF
  Outpop::Utility::Ref_Object *v12; // [esp+18h] [ebp-6Ch] BYREF
  void ***v13; // [esp+1Ch] [ebp-68h]
  void ***v14; // [esp+20h] [ebp-64h]
  SOCKET s[2]; // [esp+24h] [ebp-60h] BYREF
  _BYTE v16[28]; // [esp+2Ch] [ebp-58h] BYREF
  _BYTE v17[40]; // [esp+48h] [ebp-3Ch] BYREF
  _DWORD *v18; // [esp+74h] [ebp-10h]
  int v19; // [esp+80h] [ebp-4h]

  v18 = v11;
  v11[5] = a1;
  Outpop::IONetwork::IO_Channel_Config::IO_Channel_Config((Outpop::IONetwork::IO_Channel_Config *)s);
  v19 = 1;
  sub_100227D0(a2, &v12);
  LOBYTE(v19) = 2;
  if ( a2[11] || !a2[9] )
  {
    v10 = v4;
    v14 = (void ***)&v10;
    sub_10005AE0((Outpop::Utility::Ref_Object **)(a1 + 152), &v10);
    LOBYTE(v19) = 3;
    v13 = v9;
    Outpop::IONetwork::INET_Addr::INET_Addr(
      (Outpop::IONetwork::INET_Addr *)v9,
      (const struct Outpop::IONetwork::INET_Addr *)(a1 + 108));
    LOBYTE(v19) = 4;
LABEL_5:
    LOBYTE(v19) = 2;
    Outpop::IONetwork::Stream_Acceptor::bluider_channel_falied(
      *(char **)(a1 + 140),
      0,
      v9[0],
      (int)v9[1],
      (int)v9[2],
      (int)v9[3],
      (struct in_addr)v9[4],
      (int)v9[5],
      (int)v9[6],
      v10);
    LOBYTE(v19) = 1;
    if ( v12 )
      Outpop::Utility::Ref_Object::release(v12);
    goto LABEL_7;
  }
  if ( !a2[6] )
  {
    v10 = v4;
    v13 = (void ***)&v10;
    sub_10005AE0((Outpop::Utility::Ref_Object **)(a1 + 152), &v10);
    LOBYTE(v19) = 5;
    v14 = v9;
    Outpop::IONetwork::INET_Addr::INET_Addr(
      (Outpop::IONetwork::INET_Addr *)v9,
      (const struct Outpop::IONetwork::INET_Addr *)(a1 + 108));
    LOBYTE(v19) = 6;
    goto LABEL_5;
  }
  Outpop::IONetwork::INET_Addr::operator=(v17, a1 + 108);
  Outpop::IONetwork::INET_Addr::operator=(v16, a1 + 80);
  v6 = *(_DWORD *)(a1 + 136);
  *(_DWORD *)(a1 + 136) = -1;
  s[0] = v6;
  v17[36] = 0;
  v10 = v7;
  v14 = (void ***)&v10;
  sub_10005AE0((Outpop::Utility::Ref_Object **)(a1 + 152), &v10);
  LOBYTE(v19) = 7;
  v8 = **(_DWORD **)(a1 + 140);
  LOBYTE(v19) = 2;
  (*(void (__cdecl **)(SOCKET *, _DWORD, _DWORD))(v8 + 20))(s, 0, 0);
  LOBYTE(v19) = 1;
  if ( v12 )
    Outpop::Utility::Ref_Object::release(v12);
  v19 = 0;
LABEL_7:
  v19 = -1;
  return Outpop::IONetwork::IO_Channel_Config::~IO_Channel_Config((Outpop::IONetwork::IO_Channel_Config *)s);
}
