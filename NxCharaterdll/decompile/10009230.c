/*
 * func-name: sub_10009230
 * func-address: 0x10009230
 * callers: none
 * callees: none
 */

int __thiscall sub_10009230(int this, int *a2)
{
  int v3; // eax
  int v4; // esi
  int v5; // ecx
  bool v6; // zf
  int v7; // eax
  int *v8; // ecx
  int result; // eax

  v3 = *(_DWORD *)(this + 8);
  v4 = 0;
  if ( *(_DWORD *)(v3 + 8) )
  {
    while ( 1 )
    {
      v5 = *(_DWORD *)(*(_DWORD *)(v3 + 4) + 4 * v4);
      v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 8))(v5) == (_DWORD)a2;
      v3 = *(_DWORD *)(this + 8);
      if ( v6 )
        break;
      if ( (unsigned int)++v4 >= *(_DWORD *)(v3 + 8) )
        goto LABEL_6;
    }
    *(_DWORD *)(*(_DWORD *)(v3 + 4) + 4 * v4) = *(_DWORD *)(*(_DWORD *)(v3 + 4) + 4 * (*(_DWORD *)(v3 + 8))-- - 4);
  }
LABEL_6:
  v6 = (*(int (__thiscall **)(int *))(*a2 + 52))(a2) == 1;
  v7 = *a2;
  v8 = a2;
  if ( !v6 )
  {
    result = (*(int (__thiscall **)(int *))(v7 + 52))(a2);
    if ( result )
      return result;
    v7 = *a2;
    v8 = a2;
  }
  (*(void (__thiscall **)(int *, _DWORD))v7)(v8, 0);
  return (*(int (__thiscall **)(_DWORD, int *))(**(_DWORD **)(this + 12) + 20))(*(_DWORD *)(this + 12), a2);
}
