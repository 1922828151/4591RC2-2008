/*
 * func-name: sub_10100380
 * func-address: 0x10100380
 * callers: 0x100fb0a0
 * callees: 0x100fe390, 0x100ff960, 0x100ffcf0
 */

int *__thiscall sub_10100380(int this, int *a2, int a3, int *a4, int a5, int *a6)
{
  int v6; // edi
  int *v8; // ebp
  int *v9; // ebx
  int *v10; // ebp
  _DWORD *v11; // eax
  int v12; // ecx
  int *result; // eax
  int v14; // [esp+10h] [ebp-8h] BYREF

  v6 = a3;
  v8 = **(int ***)(this + 4);
  if ( !a3 || a3 != this )
    invalid_parameter_noinfo();
  v9 = a4;
  if ( a4 != v8 )
    goto LABEL_13;
  v10 = *(int **)(this + 4);
  if ( !a5 || a5 != this )
    invalid_parameter_noinfo();
  if ( a6 == v10 )
  {
    sub_100FFCF0(*(void ***)(*(_DWORD *)(this + 4) + 4));
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
      sub_100FE390(&a3);
      sub_100FF960((_DWORD *)this, &v14, v6, v9);
      v9 = a4;
      v6 = a3;
    }
    result = a2;
    *a2 = v6;
    a2[1] = (int)v9;
  }
  return result;
}
