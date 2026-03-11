/*
 * func-name: ?ApplyFontProperties@CREButton@@MAEXXZ
 * func-address: 0x100bbf70
 * callers: none
 * callees: 0x100b5280
 */

void __thiscall CREButton::ApplyFontProperties(CREButton *this)
{
  _DWORD *v2; // eax
  int v3; // edx
  _DWORD *v4; // ebp
  int v5; // edi
  int v6; // esi
  int v7; // esi
  int v8; // esi
  int v9; // eax

  v2 = (_DWORD *)**((_DWORD **)this + 30);
  v3 = v2[2];
  v2[1] = *((_DWORD *)this + 140);
  v4 = (_DWORD *)((char *)this + 564);
  qmemcpy(v2 + 29, (char *)this + 564, 0x50u);
  v5 = *((_DWORD *)this + 28);
  *((_DWORD *)this + 173) = v3;
  v6 = v2[1];
  if ( REGetGlobalDialogResourceManager() )
  {
    v7 = *(_DWORD *)(*(_DWORD *)(v5 + 752) + 4 * v6);
    v8 = *(_DWORD *)(*((_DWORD *)REGetGlobalDialogResourceManager() + 5) + 4 * v7);
    if ( v8 )
    {
      std::wstring::operator=((char *)this + 656, v8);
      *((_DWORD *)this + 171) = *(_DWORD *)(v8 + 524);
      *((_BYTE *)this + 688) = *(_DWORD *)(v8 + 532) == 700;
    }
  }
  v9 = *(_DWORD *)(*((_DWORD *)this + 30) + 4);
  *(_DWORD *)(v9 + 4) = *((_DWORD *)this + 140);
  qmemcpy((void *)(v9 + 116), (char *)this + 696, 0x50u);
  *((_DWORD *)this + 163) = *v4;
}
