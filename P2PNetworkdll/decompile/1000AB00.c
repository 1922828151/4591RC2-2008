/*
 * func-name: sub_1000AB00
 * func-address: 0x1000ab00
 * callers: 0x100014f0
 * callees: 0x100096f0, 0x1000d5a0, 0x1000e660
 */

void __stdcall sub_1000AB00(Outpop::Utility::Binary_Stream *a1, Outpop::Utility::Ref_Object *a2)
{
  Outpop::Utility::Binary_Stream *v2; // ebp
  Outpop::Utility::Binary_Stream *v3; // eax
  Outpop::Utility::Ref_Object *v4; // esi
  Outpop::Utility::Ref_Object *v5; // ecx
  Outpop::Utility::Stream_Base *v6; // eax
  DWORD LastError; // eax
  DWORD v8; // eax
  _DWORD v9[7]; // [esp-8h] [ebp-48h] BYREF
  int v10; // [esp+14h] [ebp-2Ch]
  unsigned int v11; // [esp+18h] [ebp-28h]
  Outpop::Utility::Binary_Stream *v12; // [esp+30h] [ebp-10h] BYREF
  int v13; // [esp+3Ch] [ebp-4h]

  v2 = a1;
  if ( !*((_BYTE *)a1 + 116) )
  {
    Outpop::IONetwork::INET_Addr::operator=((char *)a1 + 124, a2);
    v11 = 72;
    *((_BYTE *)v2 + 116) = 1;
    *((_BYTE *)v2 + 117) = 0;
    v3 = (Outpop::Utility::Binary_Stream *)Outpop::Utility::Binary_Stream::operator new(v11);
    v4 = v3;
    a1 = v3;
    v13 = 0;
    if ( v3 )
    {
      Outpop::Utility::Binary_Stream::Binary_Stream(v3, 64);
      *(_DWORD *)v4 = &Outpop::Utility::Binary_Stream::`vftable';
      v5 = v4;
    }
    else
    {
      v5 = 0;
    }
    v13 = -1;
    a2 = v5;
    if ( v5 )
      Outpop::Utility::Ref_Object::addref(v5);
    v13 = 1;
    LOBYTE(a1) = -125;
    v6 = (Outpop::Utility::Stream_Base *)sub_1000E660(&a1);
    sub_100096F0((_DWORD *)v2 + 17, v6);
    v11 = 0;
    v10 = 1;
    a1 = (Outpop::Utility::Binary_Stream *)v9;
    std::string::string(v9, &unk_10026701);
    if ( Outpop::IONetwork::P2PUdpBuilder::asynch_send_to(
           *((_DWORD *)v2 + 24),
           &a2,
           (char *)v2 + 124,
           v9[0],
           v9[1],
           v9[2],
           v9[3],
           v9[4],
           v9[5],
           v9[6],
           v10,
           v11) == -1 )
    {
      LastError = GetLastError();
      (*((void (__cdecl **)(_DWORD, int, DWORD))v2 + 11))(*((_DWORD *)v2 + 12), 5, LastError);
    }
    else
    {
      a1 = 0;
      LOBYTE(v13) = 2;
      v12 = v2;
      Outpop::Utility::Ref_Object::addref(v2);
      LOBYTE(v13) = 3;
      *((_DWORD *)v2 + 25) = sub_1000D5A0(&v12, &unk_10030AA8, &a1);
      LOBYTE(v13) = 2;
      Outpop::Utility::Ref_Object::release(v2);
      LOBYTE(v13) = 1;
      if ( *((_DWORD *)v2 + 25) == -1 )
      {
        v8 = GetLastError();
        (*((void (__cdecl **)(_DWORD, int, DWORD))v2 + 11))(*((_DWORD *)v2 + 12), 1, v8);
      }
    }
    v13 = -1;
    if ( a2 )
      Outpop::Utility::Ref_Object::release(a2);
  }
}
