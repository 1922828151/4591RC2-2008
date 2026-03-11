/*
 * func-name: ?SetProgressPic@CProgressBar@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAUtagRECT@@@Z
 * func-address: 0x101502f0
 * callers: 0x1014a750
 * callees: 0x100a5f30, 0x1017a280, 0x101a2500, 0x101a2534
 */

void __thiscall CProgressBar::SetProgressPic(int this, int a2, struct tagRECT *a3)
{
  _BYTE *v4; // eax
  int v5; // eax
  bool v6; // cf
  int v7; // eax
  unsigned int v8; // edi
  _BYTE v9[28]; // [esp+8h] [ebp-28h] BYREF
  int v10; // [esp+2Ch] [ebp-4h]

  if ( *(_DWORD *)(this + 700) )
  {
    operator delete(*(void **)(this + 700));
    *(_DWORD *)(this + 700) = 0;
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
  *(_DWORD *)(this + 700) = v4;
  v5 = sub_1017A280(v9, a2);
  v6 = *(_DWORD *)(v5 + 24) < 8u;
  v10 = 0;
  if ( v6 )
    v7 = v5 + 4;
  else
    v7 = *(_DWORD *)(v5 + 4);
  v8 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 112) + 20))(*(_DWORD *)(this + 112), v7);
  v10 = -1;
  std::wstring::~wstring(v9);
  CREElement::SetTexture(*(CREElement **)(this + 700), v8, a3, 0xFFFFFFFF);
}
