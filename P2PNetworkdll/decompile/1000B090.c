/*
 * func-name: sub_1000B090
 * func-address: 0x1000b090
 * callers: 0x10003f10
 * callees: 0x10004ad0, 0x100096f0, 0x1000a590, 0x1000cd90, 0x1000d5a0, 0x1000d8e0, 0x1000da30, 0x1000e660, 0x100234ce
 */

void __stdcall sub_1000B090(Outpop::Utility::Binary_Stream *a1, Outpop::Utility::Ref_Object *a2)
{
  Outpop::Utility::Binary_Stream *v2; // ebx
  char *v3; // edi
  void *v4; // esi
  void *v5; // eax
  Outpop::Utility::Ref_Object *v6; // eax
  Outpop::Utility::Binary_Stream *v7; // eax
  Outpop::Utility::Ref_Object *v8; // esi
  Outpop::Utility::Ref_Object *v9; // ecx
  Outpop::Utility::Stream_Base *v10; // eax
  Outpop::Utility::Stream_Base *v11; // edi
  DWORD LastError; // eax
  Outpop::Utility::Ref_Object *v13; // esi
  int v14; // edi
  DWORD v15; // eax
  _DWORD v16[7]; // [esp-28h] [ebp-88h] BYREF
  int v17; // [esp-Ch] [ebp-6Ch]
  int v18; // [esp-8h] [ebp-68h]
  int v19; // [esp-4h] [ebp-64h]
  int v20; // [esp+0h] [ebp-60h] BYREF
  _BYTE v21[32]; // [esp+14h] [ebp-4Ch] BYREF
  char v22[12]; // [esp+34h] [ebp-2Ch] BYREF
  Outpop::Utility::Binary_Stream *v23; // [esp+40h] [ebp-20h] BYREF
  void *v24; // [esp+44h] [ebp-1Ch] BYREF
  Outpop::Utility::Ref_Object *v25; // [esp+48h] [ebp-18h] BYREF
  Outpop::Utility::Ref_Object *v26; // [esp+4Ch] [ebp-14h]
  int *v27; // [esp+50h] [ebp-10h]
  int v28; // [esp+5Ch] [ebp-4h]

  v27 = &v20;
  v2 = a1;
  v3 = (char *)a1 + 168;
  sub_1000DA30(&v23, a2);
  v4 = (void *)*((_DWORD *)v2 + 44);
  if ( !v23 || v23 != (Outpop::Utility::Binary_Stream *)((char *)v2 + 172) )
    invalid_parameter_noinfo();
  if ( v24 == v4 )
  {
    v5 = operator new(0x2Cu);
    v24 = v5;
    v28 = 0;
    if ( v5 )
    {
      v6 = (Outpop::Utility::Ref_Object *)sub_1000A590((int)v5, (int)a2);
      v26 = v6;
    }
    else
    {
      v26 = 0;
      v6 = 0;
    }
    v28 = -1;
    v24 = v6;
    if ( v6 )
      Outpop::Utility::Ref_Object::addref(v6);
    v28 = 2;
    v19 = sub_1000D8E0(v21, a2, &v24);
    LOBYTE(v28) = 3;
    sub_1000CD90(v3, v22, v19);
    LOBYTE(v28) = 2;
    sub_10004AD0((int)v21);
    v28 = 1;
    v7 = (Outpop::Utility::Binary_Stream *)Outpop::Utility::Binary_Stream::operator new(0x48u);
    v8 = v7;
    a1 = v7;
    LOBYTE(v28) = 5;
    if ( v7 )
    {
      Outpop::Utility::Binary_Stream::Binary_Stream(v7, 64);
      *(_DWORD *)v8 = &Outpop::Utility::Binary_Stream::`vftable';
      v9 = v8;
    }
    else
    {
      v9 = 0;
    }
    LOBYTE(v28) = 1;
    v25 = v9;
    if ( v9 )
      Outpop::Utility::Ref_Object::addref(v9);
    LOBYTE(v28) = 6;
    HIBYTE(a1) = -119;
    v10 = (Outpop::Utility::Stream_Base *)sub_1000E660((char *)&a1 + 3);
    v11 = sub_100096F0((_DWORD *)v2 + 17, v10);
    sub_100096F0(a2, v11);
    v18 = 0;
    v17 = 1;
    a2 = (Outpop::Utility::Ref_Object *)v16;
    std::string::string(v16, &unk_10026701);
    if ( Outpop::IONetwork::P2PUdpBuilder::asynch_send_to(
           *((_DWORD *)v2 + 24),
           &v25,
           (char *)v2 + 124,
           v16[0],
           v16[1],
           v16[2],
           v16[3],
           v16[4],
           v16[5],
           v16[6],
           v17,
           v18) == -1 )
    {
      LastError = GetLastError();
      (*((void (__cdecl **)(_DWORD, int, DWORD))v2 + 11))(*((_DWORD *)v2 + 12), 5, LastError);
      v13 = v26;
    }
    else
    {
      v13 = v26;
      a2 = v26;
      if ( v26 )
        Outpop::Utility::Ref_Object::addref(v26);
      LOBYTE(v28) = 7;
      a1 = v2;
      Outpop::Utility::Ref_Object::addref(v2);
      LOBYTE(v28) = 8;
      v14 = sub_1000D5A0(&a1, &unk_10030AB8, &a2);
      LOBYTE(v28) = 7;
      Outpop::Utility::Ref_Object::release(v2);
      LOBYTE(v28) = 6;
      if ( v13 )
        Outpop::Utility::Ref_Object::release(v13);
      if ( v14 == -1 )
      {
        v15 = GetLastError();
        (*((void (__cdecl **)(_DWORD, int, DWORD))v2 + 11))(*((_DWORD *)v2 + 12), 1, v15);
      }
    }
    LOBYTE(v28) = 1;
    if ( v25 )
      Outpop::Utility::Ref_Object::release(v25);
    v28 = -1;
    if ( v13 )
      Outpop::Utility::Ref_Object::release(v13);
  }
}
