/*
 * func-name: ?AddItem@CItemHolder@@QAEHABV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@K0@Z
 * func-address: 0x101526a0
 * callers: none
 * callees: 0x100a5f30, 0x1014fa80, 0x101a2534
 */

int __thiscall CItemHolder::AddItem(int this, int a2, int a3, int a4)
{
  void *v5; // eax
  signed int v6; // ebp
  int v7; // edi
  _BYTE *v8; // eax
  int v9; // eax
  unsigned int v10; // eax
  int v11; // ecx
  int v12; // ecx
  int v13; // edi
  int v14; // eax
  int v15; // eax
  int v17; // [esp+10h] [ebp-10h]

  v5 = operator new(0x6Cu);
  v6 = 0;
  if ( v5 )
  {
    v7 = sub_1014FA80((int)v5);
    v17 = v7;
  }
  else
  {
    v7 = 0;
    v17 = 0;
  }
  v8 = operator new(0xC4u);
  if ( v8 )
  {
    v8[28] = 0;
    *(_DWORD *)v8 = -1;
  }
  else
  {
    v8 = 0;
  }
  *(_DWORD *)(v7 + 4) = v8;
  if ( *(_DWORD *)(a2 + 24) < 8u )
    v9 = a2 + 4;
  else
    v9 = *(_DWORD *)(a2 + 4);
  v10 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 112) + 20))(*(_DWORD *)(this + 112), v9);
  CREElement::SetTexture(*(CREElement **)(v7 + 4), v10, 0, 0xFFFFFFFF);
  *(_DWORD *)(v7 + 24) = a3;
  std::wstring::operator=(v7 + 28, a2);
  std::wstring::operator=(v7 + 76, a4);
  while ( 1 )
  {
    v11 = *(_DWORD *)(this + 540);
    if ( !v11 || v6 >= (unsigned int)((*(_DWORD *)(this + 544) - v11) >> 2) )
      return -1;
    v12 = *(_DWORD *)(this + 596);
    v13 = *(_DWORD *)(this + 580) + v6 % v12 * *(_DWORD *)(this + 588);
    if ( v6 )
      v13 += v6 % v12 * *(_DWORD *)(this + 572);
    SetRect(
      (LPRECT)(v17 + 8),
      v13,
      *(_DWORD *)(this + 584) + v6 / v12 * (*(_DWORD *)(this + 592) + *(_DWORD *)(this + 576)),
      v13 + *(_DWORD *)(this + 588),
      *(_DWORD *)(this + 584) + v6 / v12 * (*(_DWORD *)(this + 592) + *(_DWORD *)(this + 576)) + *(_DWORD *)(this + 592));
    *(_DWORD *)v17 = v6;
    v14 = *(_DWORD *)(this + 540);
    if ( !v14 || v6 >= (unsigned int)((*(_DWORD *)(this + 544) - v14) >> 2) )
      invalid_parameter_noinfo();
    v15 = *(_DWORD *)(this + 540);
    if ( !*(_DWORD *)(v15 + 4 * v6) )
      break;
    ++v6;
  }
  if ( !v15 || v6 >= (unsigned int)((*(_DWORD *)(this + 544) - v15) >> 2) )
    invalid_parameter_noinfo();
  *(_DWORD *)(*(_DWORD *)(this + 540) + 4 * v6) = v17;
  return v6;
}
