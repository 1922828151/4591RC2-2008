/*
 * func-name: sub_101E2510
 * func-address: 0x101e2510
 * callers: 0x10017c60
 * callees: 0x100088b4
 */

void __thiscall sub_101E2510(_DWORD **this, int a2)
{
  _DWORD *v2; // esi
  int v3; // edi
  int v4; // [esp+10h] [ebp-8h] BYREF

  v2 = (_DWORD *)*this[34];
  v3 = (int)(this + 33);
  v4 = (int)this;
  while ( v2 != *(_DWORD **)(v3 + 4) )
  {
    if ( *(_DWORD *)(v2[3] + 4) == a2 )
    {
      sub_100088B4((int)&v4, v3, v2);
      return;
    }
    if ( v2 == *(_DWORD **)(v3 + 4) )
      _invalid_parameter_noinfo();
    v2 = (_DWORD *)*v2;
  }
}
