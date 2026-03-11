/*
 * func-name: sub_100E12F0
 * func-address: 0x100e12f0
 * callers: 0x1000e007
 * callees: 0x10003274, 0x1000873d, 0x10009ac0, 0x1000b03c, 0x1000cff4, 0x1000f55b, 0x102c9d50, 0x102c9d86
 */

_DWORD *__thiscall sub_100E12F0(_DWORD *this, _DWORD *a2, int a3, void *a4)
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

  if ( *((_BYTE *)a4 + 21) )
  {
    std::string::string(v16, "invalid map/set<T> iterator");
    pExceptionObject[12] = 0;
    sub_10009AC0(v16);
    pExceptionObject[0] = &std::out_of_range::`vftable';
    CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI3_AVout_of_range_std__);
  }
  sub_10003274();
  if ( *(_BYTE *)(*(_DWORD *)a4 + 21) )
  {
    v5 = *((_DWORD *)a4 + 2);
  }
  else if ( *(_BYTE *)(*((_DWORD *)a4 + 2) + 21) )
  {
    v5 = *(_DWORD *)a4;
  }
  else
  {
    v5 = *((_DWORD *)a4 + 2);
  }
  v6 = *((_DWORD *)a4 + 1);
  if ( !*(_BYTE *)(v5 + 21) )
    *(_DWORD *)(v5 + 4) = v6;
  v7 = this[1];
  if ( *(void **)(v7 + 4) == a4 )
  {
    *(_DWORD *)(v7 + 4) = v5;
  }
  else if ( *(void **)v6 == a4 )
  {
    *(_DWORD *)v6 = v5;
  }
  else
  {
    *(_DWORD *)(v6 + 8) = v5;
  }
  v8 = (int *)this[1];
  if ( (void *)*v8 == a4 )
  {
    if ( *(_BYTE *)(v5 + 21) )
      v9 = v6;
    else
      v9 = sub_1000873D(v5);
    *v8 = v9;
  }
  v10 = this[1];
  if ( *(void **)(v10 + 8) == a4 )
  {
    if ( *(_BYTE *)(v5 + 21) )
      *(_DWORD *)(v10 + 8) = v6;
    else
      *(_DWORD *)(v10 + 8) = sub_1000F55B(v5);
  }
  if ( *((_BYTE *)a4 + 20) == 1 )
  {
    if ( v5 != *(_DWORD *)(this[1] + 4) )
    {
      do
      {
        if ( *(_BYTE *)(v5 + 20) != 1 )
          break;
        v11 = *(_DWORD *)v6;
        if ( v5 == *(_DWORD *)v6 )
        {
          v11 = *(_DWORD *)(v6 + 8);
          if ( !*(_BYTE *)(v11 + 20) )
          {
            *(_BYTE *)(v11 + 20) = 1;
            *(_BYTE *)(v6 + 20) = 0;
            sub_1000CFF4(v6);
            v11 = *(_DWORD *)(v6 + 8);
          }
          if ( *(_BYTE *)(v11 + 21) )
            goto LABEL_42;
          if ( *(_BYTE *)(*(_DWORD *)v11 + 20) != 1 || *(_BYTE *)(*(_DWORD *)(v11 + 8) + 20) != 1 )
          {
            if ( *(_BYTE *)(*(_DWORD *)(v11 + 8) + 20) == 1 )
            {
              *(_BYTE *)(*(_DWORD *)v11 + 20) = 1;
              *(_BYTE *)(v11 + 20) = 0;
              sub_1000B03C(v11);
              v11 = *(_DWORD *)(v6 + 8);
            }
            *(_BYTE *)(v11 + 20) = *(_BYTE *)(v6 + 20);
            *(_BYTE *)(v6 + 20) = 1;
            *(_BYTE *)(*(_DWORD *)(v11 + 8) + 20) = 1;
            sub_1000CFF4(v6);
            break;
          }
        }
        else
        {
          if ( !*(_BYTE *)(v11 + 20) )
          {
            *(_BYTE *)(v11 + 20) = 1;
            *(_BYTE *)(v6 + 20) = 0;
            sub_1000B03C(v6);
            v11 = *(_DWORD *)v6;
          }
          if ( *(_BYTE *)(v11 + 21) )
            goto LABEL_42;
          v12 = *(_DWORD *)(v11 + 8);
          if ( *(_BYTE *)(v12 + 20) != 1 || *(_BYTE *)(*(_DWORD *)v11 + 20) != 1 )
          {
            if ( *(_BYTE *)(*(_DWORD *)v11 + 20) == 1 )
            {
              *(_BYTE *)(v12 + 20) = 1;
              *(_BYTE *)(v11 + 20) = 0;
              sub_1000CFF4(v11);
              v11 = *(_DWORD *)v6;
            }
            *(_BYTE *)(v11 + 20) = *(_BYTE *)(v6 + 20);
            *(_BYTE *)(v6 + 20) = 1;
            *(_BYTE *)(*(_DWORD *)v11 + 20) = 1;
            sub_1000B03C(v6);
            break;
          }
        }
        *(_BYTE *)(v11 + 20) = 0;
LABEL_42:
        v5 = v6;
        v13 = v6 == *(_DWORD *)(this[1] + 4);
        v6 = *(_DWORD *)(v6 + 4);
      }
      while ( !v13 );
    }
    *(_BYTE *)(v5 + 20) = 1;
  }
  operator delete(a4);
  v14 = this[2];
  if ( v14 )
    this[2] = v14 - 1;
  result = a2;
  *a2 = a3;
  a2[1] = a4;
  return result;
}
