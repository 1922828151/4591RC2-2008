/*
 * func-name: ?DeleteInstance@FlyweightManager@GameClient@@QAEXKK@Z_0
 * func-address: 0x1022deb0
 * callers: 0x100084f4
 * callees: 0x10015410
 */

void __thiscall GameClient::FlyweightManager::DeleteInstance(
        GameClient::FlyweightManager *this,
        unsigned int a2,
        unsigned int a3)
{
  int v4; // edi
  char *v5; // eax
  char *v6; // esi
  int v7; // ebx
  char *v8; // [esp+10h] [ebp-8h] BYREF
  int v9; // [esp+14h] [ebp-4h]

  sub_10015410((int)&v8, (int)&a2);
  v4 = *((_DWORD *)this + 2);
  v5 = (char *)this + 4;
  v6 = v8;
  if ( !v8 || v8 != v5 )
    _invalid_parameter_noinfo();
  v7 = v9;
  if ( v9 != v4 )
  {
    if ( !v6 )
      _invalid_parameter_noinfo();
    if ( v7 == *((_DWORD *)v6 + 1) )
      _invalid_parameter_noinfo();
    (*(void (__thiscall **)(_DWORD, unsigned int))(**(_DWORD **)(v7 + 12) + 12))(*(_DWORD *)(v7 + 12), a3);
  }
}
