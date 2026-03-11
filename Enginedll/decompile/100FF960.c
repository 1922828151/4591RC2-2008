/*
 * func-name: sub_100FF960
 * func-address: 0x100ff960
 * callers: 0x10100380
 * callees: 0x100fde70, 0x100fde90, 0x100fdf10, 0x100fe390, 0x100fe400, 0x101a2500, 0x101a2522
 */

_DWORD *__thiscall sub_100FF960(_DWORD *this, _DWORD *a2, int a3, int *a4)
{
  int *v5; // ebp
  int v6; // edi
  int *v7; // ecx
  int v8; // esi
  int v9; // eax
  int **v10; // ebx
  int *v11; // eax
  int v12; // ebx
  int v13; // eax
  int **v14; // eax
  char v15; // al
  _DWORD *v16; // ecx
  _BYTE *v17; // eax
  bool v18; // zf
  int v19; // eax
  _DWORD *result; // eax
  int *v21; // edx
  _BYTE v23[28]; // [esp+8h] [ebp-50h] BYREF
  _DWORD pExceptionObject[3]; // [esp+24h] [ebp-34h] BYREF
  char v25[28]; // [esp+30h] [ebp-28h] BYREF
  int v26; // [esp+54h] [ebp-4h]

  if ( *((_BYTE *)a4 + 41) )
  {
    std::string::string(v23, "invalid map/set<T> iterator");
    v26 = 0;
    std::exception::exception((std::exception *)pExceptionObject);
    LOBYTE(v26) = 1;
    pExceptionObject[0] = &std::logic_error::`vftable';
    std::string::string(v25, v23);
    LOBYTE(v26) = 0;
    pExceptionObject[0] = &std::out_of_range::`vftable';
    CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI3_AVout_of_range_std__);
  }
  v5 = a4;
  sub_100FE390(&a3);
  if ( *(_BYTE *)(*v5 + 41) )
  {
    v6 = v5[2];
LABEL_8:
    v8 = v5[1];
    if ( !*(_BYTE *)(v6 + 41) )
      *(_DWORD *)(v6 + 4) = v8;
    v9 = this[1];
    if ( *(int **)(v9 + 4) == v5 )
    {
      *(_DWORD *)(v9 + 4) = v6;
    }
    else if ( *(int **)v8 == v5 )
    {
      *(_DWORD *)v8 = v6;
    }
    else
    {
      *(_DWORD *)(v8 + 8) = v6;
    }
    v10 = (int **)this[1];
    if ( *v10 == v5 )
    {
      if ( *(_BYTE *)(v6 + 41) )
        v11 = (int *)v8;
      else
        v11 = sub_100FDE70((_DWORD *)v6);
      *v10 = v11;
    }
    v12 = this[1];
    if ( *(int **)(v12 + 8) == v5 )
    {
      if ( *(_BYTE *)(v6 + 41) )
        *(_DWORD *)(v12 + 8) = v8;
      else
        *(_DWORD *)(v12 + 8) = sub_100FDF10(v6);
    }
    goto LABEL_35;
  }
  if ( *(_BYTE *)(v5[2] + 41) )
  {
    v6 = *v5;
    goto LABEL_8;
  }
  v7 = a4;
  v6 = a4[2];
  if ( a4 == v5 )
    goto LABEL_8;
  *(_DWORD *)(*v5 + 4) = a4;
  *v7 = *v5;
  if ( v7 == (int *)v5[2] )
  {
    v8 = (int)v7;
  }
  else
  {
    v8 = v7[1];
    if ( !*(_BYTE *)(v6 + 41) )
      *(_DWORD *)(v6 + 4) = v8;
    *(_DWORD *)v8 = v6;
    v7[2] = v5[2];
    *(_DWORD *)(v5[2] + 4) = v7;
  }
  v13 = this[1];
  if ( *(int **)(v13 + 4) == v5 )
  {
    *(_DWORD *)(v13 + 4) = v7;
  }
  else
  {
    v14 = (int **)v5[1];
    if ( *v14 == v5 )
      *v14 = v7;
    else
      v14[2] = v7;
  }
  v7[1] = v5[1];
  v15 = *((_BYTE *)v7 + 40);
  *((_BYTE *)v7 + 40) = *((_BYTE *)v5 + 40);
  *((_BYTE *)v5 + 40) = v15;
LABEL_35:
  if ( *((_BYTE *)v5 + 40) == 1 )
  {
    v16 = this;
    if ( v6 != *(_DWORD *)(this[1] + 4) )
    {
      do
      {
        if ( *(_BYTE *)(v6 + 40) != 1 )
          break;
        v17 = *(_BYTE **)v8;
        if ( v6 == *(_DWORD *)v8 )
        {
          v17 = *(_BYTE **)(v8 + 8);
          if ( !v17[40] )
          {
            v17[40] = 1;
            *(_BYTE *)(v8 + 40) = 0;
            sub_100FE400(v16, v8);
            v17 = *(_BYTE **)(v8 + 8);
            v16 = this;
          }
          if ( v17[41] )
            goto LABEL_53;
          if ( *(_BYTE *)(*(_DWORD *)v17 + 40) != 1 || *(_BYTE *)(*((_DWORD *)v17 + 2) + 40) != 1 )
          {
            if ( *(_BYTE *)(*((_DWORD *)v17 + 2) + 40) == 1 )
            {
              *(_BYTE *)(*(_DWORD *)v17 + 40) = 1;
              v17[40] = 0;
              sub_100FDE90(v16, v17);
              v17 = *(_BYTE **)(v8 + 8);
              v16 = this;
            }
            v17[40] = *(_BYTE *)(v8 + 40);
            *(_BYTE *)(v8 + 40) = 1;
            *(_BYTE *)(*((_DWORD *)v17 + 2) + 40) = 1;
            sub_100FE400(v16, v8);
            break;
          }
        }
        else
        {
          if ( !v17[40] )
          {
            v17[40] = 1;
            *(_BYTE *)(v8 + 40) = 0;
            sub_100FDE90(v16, (_DWORD *)v8);
            v17 = *(_BYTE **)v8;
            v16 = this;
          }
          if ( v17[41] )
            goto LABEL_53;
          if ( *(_BYTE *)(*((_DWORD *)v17 + 2) + 40) != 1 || *(_BYTE *)(*(_DWORD *)v17 + 40) != 1 )
          {
            if ( *(_BYTE *)(*(_DWORD *)v17 + 40) == 1 )
            {
              *(_BYTE *)(*((_DWORD *)v17 + 2) + 40) = 1;
              v17[40] = 0;
              sub_100FE400(v16, (int)v17);
              v17 = *(_BYTE **)v8;
              v16 = this;
            }
            v17[40] = *(_BYTE *)(v8 + 40);
            *(_BYTE *)(v8 + 40) = 1;
            *(_BYTE *)(*(_DWORD *)v17 + 40) = 1;
            sub_100FDE90(v16, (_DWORD *)v8);
            break;
          }
        }
        v17[40] = 0;
LABEL_53:
        v6 = v8;
        v18 = v8 == *(_DWORD *)(v16[1] + 4);
        v8 = *(_DWORD *)(v8 + 4);
      }
      while ( !v18 );
    }
    *(_BYTE *)(v6 + 40) = 1;
  }
  if ( v5[7] )
    operator delete((void *)v5[7]);
  v5[7] = 0;
  v5[8] = 0;
  v5[9] = 0;
  operator delete(v5);
  v19 = this[2];
  if ( v19 )
    this[2] = v19 - 1;
  result = a2;
  v21 = a4;
  *a2 = a3;
  a2[1] = v21;
  return result;
}
