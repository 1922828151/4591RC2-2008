/*
 * func-name: sub_10293760
 * func-address: 0x10293760
 * callers: 0x10007266
 * callees: 0x10009791, 0x102c9fe0
 */

void __thiscall sub_10293760(int this, int a2, _DWORD *a3, int *a4, LONG a5, int a6, float a7)
{
  _DWORD *v7; // ebx
  int v11; // eax
  int v12; // ebx
  const wchar_t *v13; // eax
  int v14; // ecx
  unsigned int v15; // edx
  int v16; // ecx
  int v17; // eax
  int v18; // ecx
  int v19; // edi
  LONG v20; // eax
  int v21; // ebp
  struct tagRECT rc; // [esp+98h] [ebp-10h] BYREF
  int i; // [esp+ACh] [ebp+4h]
  int v24; // [esp+B0h] [ebp+8h]
  LONG v25; // [esp+B4h] [ebp+Ch]

  v7 = a3;
  if ( *a3 < *(_DWORD *)(a2 + 36) + 27 )
  {
    CREElement::SetTexture((CREElement *)(*(_DWORD *)(this + 580) + 788), *(_DWORD *)(this + 604));
    (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(this + 580) + 156))(
      *(_DWORD *)(this + 580),
      *(_DWORD *)(this + 164),
      *(_DWORD *)(a2 + 36) + *a4 - *a3);
    (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 580) + 160))(
      *(_DWORD *)(this + 580),
      *(_DWORD *)(this + 172) - *(_DWORD *)(this + 164),
      27);
    SetRect(&rc, *(_DWORD *)(this + 164), *a4, *(_DWORD *)(this + 172), *a4 - *a3 + *(_DWORD *)(a2 + 36) + 27);
    if ( rc.bottom > a5 )
      rc.bottom = a5;
    (*(void (__stdcall **)(int, _DWORD, struct tagRECT *))(**(_DWORD **)(this + 580) + 168))(a6, LODWORD(a7), &rc);
    v11 = *(_DWORD *)(a2 + 40);
    if ( *a3 < v11 + *(_DWORD *)(this + 612) )
    {
      v12 = v11 + *a4 - *a3;
      (*(void (__thiscall **)(_DWORD, _DWORD, int, _DWORD))(**(_DWORD **)(this + 576) + 180))(
        *(_DWORD *)(this + 576),
        0,
        -1,
        0);
      v13 = (const wchar_t *)std::wstring::c_str(a2);
      CREStatic::SetText(*(CREStatic **)(this + 576), v13);
      (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 576) + 156))(
        *(_DWORD *)(this + 576),
        *(_DWORD *)(this + 164) + 3,
        v12);
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 576) + 188))(*(_DWORD *)(this + 576), 4);
      (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(this + 576) + 160))(
        *(_DWORD *)(this + 576),
        *(_DWORD *)(this + 172) - *(_DWORD *)(this + 164),
        *(_DWORD *)(this + 612));
      if ( v12 >= *a4 )
      {
        if ( v12 + *(_DWORD *)(this + 612) > a5 )
        {
          (*(void (__stdcall **)(_DWORD, int))(**(_DWORD **)(this + 576) + 160))(
            *(_DWORD *)(*(_DWORD *)(this + 576) + 104),
            a5 - v12);
          (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 576) + 188))(*(_DWORD *)(this + 576), 0);
        }
      }
      else
      {
        (*(void (__stdcall **)(_DWORD, int))(**(_DWORD **)(this + 576) + 156))(
          *(_DWORD *)(*(_DWORD *)(this + 576) + 96),
          *a4);
        (*(void (__stdcall **)(_DWORD, int))(**(_DWORD **)(this + 576) + 160))(
          *(_DWORD *)(*(_DWORD *)(this + 576) + 104),
          v12 + *(_DWORD *)(*(_DWORD *)(this + 576) + 108) - *a4);
        (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 576) + 188))(*(_DWORD *)(this + 576), 8);
      }
      (*(void (__stdcall **)(int, _DWORD))(**(_DWORD **)(this + 576) + 20))(a6, LODWORD(a7));
      v7 = a3;
    }
    *a4 += *(_DWORD *)(a2 + 36) - *v7 + 27;
    *v7 = *(_DWORD *)(a2 + 36) + 27;
  }
  if ( *(_BYTE *)(a2 + 28) )
  {
    v14 = *a4;
    v25 = *a4;
    if ( *v7 < *(_DWORD *)(a2 + 36) + 29 )
    {
      *a4 = v14 - *v7 + *(_DWORD *)(a2 + 36) + 29;
      *v7 = *(_DWORD *)(a2 + 36) + 29;
    }
    v15 = 0;
    v24 = 0;
    for ( i = 0; ; i += 128 )
    {
      v16 = *(_DWORD *)(a2 + 48);
      if ( !v16 || v15 >= (*(_DWORD *)(a2 + 52) - v16) >> 7 || *a4 >= a5 )
        break;
      if ( v15 >= (*(_DWORD *)(a2 + 52) - v16) >> 7 )
        _invalid_parameter_noinfo();
      sub_10009791(i + *(_DWORD *)(a2 + 48), (int)v7, (int)a4, a5, a6, a7);
      v17 = *(_DWORD *)(a2 + 48);
      if ( v17 )
        v18 = (*(_DWORD *)(a2 + 52) - v17) >> 7;
      else
        v18 = 0;
      if ( v24 != v18 - 1 )
      {
        *a4 += 2;
        *v7 += 2;
      }
      v15 = ++v24;
    }
    CSeperateLine::SetBackGroundColor(*(CSeperateLine **)(this + 572), 0x5577C5D1u);
    *(_BYTE *)(*(_DWORD *)(this + 572) + 536) = 1;
    if ( v25 < a5 )
    {
      v19 = (int)((double)*a4 + 2.5 + 0.5);
      v20 = a5;
      if ( v19 >= a5 )
      {
        v21 = a6;
      }
      else
      {
        (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 572) + 160))(
          *(_DWORD *)(this + 572),
          *(_DWORD *)(this + 172) - *(_DWORD *)(this + 164),
          1);
        (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(this + 572) + 156))(
          *(_DWORD *)(this + 572),
          *(_DWORD *)(this + 164),
          v19);
        v21 = a6;
        (*(void (__stdcall **)(int, _DWORD))(**(_DWORD **)(this + 572) + 20))(a6, LODWORD(a7));
        v20 = a5;
      }
      if ( v19 > v20 )
        v19 = v20;
      (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 572) + 160))(
        *(_DWORD *)(this + 572),
        1,
        v19 - v25);
      (*(void (__thiscall **)(_DWORD, _DWORD, LONG))(**(_DWORD **)(this + 572) + 156))(
        *(_DWORD *)(this + 572),
        *(_DWORD *)(this + 164),
        v25);
      (*(void (__stdcall **)(int, _DWORD))(**(_DWORD **)(this + 572) + 20))(v21, LODWORD(a7));
      (*(void (__thiscall **)(_DWORD, _DWORD, LONG))(**(_DWORD **)(this + 572) + 156))(
        *(_DWORD *)(this + 572),
        *(_DWORD *)(this + 172),
        v25);
      (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(this + 572) + 20))(
        *(_DWORD *)(this + 572),
        v21,
        LODWORD(a7));
    }
  }
}
