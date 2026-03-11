/*
 * func-name: ?SetBGPic@CTYMenu@@QAEXABV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PAUtagRECT@@@Z
 * func-address: 0x10150c40
 * callers: none
 * callees: 0x100a5f30, 0x101a2500, 0x101a2534
 */

void __thiscall CTYMenu::SetBGPic(void **this, int a2, struct tagRECT *a3)
{
  _BYTE *v4; // eax
  int v5; // eax
  unsigned int v6; // eax

  if ( this[973] )
  {
    operator delete(this[973]);
    this[973] = 0;
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
  this[973] = v4;
  if ( *(_DWORD *)(a2 + 24) < 8u )
    v5 = a2 + 4;
  else
    v5 = *(_DWORD *)(a2 + 4);
  v6 = (*((int (__thiscall **)(void **, int))*this + 5))(this, v5);
  CREElement::SetTexture((CREElement *)this[973], v6, a3, 0xFFFFFFFF);
}
