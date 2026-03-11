/*
 * func-name: sub_100D01D0
 * func-address: 0x100d01d0
 * callers: 0x100d0320, 0x100d2b50, 0x1014a230
 * callees: 0x100ce350, 0x100cedf0, 0x100cf3b0
 */

int *__thiscall sub_100D01D0(int this, int *a2, int a3, int a4, int a5, int a6)
{
  int v6; // edi
  int v8; // ebp
  int v9; // ebx
  int v10; // ebp
  _DWORD *v11; // eax
  int v12; // ecx
  int *result; // eax
  int v14; // [esp+10h] [ebp-8h] BYREF

  v6 = a3;
  v8 = **(_DWORD **)(this + 4);
  if ( !a3 || a3 != this )
    invalid_parameter_noinfo();
  v9 = a4;
  if ( a4 != v8 )
    goto LABEL_13;
  v10 = *(_DWORD *)(this + 4);
  if ( !a5 || a5 != this )
    invalid_parameter_noinfo();
  if ( a6 == v10 )
  {
    sub_100CEDF0(*(void ***)(*(_DWORD *)(this + 4) + 4));
    *(_DWORD *)(*(_DWORD *)(this + 4) + 4) = *(_DWORD *)(this + 4);
    v11 = *(_DWORD **)(this + 4);
    *(_DWORD *)(this + 8) = 0;
    *v11 = v11;
    *(_DWORD *)(*(_DWORD *)(this + 4) + 8) = *(_DWORD *)(this + 4);
    v12 = **(_DWORD **)(this + 4);
    result = a2;
    *a2 = this;
    a2[1] = v12;
  }
  else
  {
LABEL_13:
    while ( 1 )
    {
      if ( !v6 || v6 != a5 )
        invalid_parameter_noinfo();
      if ( v9 == a6 )
        break;
      sub_100CE350(&a3);
      sub_100CF3B0((_DWORD *)this, &v14, v6, v9);
      v9 = a4;
      v6 = a3;
    }
    result = a2;
    *a2 = v6;
    a2[1] = v9;
  }
  return result;
}
