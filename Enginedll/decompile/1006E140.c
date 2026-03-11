/*
 * func-name: sub_1006E140
 * func-address: 0x1006e140
 * callers: 0x1006f820
 * callees: 0x1006bcf0, 0x1006bd10, 0x1006bd30, 0x1006c380, 0x1006c8f0, 0x101a2500, 0x101a2522
 */

_DWORD *__thiscall sub_1006E140(_DWORD *this, _DWORD *a2, int a3, int a4)
{
  int *v5; // ebx
  int v6; // edi
  int v7; // ecx
  int v8; // esi
  int v9; // eax
  _DWORD *v10; // ebx
  _DWORD *v11; // eax
  int v12; // ebx
  int v13; // eax
  int *v14; // eax
  char v15; // al
  _BYTE *v16; // eax
  int v17; // edx
  bool v18; // zf
  int v19; // eax
  _DWORD *result; // eax
  int v21; // edx
  _BYTE *v22; // [esp+4h] [ebp-58h]
  _BYTE v23[28]; // [esp+Ch] [ebp-50h] BYREF
  _DWORD pExceptionObject[3]; // [esp+28h] [ebp-34h] BYREF
  char v25[28]; // [esp+34h] [ebp-28h] BYREF
  int v26; // [esp+58h] [ebp-4h]

  if ( *(_BYTE *)(a4 + 81) )
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
  v5 = (int *)a4;
  v22 = (_BYTE *)a4;
  sub_1006C380(&a3);
  if ( *(_BYTE *)(*v5 + 81) )
  {
    v6 = v5[2];
LABEL_8:
    v8 = v5[1];
    if ( !*(_BYTE *)(v6 + 81) )
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
    v10 = (_DWORD *)this[1];
    if ( (_BYTE *)*v10 == v22 )
    {
      if ( *(_BYTE *)(v6 + 81) )
        v11 = (_DWORD *)v8;
      else
        v11 = sub_1006BD10((_DWORD *)v6);
      *v10 = v11;
    }
    v12 = this[1];
    if ( *(_BYTE **)(v12 + 8) == v22 )
    {
      if ( *(_BYTE *)(v6 + 81) )
        *(_DWORD *)(v12 + 8) = v8;
      else
        *(_DWORD *)(v12 + 8) = sub_1006BCF0(v6);
    }
    goto LABEL_35;
  }
  if ( *(_BYTE *)(v5[2] + 81) )
  {
    v6 = *v5;
    goto LABEL_8;
  }
  v7 = a4;
  v6 = *(_DWORD *)(a4 + 8);
  if ( (int *)a4 == v5 )
    goto LABEL_8;
  *(_DWORD *)(*v5 + 4) = a4;
  *(_DWORD *)v7 = *v5;
  if ( v7 == v5[2] )
  {
    v8 = v7;
  }
  else
  {
    v8 = *(_DWORD *)(v7 + 4);
    if ( !*(_BYTE *)(v6 + 81) )
      *(_DWORD *)(v6 + 4) = v8;
    *(_DWORD *)v8 = v6;
    *(_DWORD *)(v7 + 8) = v5[2];
    *(_DWORD *)(v5[2] + 4) = v7;
  }
  v13 = this[1];
  if ( *(int **)(v13 + 4) == v5 )
  {
    *(_DWORD *)(v13 + 4) = v7;
  }
  else
  {
    v14 = (int *)v5[1];
    if ( (int *)*v14 == v5 )
      *v14 = v7;
    else
      v14[2] = v7;
  }
  *(_DWORD *)(v7 + 4) = v5[1];
  v15 = *(_BYTE *)(v7 + 80);
  *(_BYTE *)(v7 + 80) = *((_BYTE *)v5 + 80);
  *((_BYTE *)v5 + 80) = v15;
LABEL_35:
  if ( v22[80] == 1 )
  {
    if ( v6 != *(_DWORD *)(this[1] + 4) )
    {
      do
      {
        if ( *(_BYTE *)(v6 + 80) != 1 )
          break;
        v16 = *(_BYTE **)v8;
        if ( v6 == *(_DWORD *)v8 )
        {
          v16 = *(_BYTE **)(v8 + 8);
          if ( !v16[80] )
          {
            v16[80] = 1;
            *(_BYTE *)(v8 + 80) = 0;
            sub_1006C8F0(this, v8);
            v16 = *(_BYTE **)(v8 + 8);
          }
          if ( v16[81] )
            goto LABEL_53;
          if ( *(_BYTE *)(*(_DWORD *)v16 + 80) != 1 || *(_BYTE *)(*((_DWORD *)v16 + 2) + 80) != 1 )
          {
            if ( *(_BYTE *)(*((_DWORD *)v16 + 2) + 80) == 1 )
            {
              *(_BYTE *)(*(_DWORD *)v16 + 80) = 1;
              v16[80] = 0;
              sub_1006BD30(this, v16);
              v16 = *(_BYTE **)(v8 + 8);
            }
            v16[80] = *(_BYTE *)(v8 + 80);
            *(_BYTE *)(v8 + 80) = 1;
            *(_BYTE *)(*((_DWORD *)v16 + 2) + 80) = 1;
            sub_1006C8F0(this, v8);
            break;
          }
        }
        else
        {
          if ( !v16[80] )
          {
            v16[80] = 1;
            *(_BYTE *)(v8 + 80) = 0;
            sub_1006BD30(this, (_DWORD *)v8);
            v16 = *(_BYTE **)v8;
          }
          if ( v16[81] )
            goto LABEL_53;
          v17 = *((_DWORD *)v16 + 2);
          if ( *(_BYTE *)(v17 + 80) != 1 || *(_BYTE *)(*(_DWORD *)v16 + 80) != 1 )
          {
            if ( *(_BYTE *)(*(_DWORD *)v16 + 80) == 1 )
            {
              *(_BYTE *)(v17 + 80) = 1;
              v16[80] = 0;
              sub_1006C8F0(this, (int)v16);
              v16 = *(_BYTE **)v8;
            }
            v16[80] = *(_BYTE *)(v8 + 80);
            *(_BYTE *)(v8 + 80) = 1;
            *(_BYTE *)(*(_DWORD *)v16 + 80) = 1;
            sub_1006BD30(this, (_DWORD *)v8);
            break;
          }
        }
        v16[80] = 0;
LABEL_53:
        v6 = v8;
        v18 = v8 == *(_DWORD *)(this[1] + 4);
        v8 = *(_DWORD *)(v8 + 4);
      }
      while ( !v18 );
    }
    *(_BYTE *)(v6 + 80) = 1;
  }
  std::string::~string(v22 + 52);
  v26 = -1;
  std::string::~string(v22 + 12);
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
