/*
 * func-name: ?make_commit_data@Connect_Bluider_Process@IONetwork@Outpop@@QAE_NV?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@3@@Z
 * func-address: 0x1003fba0
 * callers: 0x1003f730
 * callees: 0x10001d10, 0x10007420, 0x100082f0, 0x100086c0, 0x10009b30, 0x1000d2f0, 0x1000d500, 0x1004e98e
 */

char __thiscall Outpop::IONetwork::Connect_Bluider_Process::make_commit_data(int this, Outpop::Utility::Ref_Object *a2)
{
  void *v3; // esi
  struct Outpop::IONetwork::Network_Init *v4; // eax
  HCRYPTPROV *v5; // esi
  void *v6; // eax
  Outpop::IONetwork::Client_Security *v7; // eax
  void (__thiscall ***v8)(_DWORD, int); // ecx
  void (__thiscall ***v10)(_DWORD, int); // ecx
  Outpop::Utility::Ref_Object *v11; // ebx
  int v12; // eax
  int *v13; // eax
  int *v14; // eax
  void *v15; // ebp
  const char *ptr; // eax
  int v17; // esi
  size_t v18; // [esp+14h] [ebp-24h] BYREF
  void *Block; // [esp+18h] [ebp-20h] BYREF
  int v20; // [esp+1Ch] [ebp-1Ch] BYREF
  int v21; // [esp+20h] [ebp-18h] BYREF
  _DWORD v22[2]; // [esp+24h] [ebp-14h] BYREF
  int v23; // [esp+34h] [ebp-4h]

  v23 = 1;
  v3 = (void *)operator new(12);
  Block = v3;
  if ( v3 )
  {
    v4 = Outpop::IONetwork::Network_Init::instance();
    if ( *((_DWORD *)v4 + 6) < 0x10u )
      v5 = Outpop::IONetwork::CryptProv::CryptProv((HCRYPTPROV *)v3, (LPCSTR)v4 + 4);
    else
      v5 = Outpop::IONetwork::CryptProv::CryptProv((HCRYPTPROV *)v3, *((LPCSTR *)v4 + 1));
  }
  else
  {
    v5 = 0;
  }
  v6 = (void *)operator new(52);
  Block = v6;
  LOBYTE(v23) = 2;
  if ( v6 )
    v7 = Outpop::IONetwork::Client_Security::Client_Security((Outpop::IONetwork::Client_Security *)v6);
  else
    v7 = 0;
  LOBYTE(v23) = 0;
  *(_DWORD *)(this + 8) = v7;
  *((_DWORD *)v7 + 12) = v5;
  if ( !Outpop::IONetwork::CryptProv::CreateCryptGenKey(v5, *(_DWORD *)(*(_DWORD *)(this + 16) + 100)) )
  {
    v8 = *(void (__thiscall ****)(_DWORD, int))(this + 8);
    if ( v8 )
      (**v8)(v8, 1);
LABEL_12:
    *(_DWORD *)(this + 8) = 0;
    v23 = -1;
    if ( a2 )
      Outpop::Utility::Ref_Object::release(a2);
    return 0;
  }
  Block = 0;
  if ( !Outpop::IONetwork::CryptProv::ExportCryptPublicKey(
          (Outpop::IONetwork::CryptProv *)v5,
          (unsigned __int8 **)&Block,
          &v18) )
  {
    v10 = *(void (__thiscall ****)(_DWORD, int))(this + 8);
    if ( v10 )
      (**v10)(v10, 1);
    goto LABEL_12;
  }
  v11 = *(Outpop::Utility::Ref_Object **)(*(_DWORD *)(this + 4) + 8);
  v22[1] = v11;
  if ( v11 )
    Outpop::Utility::Ref_Object::addref(v11);
  LOBYTE(v23) = 3;
  Outpop::Utility::Stream_Base::move_write_pos(a2, 4);
  v12 = *(_DWORD *)(this + 16);
  v21 = *(_DWORD *)(v12 + 12);
  v20 = *(_DWORD *)(v12 + 20);
  v22[0] = 1;
  v13 = sub_10009B30((int *)a2, (const char *)v22);
  v14 = sub_10009B30(v13, (const char *)&v21);
  sub_10009B30(v14, (const char *)&v20);
  Outpop::IONetwork::Security::first_set_rsapubkey(*(Outpop::IONetwork::Security **)(this + 8), (char *)Block, v18);
  sub_10009B30((int *)a2, (const char *)&v18);
  v15 = Block;
  Outpop::Utility::Stream_Base::write(a2, (const char *)Block);
  if ( v11 )
  {
    Outpop::Utility::Stream_Base::get_readable(v11);
    ptr = Outpop::Utility::Stream_Base::get_read_ptr(v11);
    Outpop::Utility::Stream_Base::write(a2, ptr);
  }
  v17 = Outpop::Utility::Stream_Base::get_readable(a2) - 4;
  *(_DWORD *)Outpop::Utility::Stream_Base::get_base_ptr(a2) = v17;
  free(v15);
  LOBYTE(v23) = 0;
  if ( v11 )
    Outpop::Utility::Ref_Object::release(v11);
  v23 = -1;
  if ( a2 )
    Outpop::Utility::Ref_Object::release(a2);
  return 1;
}
