/*
 * func-name: sub_1010F560
 * func-address: 0x1010f560
 * callers: 0x10109be0
 * callees: 0x101a2500
 */

void __thiscall sub_1010F560(int this, _DWORD *a2)
{
  _DWORD *v3; // esi
  void (__cdecl *v5)(); // ebx
  _DWORD *v6; // ebx
  _DWORD *v7; // [esp+10h] [ebp-Ch]

  v3 = **(_DWORD ***)(this + 4);
  v7 = *(_DWORD **)(this + 4);
  while ( 1 )
  {
    if ( this && this == this )
    {
      v5 = invalid_parameter_noinfo;
    }
    else
    {
      v5 = invalid_parameter_noinfo;
      invalid_parameter_noinfo();
    }
    if ( v3 == v7 )
      break;
    if ( !this )
      v5();
    if ( v3 == *(_DWORD **)(this + 4) )
      v5();
    if ( v3[2] == *a2 )
    {
      if ( v3 == *(_DWORD **)(this + 4) )
        v5();
      v6 = (_DWORD *)*v3;
      if ( v3 != *(_DWORD **)(this + 4) )
      {
        *(_DWORD *)v3[1] = v6;
        *(_DWORD *)(*v3 + 4) = v3[1];
        operator delete(v3);
        --*(_DWORD *)(this + 8);
      }
      v3 = v6;
    }
    else
    {
      if ( v3 == *(_DWORD **)(this + 4) )
        v5();
      v3 = (_DWORD *)*v3;
    }
  }
}
