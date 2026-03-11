/*
 * func-name: sub_100A4640
 * func-address: 0x100a4640
 * callers: 0x10014c81
 * callees: 0x10004dc2, 0x10009ac0, 0x1000e098, 0x10010b81, 0x10016a31, 0x10016b03, 0x102c9d50, 0x102c9d86
 */

_DWORD *__thiscall sub_100A4640(_DWORD *this, _DWORD *a2, int a3, char *a4)
{
  int v5; // edi
  int v6; // esi
  int v7; // eax
  int *v8; // ebx
  int v9; // eax
  int v10; // ebx
  int v11; // eax
  int v12; // edx
  bool v13; // zf
  int v14; // eax
  _DWORD *result; // eax
  _BYTE v16[28]; // [esp+18h] [ebp-50h] BYREF
  _DWORD pExceptionObject[13]; // [esp+34h] [ebp-34h] BYREF

  if ( a4[45] )
  {
    std::string::string(v16, "invalid map/set<T> iterator");
    pExceptionObject[12] = 0;
    sub_10009AC0(v16);
    pExceptionObject[0] = &std::out_of_range::`vftable';
    CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI3_AVout_of_range_std__);
  }
  sub_10016B03();
  if ( *(_BYTE *)(*(_DWORD *)a4 + 45) )
  {
    v5 = *((_DWORD *)a4 + 2);
  }
  else if ( *(_BYTE *)(*((_DWORD *)a4 + 2) + 45) )
  {
    v5 = *(_DWORD *)a4;
  }
  else
  {
    v5 = *((_DWORD *)a4 + 2);
  }
  v6 = *((_DWORD *)a4 + 1);
  if ( !*(_BYTE *)(v5 + 45) )
    *(_DWORD *)(v5 + 4) = v6;
  v7 = this[1];
  if ( *(char **)(v7 + 4) == a4 )
  {
    *(_DWORD *)(v7 + 4) = v5;
  }
  else if ( *(char **)v6 == a4 )
  {
    *(_DWORD *)v6 = v5;
  }
  else
  {
    *(_DWORD *)(v6 + 8) = v5;
  }
  v8 = (int *)this[1];
  if ( (char *)*v8 == a4 )
  {
    if ( *(_BYTE *)(v5 + 45) )
      v9 = v6;
    else
      v9 = sub_10010B81(v5);
    *v8 = v9;
  }
  v10 = this[1];
  if ( *(char **)(v10 + 8) == a4 )
  {
    if ( *(_BYTE *)(v5 + 45) )
      *(_DWORD *)(v10 + 8) = v6;
    else
      *(_DWORD *)(v10 + 8) = sub_10016A31(v5);
  }
  if ( a4[44] == 1 )
  {
    if ( v5 != *(_DWORD *)(this[1] + 4) )
    {
      do
      {
        if ( *(_BYTE *)(v5 + 44) != 1 )
          break;
        v11 = *(_DWORD *)v6;
        if ( v5 == *(_DWORD *)v6 )
        {
          v11 = *(_DWORD *)(v6 + 8);
          if ( !*(_BYTE *)(v11 + 44) )
          {
            *(_BYTE *)(v11 + 44) = 1;
            *(_BYTE *)(v6 + 44) = 0;
            sub_1000E098(v6);
            v11 = *(_DWORD *)(v6 + 8);
          }
          if ( *(_BYTE *)(v11 + 45) )
            goto LABEL_42;
          if ( *(_BYTE *)(*(_DWORD *)v11 + 44) != 1 || *(_BYTE *)(*(_DWORD *)(v11 + 8) + 44) != 1 )
          {
            if ( *(_BYTE *)(*(_DWORD *)(v11 + 8) + 44) == 1 )
            {
              *(_BYTE *)(*(_DWORD *)v11 + 44) = 1;
              *(_BYTE *)(v11 + 44) = 0;
              sub_10004DC2(v11);
              v11 = *(_DWORD *)(v6 + 8);
            }
            *(_BYTE *)(v11 + 44) = *(_BYTE *)(v6 + 44);
            *(_BYTE *)(v6 + 44) = 1;
            *(_BYTE *)(*(_DWORD *)(v11 + 8) + 44) = 1;
            sub_1000E098(v6);
            break;
          }
        }
        else
        {
          if ( !*(_BYTE *)(v11 + 44) )
          {
            *(_BYTE *)(v11 + 44) = 1;
            *(_BYTE *)(v6 + 44) = 0;
            sub_10004DC2(v6);
            v11 = *(_DWORD *)v6;
          }
          if ( *(_BYTE *)(v11 + 45) )
            goto LABEL_42;
          v12 = *(_DWORD *)(v11 + 8);
          if ( *(_BYTE *)(v12 + 44) != 1 || *(_BYTE *)(*(_DWORD *)v11 + 44) != 1 )
          {
            if ( *(_BYTE *)(*(_DWORD *)v11 + 44) == 1 )
            {
              *(_BYTE *)(v12 + 44) = 1;
              *(_BYTE *)(v11 + 44) = 0;
              sub_1000E098(v11);
              v11 = *(_DWORD *)v6;
            }
            *(_BYTE *)(v11 + 44) = *(_BYTE *)(v6 + 44);
            *(_BYTE *)(v6 + 44) = 1;
            *(_BYTE *)(*(_DWORD *)v11 + 44) = 1;
            sub_10004DC2(v6);
            break;
          }
        }
        *(_BYTE *)(v11 + 44) = 0;
LABEL_42:
        v5 = v6;
        v13 = v6 == *(_DWORD *)(this[1] + 4);
        v6 = *(_DWORD *)(v6 + 4);
      }
      while ( !v13 );
    }
    *(_BYTE *)(v5 + 44) = 1;
  }
  std::string::~string(a4 + 12);
  operator delete(a4);
  v14 = this[2];
  if ( v14 )
    this[2] = v14 - 1;
  result = a2;
  *a2 = a3;
  a2[1] = a4;
  return result;
}
