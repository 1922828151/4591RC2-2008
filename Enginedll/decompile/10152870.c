/*
 * func-name: ?InsertItem@CItemHolder@@QAE_NHHABV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@KPAUtagRECT@@K0@Z
 * func-address: 0x10152870
 * callers: none
 * callees: 0x100a5f30, 0x1014fa80, 0x101a2500, 0x101a2534
 */

char __thiscall CItemHolder::InsertItem(int this, int a2, int a3, int a4, int a5, _DWORD *a6, int a7, int a8)
{
  signed int v9; // ebx
  int v11; // ecx
  int v12; // eax
  void *v13; // eax
  int v14; // ebp
  _BYTE *v15; // eax
  int v16; // eax
  unsigned int v17; // eax
  _DWORD *v18; // eax
  int v19; // ecx
  int v20; // edi
  int v21; // eax
  int v22; // ebx
  _BYTE *v23; // eax
  int v24; // eax
  unsigned int v25; // eax
  _DWORD *v26; // eax

  v9 = a2 + a3 * *(_DWORD *)(this + 596);
  if ( v9 > *(_DWORD *)(this + 568) )
    return 0;
  v11 = *(_DWORD *)(this + 540);
  if ( !v11 || v9 >= (unsigned int)((*(_DWORD *)(this + 544) - v11) >> 2) )
    invalid_parameter_noinfo();
  v12 = *(_DWORD *)(this + 540);
  if ( *(_DWORD *)(v12 + 4 * v9) )
  {
    if ( !v12 || v9 >= (unsigned int)((*(_DWORD *)(this + 544) - v12) >> 2) )
      invalid_parameter_noinfo();
    v22 = *(_DWORD *)(*(_DWORD *)(this + 540) + 4 * v9);
    if ( (unsigned __int8)std::operator!=<wchar_t>(v22 + 28, a4) )
    {
      if ( *(_DWORD *)(v22 + 4) )
      {
        operator delete(*(void **)(v22 + 4));
        *(_DWORD *)(v22 + 4) = 0;
      }
      v23 = operator new(0xC4u);
      if ( v23 )
      {
        v23[28] = 0;
        *(_DWORD *)v23 = -1;
      }
      else
      {
        v23 = 0;
      }
      *(_DWORD *)(v22 + 4) = v23;
      if ( *(_DWORD *)(a4 + 24) < 8u )
        v24 = a4 + 4;
      else
        v24 = *(_DWORD *)(a4 + 4);
      v25 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 112) + 20))(*(_DWORD *)(this + 112), v24);
      CREElement::SetTexture(*(CREElement **)(v22 + 4), v25, 0, 0xFFFFFFFF);
      std::wstring::operator=(v22 + 28, a4);
    }
    if ( a6 )
    {
      v26 = (_DWORD *)(*(_DWORD *)(v22 + 4) + 12);
      *v26 = *a6;
      v26[1] = a6[1];
      v26[2] = a6[2];
      v26[3] = a6[3];
    }
    *(_DWORD *)(v22 + 24) = a5;
    *(_DWORD *)(v22 + 72) = a7;
    std::wstring::operator=(v22 + 76, a8);
  }
  else
  {
    v13 = operator new(0x6Cu);
    if ( v13 )
      v14 = sub_1014FA80((int)v13);
    else
      v14 = 0;
    v15 = operator new(0xC4u);
    if ( v15 )
    {
      v15[28] = 0;
      *(_DWORD *)v15 = -1;
    }
    else
    {
      v15 = 0;
    }
    *(_DWORD *)(v14 + 4) = v15;
    if ( *(_DWORD *)(a4 + 24) < 8u )
      v16 = a4 + 4;
    else
      v16 = *(_DWORD *)(a4 + 4);
    v17 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 112) + 20))(*(_DWORD *)(this + 112), v16);
    CREElement::SetTexture(*(CREElement **)(v14 + 4), v17, 0, 0xFFFFFFFF);
    *(_DWORD *)(v14 + 24) = a5;
    std::wstring::operator=(v14 + 28, a4);
    *(_DWORD *)(v14 + 72) = a7;
    std::wstring::operator=(v14 + 76, a8);
    if ( a6 )
    {
      v18 = (_DWORD *)(*(_DWORD *)(v14 + 4) + 12);
      *v18 = *a6;
      v18[1] = a6[1];
      v18[2] = a6[2];
      v18[3] = a6[3];
    }
    v19 = *(_DWORD *)(this + 596);
    v20 = *(_DWORD *)(this + 580) + v9 % v19 * *(_DWORD *)(this + 588);
    if ( v9 )
      v20 += v9 % v19 * *(_DWORD *)(this + 572);
    SetRect(
      (LPRECT)(v14 + 8),
      v20,
      *(_DWORD *)(this + 584) + v9 / v19 * (*(_DWORD *)(this + 592) + *(_DWORD *)(this + 576)),
      v20 + *(_DWORD *)(this + 588),
      *(_DWORD *)(this + 584) + v9 / v19 * (*(_DWORD *)(this + 592) + *(_DWORD *)(this + 576)) + *(_DWORD *)(this + 592));
    v21 = *(_DWORD *)(this + 540);
    if ( !v21 || v9 >= (unsigned int)((*(_DWORD *)(this + 544) - v21) >> 2) )
      invalid_parameter_noinfo();
    *(_DWORD *)(*(_DWORD *)(this + 540) + 4 * v9) = v14;
    *(_DWORD *)v14 = v9;
  }
  return 1;
}
