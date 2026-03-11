/*
 * func-name: ?SetBGPic@CItemHolder@@QAEXABV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PAUtagRECT@@@Z
 * func-address: 0x1014fcd0
 * callers: none
 * callees: 0x100a5f30, 0x101a2500, 0x101a2534
 */

void __thiscall CItemHolder::SetBGPic(int this, int a2, struct tagRECT *a3)
{
  _BYTE *v4; // eax
  int v5; // eax
  unsigned int v6; // eax

  if ( *(_DWORD *)(this + 532) )
  {
    operator delete(*(void **)(this + 532));
    *(_DWORD *)(this + 532) = 0;
  }
  v4 = operator new(0xC4u);
  if ( v4 )
  {
    v4[28] = 0;
    *(_DWORD *)v4 = -1;
  }
  else
  {
    v4 = 0;
  }
  *(_DWORD *)(this + 532) = v4;
  if ( *(_DWORD *)(a2 + 24) < 8u )
    v5 = a2 + 4;
  else
    v5 = *(_DWORD *)(a2 + 4);
  v6 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 112) + 20))(*(_DWORD *)(this + 112), v5);
  CREElement::SetTexture(*(CREElement **)(this + 532), v6, a3, 0xFFFFFFFF);
}
