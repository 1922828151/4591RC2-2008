/*
 * func-name: sub_100E4C60
 * func-address: 0x100e4c60
 * callers: 0x1000f47a
 * callees: 0x10005b9b, 0x10009ac0, 0x100130f7, 0x1001801b, 0x10018cd2, 0x100197ef, 0x102c9d50, 0x102c9d86
 */

_DWORD *__thiscall sub_100E4C60(_DWORD *this, _DWORD *a2, int a3, int *a4)
{
  void **v5; // ebp
  int v6; // edi
  int v7; // esi
  int v8; // eax
  int *v9; // ebx
  int v10; // eax
  int v11; // ebx
  _DWORD *v12; // ecx
  int v13; // eax
  bool v14; // zf
  int v15; // esi
  int v16; // edi
  int v17; // eax
  _DWORD *result; // eax
  _BYTE v20[28]; // [esp+20h] [ebp-50h] BYREF
  void **pExceptionObject; // [esp+3Ch] [ebp-34h] BYREF
  int v22; // [esp+6Ch] [ebp-4h]

  if ( *((_BYTE *)a4 + 33) )
  {
    std::string::string(v20, "invalid map/set<T> iterator");
    v22 = 0;
    sub_10009AC0(v20);
    pExceptionObject = &std::out_of_range::`vftable';
    CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI3_AVout_of_range_std__);
  }
  v5 = (void **)a4;
  sub_1001801B();
  if ( *(_BYTE *)(*a4 + 33) )
  {
    v6 = a4[2];
  }
  else if ( *(_BYTE *)(a4[2] + 33) )
  {
    v6 = *a4;
  }
  else
  {
    v6 = a4[2];
  }
  v7 = a4[1];
  if ( !*(_BYTE *)(v6 + 33) )
    *(_DWORD *)(v6 + 4) = v7;
  v8 = this[1];
  if ( *(int **)(v8 + 4) == a4 )
  {
    *(_DWORD *)(v8 + 4) = v6;
  }
  else if ( *(int **)v7 == a4 )
  {
    *(_DWORD *)v7 = v6;
  }
  else
  {
    *(_DWORD *)(v7 + 8) = v6;
  }
  v9 = (int *)this[1];
  if ( (int *)*v9 == a4 )
  {
    if ( *(_BYTE *)(v6 + 33) )
      v10 = v7;
    else
      v10 = sub_100130F7(v6);
    *v9 = v10;
  }
  v11 = this[1];
  if ( *(int **)(v11 + 8) == a4 )
  {
    if ( *(_BYTE *)(v6 + 33) )
      *(_DWORD *)(v11 + 8) = v7;
    else
      *(_DWORD *)(v11 + 8) = sub_100197EF(v6);
  }
  if ( *((_BYTE *)a4 + 32) == 1 )
  {
    v12 = this;
    if ( v6 != *(_DWORD *)(this[1] + 4) )
    {
      do
      {
        if ( *(_BYTE *)(v6 + 32) != 1 )
          break;
        v13 = *(_DWORD *)v7;
        if ( v6 == *(_DWORD *)v7 )
        {
          v13 = *(_DWORD *)(v7 + 8);
          if ( !*(_BYTE *)(v13 + 32) )
          {
            *(_BYTE *)(v13 + 32) = 1;
            *(_BYTE *)(v7 + 32) = 0;
            sub_10005B9B(v7);
            v13 = *(_DWORD *)(v7 + 8);
            v12 = this;
          }
          if ( *(_BYTE *)(v13 + 33) )
            goto LABEL_42;
          if ( *(_BYTE *)(*(_DWORD *)v13 + 32) != 1 || *(_BYTE *)(*(_DWORD *)(v13 + 8) + 32) != 1 )
          {
            if ( *(_BYTE *)(*(_DWORD *)(v13 + 8) + 32) == 1 )
            {
              *(_BYTE *)(*(_DWORD *)v13 + 32) = 1;
              *(_BYTE *)(v13 + 32) = 0;
              sub_10018CD2(v13);
              v13 = *(_DWORD *)(v7 + 8);
            }
            *(_BYTE *)(v13 + 32) = *(_BYTE *)(v7 + 32);
            *(_BYTE *)(v7 + 32) = 1;
            *(_BYTE *)(*(_DWORD *)(v13 + 8) + 32) = 1;
            sub_10005B9B(v7);
            break;
          }
        }
        else
        {
          if ( !*(_BYTE *)(v13 + 32) )
          {
            *(_BYTE *)(v13 + 32) = 1;
            *(_BYTE *)(v7 + 32) = 0;
            sub_10018CD2(v7);
            v13 = *(_DWORD *)v7;
            v12 = this;
          }
          if ( *(_BYTE *)(v13 + 33) )
            goto LABEL_42;
          if ( *(_BYTE *)(*(_DWORD *)(v13 + 8) + 32) != 1 || *(_BYTE *)(*(_DWORD *)v13 + 32) != 1 )
          {
            if ( *(_BYTE *)(*(_DWORD *)v13 + 32) == 1 )
            {
              *(_BYTE *)(*(_DWORD *)(v13 + 8) + 32) = 1;
              *(_BYTE *)(v13 + 32) = 0;
              sub_10005B9B(v13);
              v13 = *(_DWORD *)v7;
            }
            *(_BYTE *)(v13 + 32) = *(_BYTE *)(v7 + 32);
            *(_BYTE *)(v7 + 32) = 1;
            *(_BYTE *)(*(_DWORD *)v13 + 32) = 1;
            sub_10018CD2(v7);
            break;
          }
        }
        *(_BYTE *)(v13 + 32) = 0;
LABEL_42:
        v6 = v7;
        v14 = v7 == *(_DWORD *)(v12[1] + 4);
        v7 = *(_DWORD *)(v7 + 4);
      }
      while ( !v14 );
    }
    *(_BYTE *)(v6 + 32) = 1;
  }
  v15 = a4[5];
  if ( v15 )
  {
    v16 = a4[6];
    if ( v15 != v16 )
    {
      do
      {
        std::string::~string((void *)(v15 + 64));
        std::string::~string((void *)(v15 + 36));
        v22 = -1;
        std::string::~string((void *)(v15 + 8));
        v15 += 92;
      }
      while ( v15 != v16 );
      v5 = (void **)a4;
    }
    operator delete(v5[5]);
  }
  v5[5] = 0;
  v5[6] = 0;
  v5[7] = 0;
  operator delete(v5);
  v17 = this[2];
  if ( v17 )
    this[2] = v17 - 1;
  result = a2;
  *a2 = a3;
  a2[1] = a4;
  return result;
}
