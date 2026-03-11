/*
 * func-name: ?SetItemHoverPic@CItemHolder@@QAE_NHV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PAUtagRECT@@ABU4@@Z
 * func-address: 0x10152de0
 * callers: 0x10153020
 * callees: 0x100a5f30, 0x101a2500, 0x101a2534
 */

char __thiscall CItemHolder::SetItemHoverPic(
        int this,
        int a2,
        char a3,
        int *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        unsigned int a9,
        struct tagRECT *a10,
        _DWORD *a11)
{
  CREElement *v14; // eax
  CREElement *v15; // edi
  int *v16; // eax
  unsigned int v17; // eax
  int v18; // ecx
  int v19; // ecx
  _DWORD *v20; // eax
  _DWORD *v21; // edi
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  int v25; // eax
  int v26; // esi
  int v27; // ecx
  int v28; // edi
  const struct tagRECT *v29; // [esp-8h] [ebp-24h]
  CREElement *v30; // [esp+20h] [ebp+4h]

  if ( a2 < *(_DWORD *)(this + 568) )
  {
    v14 = (CREElement *)operator new(0xC4u);
    if ( v14 )
    {
      v15 = v14;
      *((_BYTE *)v14 + 28) = 0;
      *(_DWORD *)v14 = -1;
      v30 = v14;
    }
    else
    {
      v30 = 0;
      v15 = 0;
    }
    v16 = a4;
    if ( a9 < 8 )
      v16 = (int *)&a4;
    v29 = a10;
    v17 = (*(int (__thiscall **)(_DWORD, int *))(**(_DWORD **)(this + 112) + 20))(*(_DWORD *)(this + 112), v16);
    CREElement::SetTexture(v15, v17, v29, 0xFFFFFFFF);
    v18 = *(_DWORD *)(this + 556);
    if ( !v18 || a2 >= (unsigned int)((*(_DWORD *)(this + 560) - v18) >> 2) )
      invalid_parameter_noinfo();
    v19 = *(_DWORD *)(this + 556);
    if ( *(_DWORD *)(v19 + 4 * a2) )
    {
      if ( !v19 || a2 >= (unsigned int)((*(_DWORD *)(this + 560) - v19) >> 2) )
        invalid_parameter_noinfo();
      qmemcpy(**(void ***)(*(_DWORD *)(this + 556) + 4 * a2), v15, 0xC4u);
      operator delete(v30);
    }
    else
    {
      v20 = operator new(0x14u);
      if ( v20 )
      {
        *v20 = 0;
        v20[1] = 0;
        v20[2] = 0;
        v20[3] = 0;
        v20[4] = 0;
        v21 = v20;
      }
      else
      {
        v21 = 0;
      }
      v22 = *(_DWORD *)(this + 556);
      if ( !v22 || a2 >= (unsigned int)((*(_DWORD *)(this + 560) - v22) >> 2) )
        invalid_parameter_noinfo();
      *(_DWORD *)(*(_DWORD *)(this + 556) + 4 * a2) = v21;
      v23 = *(_DWORD *)(this + 556);
      if ( !v23 || a2 >= (unsigned int)((*(_DWORD *)(this + 560) - v23) >> 2) )
        invalid_parameter_noinfo();
      **(_DWORD **)(*(_DWORD *)(this + 556) + 4 * a2) = v30;
    }
    v24 = *(_DWORD *)(this + 596);
    v25 = a2 / v24;
    v26 = *(_DWORD *)(this + 580) + a2 % v24 * *(_DWORD *)(this + 588);
    if ( a2 )
      v26 += a2 % v24 * *(_DWORD *)(this + 572);
    v27 = *(_DWORD *)(this + 556);
    v28 = *(_DWORD *)(this + 584) + v25 * (*(_DWORD *)(this + 576) + *(_DWORD *)(this + 592));
    if ( !v27 || a2 >= (unsigned int)((*(_DWORD *)(this + 560) - v27) >> 2) )
      invalid_parameter_noinfo();
    SetRect(
      (LPRECT)(*(_DWORD *)(*(_DWORD *)(this + 556) + 4 * a2) + 4),
      v26 + *a11,
      v28 + a11[1],
      v26 + a11[2],
      v28 + a11[3]);
    std::wstring::~wstring(&a3);
    return 1;
  }
  else
  {
    std::wstring::~wstring(&a3);
    return 0;
  }
}
