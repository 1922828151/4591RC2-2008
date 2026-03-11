/*
 * func-name: ?UpdateModel@Establishment@GameClient@@QAEXXZ_0
 * func-address: 0x101a1c10
 * callers: 0x10016144
 * callees: none
 */

void __thiscall GameClient::Establishment::UpdateModel(GameClient::Establishment *this)
{
  bool v2; // zf
  int v3; // eax
  int v4; // edx
  int v5; // ecx
  _DWORD v6[16]; // [esp+Ch] [ebp-40h] BYREF

  v2 = *((_DWORD *)this + 75) == 0;
  v3 = *((_DWORD *)this + 6);
  v4 = *((_DWORD *)this + 8);
  qmemcpy(v6, (char *)this + 36, sizeof(v6));
  v5 = *((_DWORD *)this + 7);
  v6[12] = v3;
  v6[13] = v5;
  v6[14] = v4;
  if ( !v2 )
    (*(void (__thiscall **)(_DWORD, _DWORD *))(**((_DWORD **)this + 75) + 136))(*((_DWORD *)this + 75), v6);
  if ( *((_DWORD *)this + 77) )
    (*(void (__thiscall **)(_DWORD, _DWORD *))(**((_DWORD **)this + 77) + 136))(*((_DWORD *)this + 77), v6);
}
