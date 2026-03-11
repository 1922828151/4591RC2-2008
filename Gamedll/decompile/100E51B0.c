/*
 * func-name: sub_100E51B0
 * func-address: 0x100e51b0
 * callers: 0x10008972
 * callees: 0x1000f47a, 0x100117b1, 0x1001801b
 */

int *__thiscall sub_100E51B0(int this, int *a2, int a3, void *a4, int a5, void *a6)
{
  int v6; // edi
  void *v8; // ebp
  void *v9; // ebx
  void *v10; // ebp
  _DWORD *v11; // eax
  int v12; // ecx
  int *result; // eax
  int v14; // [esp+10h] [ebp-8h] BYREF

  v6 = a3;
  v8 = **(void ***)(this + 4);
  if ( !a3 || a3 != this )
    _invalid_parameter_noinfo();
  v9 = a4;
  if ( a4 != v8 )
    goto LABEL_13;
  v10 = *(void **)(this + 4);
  if ( !a5 || a5 != this )
    _invalid_parameter_noinfo();
  if ( a6 == v10 )
  {
    sub_100117B1(*(void **)(*(_DWORD *)(this + 4) + 4));
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
      sub_1001801B();
      sub_1000F47A((int)&v14, v6, v9);
      v9 = a4;
      v6 = a3;
    }
    result = a2;
    *a2 = v6;
    a2[1] = (int)v9;
  }
  return result;
}
