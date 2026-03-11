/*
 * func-name: ?SetItem@CItemHolder@@QAE_NHHPAUItemInfo@1@@Z
 * func-address: 0x10152c10
 * callers: none
 * callees: 0x10019470, 0x1014fa80, 0x1014fc20, 0x101a2500, 0x101a2534
 */

char __thiscall CItemHolder::SetItem(CItemHolder *this, int a2, int a3, const void **a4)
{
  signed int v5; // ebp
  int v7; // ecx
  int v8; // ebx
  int v9; // eax
  void *v10; // eax
  int v11; // ecx
  int v12; // esi
  int v13; // ebp
  _BYTE *v14; // eax
  void *v15; // edi

  v5 = a2 + a3 * *((_DWORD *)this + 149);
  if ( v5 > *((_DWORD *)this + 142) )
    return 0;
  v7 = *((_DWORD *)this + 135);
  v8 = 0;
  if ( !v7 || v5 >= (unsigned int)((*((_DWORD *)this + 136) - v7) >> 2) )
    invalid_parameter_noinfo();
  v9 = *((_DWORD *)this + 135);
  if ( *(_DWORD *)(v9 + 4 * v5) )
  {
    if ( !v9 || v5 >= (unsigned int)((*((_DWORD *)this + 136) - v9) >> 2) )
      invalid_parameter_noinfo();
    v13 = *(_DWORD *)(*((_DWORD *)this + 135) + 4 * v5);
    if ( *(_DWORD *)(v13 + 4) )
    {
      operator delete(*(void **)(v13 + 4));
      *(_DWORD *)(v13 + 4) = 0;
    }
    std::wstring::clear(v13 + 28);
    *(_DWORD *)(v13 + 24) = 0;
    if ( a4 )
    {
      v14 = operator new(0xC4u);
      if ( v14 )
      {
        v14[28] = 0;
        *(_DWORD *)v14 = -1;
        v15 = v14;
      }
      else
      {
        v15 = 0;
      }
      *(_DWORD *)(v13 + 4) = v15;
      qmemcpy(v15, a4[1], 0xC4u);
      std::wstring::operator=(v13 + 28, a4 + 7);
      *(_DWORD *)(v13 + 24) = a4[6];
      *(_DWORD *)(v13 + 72) = a4[18];
    }
  }
  else if ( a4 )
  {
    v10 = operator new(0x6Cu);
    if ( v10 )
      v8 = sub_1014FA80((int)v10);
    sub_1014FC20(v8, a4);
    v11 = *((_DWORD *)this + 149);
    v12 = *((_DWORD *)this + 145) + v5 % v11 * *((_DWORD *)this + 147);
    if ( v5 )
      v12 += v5 % v11 * *((_DWORD *)this + 143);
    SetRect(
      (LPRECT)(v8 + 8),
      v12,
      *((_DWORD *)this + 146) + v5 / v11 * (*((_DWORD *)this + 148) + *((_DWORD *)this + 144)),
      v12 + *((_DWORD *)this + 147),
      *((_DWORD *)this + 146) + v5 / v11 * (*((_DWORD *)this + 148) + *((_DWORD *)this + 144)) + *((_DWORD *)this + 148));
    *(_DWORD *)std::vector<Model *>::operator[]((_DWORD *)this + 134, v5) = v8;
    *(_DWORD *)v8 = v5;
  }
  return 1;
}
