/*
 * func-name: sub_100A3D30
 * func-address: 0x100a3d30
 * callers: 0x1000c536
 * callees: 0x100109d3, 0x10014952, 0x10016bee
 */

int *__thiscall sub_100A3D30(int this, int *a2, int a3, int a4, int a5, int a6)
{
  int v6; // edi
  int v8; // ebp
  int v9; // ebx
  int v10; // ebp
  _DWORD *v11; // eax
  int v12; // ecx
  int *result; // eax
  char v14[8]; // [esp+10h] [ebp-8h] BYREF

  v6 = a3;
  v8 = **(_DWORD **)(this + 4);
  if ( !a3 || a3 != this )
    _invalid_parameter_noinfo();
  v9 = a4;
  if ( a4 != v8 )
    goto LABEL_13;
  v10 = *(_DWORD *)(this + 4);
  if ( !a5 || a5 != this )
    _invalid_parameter_noinfo();
  if ( a6 == v10 )
  {
    sub_100109D3(*(void **)(*(_DWORD *)(this + 4) + 4));
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
        _invalid_parameter_noinfo();
      if ( v9 == a6 )
        break;
      sub_10014952();
      sub_10016BEE((int)v14, v6, v9);
      v9 = a4;
      v6 = a3;
    }
    result = a2;
    *a2 = v6;
    a2[1] = v9;
  }
  return result;
}
