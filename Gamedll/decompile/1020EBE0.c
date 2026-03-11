/*
 * func-name: ?RemoveUser@LocalUserManager@GameClient@@QAE_NK@Z_0
 * func-address: 0x1020ebe0
 * callers: 0x1001325f
 * callees: 0x10002784, 0x1000dbf7
 */

char __thiscall GameClient::LocalUserManager::RemoveUser(GameClient::LocalUserManager *this, unsigned int a2)
{
  int v3; // edi
  void *v4; // ebx
  _DWORD *v5; // esi
  void (__thiscall ***v7)(_DWORD, int); // ecx
  int v8; // [esp+10h] [ebp-8h] BYREF
  void *v9; // [esp+14h] [ebp-4h]

  sub_1000DBF7((int)&v8, (int)&a2);
  v3 = v8;
  v4 = (void *)*((_DWORD *)this + 3);
  if ( !v8 || (GameClient::LocalUserManager *)v8 != (GameClient::LocalUserManager *)((char *)this + 8) )
    _invalid_parameter_noinfo();
  v5 = v9;
  if ( v9 == v4 )
    return 0;
  if ( !v3 )
    _invalid_parameter_noinfo();
  if ( v5 == *(_DWORD **)(v3 + 4) )
    _invalid_parameter_noinfo();
  if ( v5[3] )
  {
    if ( v5 == *(_DWORD **)(v3 + 4) )
      _invalid_parameter_noinfo();
    v7 = (void (__thiscall ***)(_DWORD, int))v5[3];
    if ( v7 )
      (**v7)(v7, 1);
    if ( v5 == *(_DWORD **)(v3 + 4) )
      _invalid_parameter_noinfo();
    v5[3] = 0;
  }
  sub_10002784((int)&v8, v3, v5);
  return 1;
}
