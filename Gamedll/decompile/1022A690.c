/*
 * func-name: ?OnReadVarComplete@FEstablishment@GameClient@@UAEXXZ_0
 * func-address: 0x1022a690
 * callers: 0x100021b2
 * callees: 0x10012463
 */

void __thiscall GameClient::FEstablishment::OnReadVarComplete(GameClient::FEstablishment *this)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  _DWORD *v6; // eax
  void (__thiscall **v7)(_DWORD, int, _DWORD); // edi
  int v8; // eax
  int v9; // [esp+0h] [ebp-10h]

  GameClient::FProduct::OnReadVarComplete(this);
  if ( (unsigned __int8)std::operator!=<char>((char *)this + 196, &unk_1031BD55) )
  {
    v2 = AsyncLoader::Instance((char *)this + 196, v9);
    AsyncLoader::CachePacket(v2);
  }
  if ( (unsigned __int8)std::operator!=<char>((char *)this + 280, &unk_1031BD56) )
  {
    v3 = AsyncLoader::Instance((char *)this + 280, v9);
    AsyncLoader::CachePacket(v3);
  }
  if ( *((_DWORD *)this + 96) )
  {
    v4 = AsyncLoader::Instance((char *)this + 364, v9);
    AsyncLoader::CachePacket(v4);
  }
  if ( *((_DWORD *)this + 103) )
  {
    v5 = AudioDevice::Instance();
    v6 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 12))(v5);
    *((_DWORD *)this + 127) = v6;
    v7 = (void (__thiscall **)(_DWORD, int, _DWORD))(*v6 + 4);
    v8 = std::string::c_str((char *)this + 392);
    (*v7)(*((_DWORD *)this + 127), v8, 0);
  }
}
