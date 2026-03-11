/*
 * func-name: sub_1006D220
 * func-address: 0x1006d220
 * callers: 0x1006dc40
 * callees: 0x1006c450, 0x100ce1d0, 0x100ce2a0, 0x100ce2f0, 0x100ce350, 0x101a2500, 0x101a2522
 */

_DWORD *__thiscall sub_1006D220(_DWORD *this, _DWORD *a2, int a3, int **a4)
{
  int **v5; // ebx
  int *v6; // edi
  int *v7; // ecx
  int *v8; // esi
  int v9; // eax
  int **v10; // ebx
  int *v11; // eax
  int v12; // ebx
  int v13; // eax
  int **v14; // eax
  char v15; // al
  int v16; // eax
  int v17; // edx
  bool v18; // zf
  int v19; // eax
  _DWORD *result; // eax
  int **v21; // edx
  int *v22; // [esp+4h] [ebp-54h]
  _BYTE v23[28]; // [esp+8h] [ebp-50h] BYREF
  _DWORD pExceptionObject[3]; // [esp+24h] [ebp-34h] BYREF
  _BYTE v25[28]; // [esp+30h] [ebp-28h] BYREF
  int v26; // [esp+54h] [ebp-4h]

  if ( *((_BYTE *)a4 + 21) )
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
  v22 = (int *)a4;
  sub_100CE350(&a3);
  if ( *((_BYTE *)*v5 + 21) )
  {
    v6 = v5[2];
LABEL_8:
    v8 = v5[1];
    if ( !*((_BYTE *)v6 + 21) )
      v6[1] = (int)v8;
    v9 = this[1];
    if ( *(int ***)(v9 + 4) == v5 )
    {
      *(_DWORD *)(v9 + 4) = v6;
    }
    else if ( (int **)*v8 == v5 )
    {
      *v8 = (int)v6;
    }
    else
    {
      v8[2] = (int)v6;
    }
    v10 = (int **)this[1];
    if ( *v10 == v22 )
    {
      if ( *((_BYTE *)v6 + 21) )
        v11 = v8;
      else
        v11 = sub_1006C450(v6);
      *v10 = v11;
    }
    v12 = this[1];
    if ( *(int **)(v12 + 8) == v22 )
    {
      if ( *((_BYTE *)v6 + 21) )
        *(_DWORD *)(v12 + 8) = v8;
      else
        *(_DWORD *)(v12 + 8) = sub_100CE1D0(v6);
    }
    goto LABEL_35;
  }
  if ( *((_BYTE *)v5[2] + 21) )
  {
    v6 = *v5;
    goto LABEL_8;
  }
  v7 = (int *)a4;
  v6 = a4[2];
  if ( a4 == v5 )
    goto LABEL_8;
  (*v5)[1] = (int)a4;
  *v7 = (int)*v5;
  if ( v7 == v5[2] )
  {
    v8 = v7;
  }
  else
  {
    v8 = (int *)v7[1];
    if ( !*((_BYTE *)v6 + 21) )
      v6[1] = (int)v8;
    *v8 = (int)v6;
    v7[2] = (int)v5[2];
    v5[2][1] = (int)v7;
  }
  v13 = this[1];
  if ( *(int ***)(v13 + 4) == v5 )
  {
    *(_DWORD *)(v13 + 4) = v7;
  }
  else
  {
    v14 = (int **)v5[1];
    if ( *v14 == (int *)v5 )
      *v14 = v7;
    else
      v14[2] = v7;
  }
  v7[1] = (int)v5[1];
  v15 = *((_BYTE *)v7 + 20);
  *((_BYTE *)v7 + 20) = *((_BYTE *)v5 + 20);
  *((_BYTE *)v5 + 20) = v15;
LABEL_35:
  if ( *((_BYTE *)v22 + 20) == 1 )
  {
    if ( v6 != *(int **)(this[1] + 4) )
    {
      do
      {
        if ( *((_BYTE *)v6 + 20) != 1 )
          break;
        v16 = *v8;
        if ( v6 == (int *)*v8 )
        {
          v16 = v8[2];
          if ( !*(_BYTE *)(v16 + 20) )
          {
            *(_BYTE *)(v16 + 20) = 1;
            *((_BYTE *)v8 + 20) = 0;
            sub_100CE2A0(v8);
            v16 = v8[2];
          }
          if ( *(_BYTE *)(v16 + 21) )
            goto LABEL_53;
          if ( *(_BYTE *)(*(_DWORD *)v16 + 20) != 1 || *(_BYTE *)(*(_DWORD *)(v16 + 8) + 20) != 1 )
          {
            if ( *(_BYTE *)(*(_DWORD *)(v16 + 8) + 20) == 1 )
            {
              *(_BYTE *)(*(_DWORD *)v16 + 20) = 1;
              *(_BYTE *)(v16 + 20) = 0;
              sub_100CE2F0(v16);
              v16 = v8[2];
            }
            *(_BYTE *)(v16 + 20) = *((_BYTE *)v8 + 20);
            *((_BYTE *)v8 + 20) = 1;
            *(_BYTE *)(*(_DWORD *)(v16 + 8) + 20) = 1;
            sub_100CE2A0(v8);
            break;
          }
        }
        else
        {
          if ( !*(_BYTE *)(v16 + 20) )
          {
            *(_BYTE *)(v16 + 20) = 1;
            *((_BYTE *)v8 + 20) = 0;
            sub_100CE2F0(v8);
            v16 = *v8;
          }
          if ( *(_BYTE *)(v16 + 21) )
            goto LABEL_53;
          v17 = *(_DWORD *)(v16 + 8);
          if ( *(_BYTE *)(v17 + 20) != 1 || *(_BYTE *)(*(_DWORD *)v16 + 20) != 1 )
          {
            if ( *(_BYTE *)(*(_DWORD *)v16 + 20) == 1 )
            {
              *(_BYTE *)(v17 + 20) = 1;
              *(_BYTE *)(v16 + 20) = 0;
              sub_100CE2A0(v16);
              v16 = *v8;
            }
            *(_BYTE *)(v16 + 20) = *((_BYTE *)v8 + 20);
            *((_BYTE *)v8 + 20) = 1;
            *(_BYTE *)(*(_DWORD *)v16 + 20) = 1;
            sub_100CE2F0(v8);
            break;
          }
        }
        *(_BYTE *)(v16 + 20) = 0;
LABEL_53:
        v6 = v8;
        v18 = v8 == *(int **)(this[1] + 4);
        v8 = (int *)v8[1];
      }
      while ( !v18 );
    }
    *((_BYTE *)v6 + 20) = 1;
  }
  operator delete(v22);
  v19 = this[2];
  if ( v19 )
    this[2] = v19 - 1;
  result = a2;
  v21 = a4;
  *a2 = a3;
  a2[1] = v21;
  return result;
}
