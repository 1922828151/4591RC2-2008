/*
 * func-name: sub_1016A550
 * func-address: 0x1016a550
 * callers: 0x10162160
 * callees: 0x101a2500
 */

void __thiscall sub_1016A550(int this, _WORD *a2)
{
  _WORD *v3; // esi
  void (__cdecl *v5)(); // ebx
  _WORD *v6; // ebx
  _WORD *v7; // [esp+10h] [ebp-Ch]

  v3 = **(_WORD ***)(this + 4);
  v7 = *(_WORD **)(this + 4);
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
    if ( v3 == *(_WORD **)(this + 4) )
      v5();
    if ( v3[4] == *a2 && v3[5] == a2[1] && v3[6] == a2[2] )
    {
      if ( v3 == *(_WORD **)(this + 4) )
        v5();
      v6 = *(_WORD **)v3;
      if ( v3 != *(_WORD **)(this + 4) )
      {
        **((_DWORD **)v3 + 1) = v6;
        *(_DWORD *)(*(_DWORD *)v3 + 4) = *((_DWORD *)v3 + 1);
        operator delete(v3);
        --*(_DWORD *)(this + 8);
      }
      v3 = v6;
    }
    else
    {
      if ( v3 == *(_WORD **)(this + 4) )
        v5();
      v3 = *(_WORD **)v3;
    }
  }
}
