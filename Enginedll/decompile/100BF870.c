/*
 * func-name: ?SetBackGround@CPictureLabel@@QAE_NV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PAUtagRECT@@@Z
 * func-address: 0x100bf870
 * callers: none
 * callees: 0x100a5d90, 0x100b5280
 */

char __thiscall CPictureLabel::SetBackGround(
        int this,
        char a2,
        _DWORD *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        unsigned int a8,
        _DWORD *a9)
{
  _DWORD *v10; // eax
  int v11; // eax
  _DWORD *v12; // edi
  bool v13; // zf
  int v14; // edi
  int v15; // ebx
  int v16; // edi
  int v17; // eax

  if ( a7 )
  {
    v10 = a3;
    if ( a8 < 8 )
      v10 = &a3;
    v11 = (*(int (__thiscall **)(_DWORD, _DWORD *))(**(_DWORD **)(this + 112) + 20))(*(_DWORD *)(this + 112), v10);
    v12 = a9;
    v13 = a9 == 0;
    *(_DWORD *)(this + 576) = v11;
    if ( v13 )
    {
      SetRectEmpty((LPRECT)(this + 588));
    }
    else
    {
      *(_DWORD *)(this + 588) = *v12;
      *(_DWORD *)(this + 592) = v12[1];
      *(_DWORD *)(this + 596) = v12[2];
      *(_DWORD *)(this + 600) = v12[3];
    }
    REBlendColor::Init((REBlendColor *)(this + 612), 0xFFFFFFFF, 0xC8808080, 0);
    if ( !v12 )
    {
      v14 = *(_DWORD *)(this + 576);
      v15 = *(_DWORD *)(this + 112);
      if ( REGetGlobalDialogResourceManager() )
      {
        v16 = *(_DWORD *)(*(_DWORD *)(v15 + 740) + 4 * v14);
        v17 = *(_DWORD *)(*((_DWORD *)REGetGlobalDialogResourceManager() + 2) + 4 * v16);
        if ( v17 )
        {
          *(_DWORD *)(this + 596) = *(_DWORD *)(v17 + 524);
          *(_DWORD *)(this + 600) = *(_DWORD *)(v17 + 528);
        }
      }
    }
  }
  else
  {
    *(_DWORD *)(this + 576) = -1;
    SetRectEmpty((LPRECT)(this + 588));
    REBlendColor::Init((REBlendColor *)(this + 612), 0xFFFFFFFF, 0xC8808080, 0);
  }
  std::wstring::~wstring(&a2);
  return 1;
}
