/*
 * func-name: ?SetItemOnHand@CItemHolder@@QAE_NABV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@K0@Z
 * func-address: 0x1014fe10
 * callers: 0x1014ff20
 * callees: 0x100a5f30, 0x1014fa80, 0x1014fae0, 0x101a2500, 0x101a2534
 */

char __thiscall CItemHolder::SetItemOnHand(int this, int a2, int a3, int a4)
{
  void *v5; // edi
  void *v6; // eax
  int v7; // eax
  _BYTE *v8; // eax
  int v9; // eax
  unsigned int v10; // eax

  v5 = *(void **)(this + 624);
  if ( v5 )
  {
    sub_1014FAE0(*(_DWORD **)(this + 624));
    operator delete(v5);
    *(_DWORD *)(this + 624) = 0;
  }
  v6 = operator new(0x6Cu);
  if ( v6 )
    v7 = sub_1014FA80((int)v6);
  else
    v7 = 0;
  *(_DWORD *)(this + 624) = v7;
  *(_DWORD *)(v7 + 24) = a3;
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
  *(_DWORD *)(*(_DWORD *)(this + 624) + 4) = v8;
  if ( *(_DWORD *)(a2 + 24) < 8u )
    v9 = a2 + 4;
  else
    v9 = *(_DWORD *)(a2 + 4);
  v10 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 112) + 20))(*(_DWORD *)(this + 112), v9);
  CREElement::SetTexture(*(CREElement **)(*(_DWORD *)(this + 624) + 4), v10, 0, 0xFFFFFFFF);
  std::wstring::operator=(*(_DWORD *)(this + 624) + 28, a2);
  std::wstring::operator=(*(_DWORD *)(this + 624) + 76, a4);
  CREDialog::s_pControlLast = (struct CREControl *)this;
  return 1;
}
