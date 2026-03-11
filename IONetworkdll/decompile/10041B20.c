/*
 * func-name: ?make_commit_data@Dgram_Connect_Bluider_Process@IONetwork@Outpop@@QAE_NV?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@3@@Z
 * func-address: 0x10041b20
 * callers: 0x10041850
 * callees: 0x10001d10, 0x10007420, 0x100082f0, 0x100086c0, 0x10009b30, 0x1000d2f0, 0x1000d500, 0x1004e98e
 */

char __thiscall Outpop::IONetwork::Dgram_Connect_Bluider_Process::make_commit_data(
        int this,
        Outpop::Utility::Ref_Object *a2)
{
  void *v3; // esi
  struct Outpop::IONetwork::Network_Init *v4; // eax
  HCRYPTPROV *v5; // esi
  void *v6; // eax
  Outpop::IONetwork::Client_Security *v7; // eax
  void (__thiscall ***v8)(_DWORD, int); // ecx
  char *ptr; // eax
  int v11; // eax
  int *v12; // eax
  int *v13; // eax
  char *v14; // ebx
  Outpop::Utility::Stream_Base *v15; // ebp
  const char *v16; // eax
  void *Block; // [esp+14h] [ebp-20h] BYREF
  size_t v18; // [esp+18h] [ebp-1Ch] BYREF
  int v19; // [esp+1Ch] [ebp-18h] BYREF
  int v20; // [esp+20h] [ebp-14h] BYREF
  int v21; // [esp+24h] [ebp-10h] BYREF
  int v22; // [esp+30h] [ebp-4h]

  v22 = 1;
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
  LOBYTE(v22) = 2;
  if ( v6 )
    v7 = Outpop::IONetwork::Client_Security::Client_Security((Outpop::IONetwork::Client_Security *)v6);
  else
    v7 = 0;
  LOBYTE(v22) = 0;
  *(_DWORD *)(this + 36) = v7;
  *((_DWORD *)v7 + 12) = v5;
  if ( !Outpop::IONetwork::CryptProv::CreateCryptGenKey(v5, *(_DWORD *)(*(_DWORD *)(this + 40) + 100)) )
    goto LABEL_10;
  Block = 0;
  if ( !Outpop::IONetwork::CryptProv::ExportCryptPublicKey(
          (Outpop::IONetwork::CryptProv *)v5,
          (unsigned __int8 **)&Block,
          &v18) )
  {
    free(Block);
LABEL_10:
    v8 = *(void (__thiscall ****)(_DWORD, int))(this + 36);
    if ( v8 )
      (**v8)(v8, 1);
    *(_DWORD *)(this + 36) = 0;
    v22 = -1;
    if ( a2 )
      Outpop::Utility::Ref_Object::release(a2);
    return 0;
  }
  ptr = Outpop::Utility::Stream_Base::get_read_ptr(a2);
  *ptr |= 0x80u;
  Outpop::Utility::Stream_Base::move_write_pos(a2, 1);
  v11 = *(_DWORD *)(this + 40);
  v20 = *(_DWORD *)(v11 + 12);
  v19 = *(_DWORD *)(v11 + 20);
  v21 = 1;
  v12 = sub_10009B30((int *)a2, (const char *)&v21);
  v13 = sub_10009B30(v12, (const char *)&v20);
  sub_10009B30(v13, (const char *)&v19);
  v14 = (char *)Block;
  Outpop::IONetwork::Security::first_set_rsapubkey(*(Outpop::IONetwork::Security **)(this + 36), (char *)Block, v18);
  sub_10009B30((int *)a2, (const char *)&v18);
  Outpop::Utility::Stream_Base::write(a2, v14);
  v15 = *(Outpop::Utility::Stream_Base **)(this + 68);
  if ( v15 )
  {
    Outpop::Utility::Stream_Base::get_readable(v15);
    v16 = Outpop::Utility::Stream_Base::get_read_ptr(v15);
    Outpop::Utility::Stream_Base::write(a2, v16);
  }
  free(v14);
  v22 = -1;
  if ( a2 )
    Outpop::Utility::Ref_Object::release(a2);
  return 1;
}
