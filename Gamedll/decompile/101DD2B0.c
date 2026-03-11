/*
 * func-name: sub_101DD2B0
 * func-address: 0x101dd2b0
 * callers: 0x10003765
 * callees: none
 */

int __thiscall sub_101DD2B0(_DWORD *this)
{
  int v2; // ecx
  void (__thiscall ***v3)(_DWORD, int); // ecx
  void (__thiscall ***v4)(_DWORD, int); // ecx
  void (__thiscall ***v5)(_DWORD, int); // ecx
  void (__thiscall ***v6)(_DWORD, int); // ecx
  void (__thiscall ***v7)(_DWORD, int); // ecx
  void (__thiscall ***v8)(_DWORD, int); // ecx

  v2 = this[4];
  if ( v2 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 8))(v2);
  v3 = (void (__thiscall ***)(_DWORD, int))this[5];
  this[4] = 0;
  if ( v3 )
  {
    (**v3)(v3, 1);
    this[5] = 0;
  }
  v4 = (void (__thiscall ***)(_DWORD, int))this[6];
  if ( v4 )
  {
    (**v4)(v4, 1);
    this[6] = 0;
  }
  v5 = (void (__thiscall ***)(_DWORD, int))this[7];
  if ( v5 )
  {
    (**v5)(v5, 1);
    this[7] = 0;
  }
  v6 = (void (__thiscall ***)(_DWORD, int))this[8];
  if ( v6 )
  {
    (**v6)(v6, 1);
    this[8] = 0;
  }
  v7 = (void (__thiscall ***)(_DWORD, int))this[9];
  if ( v7 )
  {
    (**v7)(v7, 1);
    this[9] = 0;
  }
  v8 = (void (__thiscall ***)(_DWORD, int))this[10];
  if ( v8 )
  {
    (**v8)(v8, 1);
    this[10] = 0;
  }
  return sub_10003A0D();
}
