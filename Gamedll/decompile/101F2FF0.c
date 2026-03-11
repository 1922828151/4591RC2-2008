/*
 * func-name: sub_101F2FF0
 * func-address: 0x101f2ff0
 * callers: 0x1000f272
 * callees: 0x1000270c, 0x10003882, 0x10009ac0, 0x1001002d, 0x102c9d86
 */

int **__thiscall sub_101F2FF0(int *this, int **a2, char a3, int *a4, int a5)
{
  int v6; // ebp
  int *v7; // eax
  int *v8; // eax
  int v9; // eax
  int *v10; // eax
  int i; // esi
  int v12; // ecx
  int *v13; // edx
  int v14; // edx
  int v15; // edx
  int v16; // eax
  _DWORD *v17; // ecx
  int v18; // edx
  _DWORD *v19; // edx
  int **result; // eax
  _BYTE v21[28]; // [esp+14h] [ebp-50h] BYREF
  _DWORD pExceptionObject[13]; // [esp+30h] [ebp-34h] BYREF

  if ( (unsigned int)this[2] >= 0x1FFFFFFE )
  {
    std::string::string(v21, "map/set<T> too long");
    pExceptionObject[12] = 0;
    sub_10009AC0(v21);
    pExceptionObject[0] = &std::length_error::`vftable';
    CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI3_AVlength_error_std__);
  }
  v6 = sub_1001002D(this[1], (int)a4, this[1], a5, 0);
  v7 = (int *)this[1];
  ++this[2];
  if ( a4 == v7 )
  {
    v7[1] = v6;
    *(_DWORD *)this[1] = v6;
    *(_DWORD *)(this[1] + 8) = v6;
  }
  else if ( a3 )
  {
    *a4 = v6;
    v8 = (int *)this[1];
    if ( a4 == (int *)*v8 )
      *v8 = v6;
  }
  else
  {
    a4[2] = v6;
    v9 = this[1];
    if ( a4 == *(int **)(v9 + 8) )
      *(_DWORD *)(v9 + 8) = v6;
  }
  v10 = (int *)(v6 + 4);
  for ( i = v6; !*(_BYTE *)(*(_DWORD *)(i + 4) + 20); v10 = (int *)(i + 4) )
  {
    v12 = *v10;
    v13 = *(int **)(*v10 + 4);
    if ( *v10 == *v13 )
    {
      v14 = v13[2];
      if ( *(_BYTE *)(v14 + 20) )
      {
        if ( i == *(_DWORD *)(v12 + 8) )
        {
          i = *v10;
          sub_1000270C(*v10);
        }
        *(_BYTE *)(*(_DWORD *)(i + 4) + 20) = 1;
        *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(i + 4) + 4) + 20) = 0;
        sub_10003882(*(_DWORD *)(*(_DWORD *)(i + 4) + 4));
      }
      else
      {
        *(_BYTE *)(v12 + 20) = 1;
        *(_BYTE *)(v14 + 20) = 1;
        *(_BYTE *)(*(_DWORD *)(*v10 + 4) + 20) = 0;
        i = *(_DWORD *)(*v10 + 4);
      }
    }
    else
    {
      v15 = *v13;
      if ( *(_BYTE *)(v15 + 20) )
      {
        if ( i == *(_DWORD *)v12 )
        {
          i = *v10;
          sub_10003882(*v10);
        }
        *(_BYTE *)(*(_DWORD *)(i + 4) + 20) = 1;
        *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(i + 4) + 4) + 20) = 0;
        v16 = *(_DWORD *)(*(_DWORD *)(i + 4) + 4);
        v17 = *(_DWORD **)(v16 + 8);
        *(_DWORD *)(v16 + 8) = *v17;
        if ( !*(_BYTE *)(*v17 + 21) )
          *(_DWORD *)(*v17 + 4) = v16;
        v17[1] = *(_DWORD *)(v16 + 4);
        v18 = this[1];
        if ( v16 == *(_DWORD *)(v18 + 4) )
        {
          *(_DWORD *)(v18 + 4) = v17;
        }
        else
        {
          v19 = *(_DWORD **)(v16 + 4);
          if ( v16 == *v19 )
            *v19 = v17;
          else
            v19[2] = v17;
        }
        *v17 = v16;
        *(_DWORD *)(v16 + 4) = v17;
      }
      else
      {
        *(_BYTE *)(v12 + 20) = 1;
        *(_BYTE *)(v15 + 20) = 1;
        *(_BYTE *)(*(_DWORD *)(*v10 + 4) + 20) = 0;
        i = *(_DWORD *)(*v10 + 4);
      }
    }
  }
  *(_BYTE *)(*(_DWORD *)(this[1] + 4) + 20) = 1;
  result = a2;
  a2[1] = (int *)v6;
  *a2 = this;
  return result;
}
