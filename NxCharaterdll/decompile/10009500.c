/*
 * func-name: sub_10009500
 * func-address: 0x10009500
 * callers: none
 * callees: 0x10001810, 0x10002260, 0x100090a0
 */

int __thiscall sub_10009500(_DWORD *this, int a2, int a3)
{
  int v4; // ebp
  int v6; // eax
  int v7; // edx
  int v8; // esi
  int v9; // eax
  int v10; // edx
  int v11; // edi
  int *v12; // esi

  v4 = 0;
  if ( !this[3] )
    return 0;
  v6 = *(_DWORD *)(a3 + 12);
  if ( !v6 )
  {
    v8 = (*(int (__thiscall **)(_DWORD, int, _DWORD))(*(_DWORD *)this[3] + 8))(this[3], 392, 0);
    if ( v8 )
      sub_10001810(v8, v7, (float *)a3, a2);
LABEL_9:
    if ( v8 )
      v11 = v8 + 8;
    else
      v11 = 0;
    v4 = v8;
    if ( v11 )
    {
      v12 = (int *)this[2];
      sub_100090A0(v12);
      *(_DWORD *)(v12[1] + 4 * v12[2]++) = v11;
      *(_DWORD *)(v11 + 356) = this;
    }
    return v4;
  }
  if ( v6 == 1 )
  {
    v9 = (*(int (__thiscall **)(_DWORD, int, _DWORD))(*(_DWORD *)this[3] + 8))(this[3], 392, 0);
    v8 = v9;
    if ( v9 )
      sub_10002260(v9, v10, a3, a2);
    goto LABEL_9;
  }
  return v4;
}
