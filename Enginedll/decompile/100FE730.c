/*
 * func-name: sub_100FE730
 * func-address: 0x100fe730
 * callers: 0x100feca0
 * callees: 0x100fe270, 0x100fe2c0, 0x100fe570, 0x101a2522
 */

_DWORD *__thiscall sub_100FE730(_DWORD *this, _DWORD *a2, char a3, _DWORD *a4, _DWORD *a5)
{
  _DWORD *v6; // ebp
  _DWORD *v7; // eax
  _DWORD *v8; // eax
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
  _DWORD *result; // eax
  _BYTE v21[28]; // [esp+4h] [ebp-50h] BYREF
  _DWORD pExceptionObject[3]; // [esp+20h] [ebp-34h] BYREF
  _BYTE v23[28]; // [esp+2Ch] [ebp-28h] BYREF
  int v24; // [esp+50h] [ebp-4h]

  if ( this[2] >= 0x3FFFFFFEu )
  {
    std::string::string(v21, "map/set<T> too long");
    v24 = 0;
    std::exception::exception((std::exception *)pExceptionObject);
    LOBYTE(v24) = 1;
    pExceptionObject[0] = &std::logic_error::`vftable';
    std::string::string(v23, v21);
    LOBYTE(v24) = 0;
    pExceptionObject[0] = &std::length_error::`vftable';
    CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI3_AVlength_error_std__);
  }
  v6 = sub_100FE570(this[1], (int)a4, this[1], a5, 0);
  v7 = (_DWORD *)this[1];
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
    v8 = (_DWORD *)this[1];
    if ( a4 == (_DWORD *)*v8 )
      *v8 = v6;
  }
  else
  {
    a4[2] = v6;
    v9 = this[1];
    if ( a4 == *(_DWORD **)(v9 + 8) )
      *(_DWORD *)(v9 + 8) = v6;
  }
  v10 = v6 + 1;
  for ( i = (int)v6; !*(_BYTE *)(*(_DWORD *)(i + 4) + 16); v10 = (int *)(i + 4) )
  {
    v12 = *v10;
    v13 = *(int **)(*v10 + 4);
    if ( *v10 == *v13 )
    {
      v14 = v13[2];
      if ( *(_BYTE *)(v14 + 16) )
      {
        if ( i == *(_DWORD *)(v12 + 8) )
        {
          i = *v10;
          sub_100FE270(this, *v10);
        }
        *(_BYTE *)(*(_DWORD *)(i + 4) + 16) = 1;
        *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(i + 4) + 4) + 16) = 0;
        sub_100FE2C0(this, *(_DWORD **)(*(_DWORD *)(i + 4) + 4));
      }
      else
      {
        *(_BYTE *)(v12 + 16) = 1;
        *(_BYTE *)(v14 + 16) = 1;
        *(_BYTE *)(*(_DWORD *)(*v10 + 4) + 16) = 0;
        i = *(_DWORD *)(*v10 + 4);
      }
    }
    else
    {
      v15 = *v13;
      if ( *(_BYTE *)(v15 + 16) )
      {
        if ( i == *(_DWORD *)v12 )
        {
          i = *v10;
          sub_100FE2C0(this, (_DWORD *)*v10);
        }
        *(_BYTE *)(*(_DWORD *)(i + 4) + 16) = 1;
        *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(i + 4) + 4) + 16) = 0;
        v16 = *(_DWORD *)(*(_DWORD *)(i + 4) + 4);
        v17 = *(_DWORD **)(v16 + 8);
        *(_DWORD *)(v16 + 8) = *v17;
        if ( !*(_BYTE *)(*v17 + 17) )
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
        *(_BYTE *)(v12 + 16) = 1;
        *(_BYTE *)(v15 + 16) = 1;
        *(_BYTE *)(*(_DWORD *)(*v10 + 4) + 16) = 0;
        i = *(_DWORD *)(*v10 + 4);
      }
    }
  }
  *(_BYTE *)(*(_DWORD *)(this[1] + 4) + 16) = 1;
  result = a2;
  a2[1] = v6;
  *a2 = this;
  return result;
}
