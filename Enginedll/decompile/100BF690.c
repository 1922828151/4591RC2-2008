/*
 * func-name: ?ChangeTexture@CPictureLabel@@QAE_NV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PAUtagRECT@@@Z
 * func-address: 0x100bf690
 * callers: 0x100bfdc0, 0x100c89e0, 0x1014a750, 0x1015ac30
 * callees: 0x100a5d90, 0x100b5280, 0x100b5710
 */

char __thiscall CPictureLabel::ChangeTexture(
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
  signed int v10; // eax
  _DWORD *v11; // edi
  _DWORD *v12; // eax
  int v13; // edi
  int v14; // ebx
  int v15; // edi
  int v16; // eax
  int v17; // eax

  v10 = *(_DWORD *)(this + 788);
  if ( v10 != -1 )
  {
    CREDialog::RemoveTexture(*(CREDialog **)(this + 112), v10);
    *(_DWORD *)(this + 788) = -1;
  }
  if ( a7 )
  {
    v11 = a9;
    if ( a9 && !*a9 && !a9[3] && !a9[2] && !a9[1] )
      v11 = 0;
    v12 = a3;
    if ( a8 < 8 )
      v12 = &a3;
    *(_DWORD *)(this + 788) = (*(int (__thiscall **)(_DWORD, _DWORD *))(**(_DWORD **)(this + 112) + 20))(
                                *(_DWORD *)(this + 112),
                                v12);
    if ( v11 )
    {
      *(_DWORD *)(this + 800) = *v11;
      *(_DWORD *)(this + 804) = v11[1];
      *(_DWORD *)(this + 808) = v11[2];
      *(_DWORD *)(this + 812) = v11[3];
    }
    else
    {
      SetRectEmpty((LPRECT)(this + 800));
    }
    REBlendColor::Init((REBlendColor *)(this + 824), 0xFFFFFFFF, 0xC8808080, 0);
    *(_DWORD *)(this + 564) = -1;
    std::wstring::operator=(this + 984, &a2);
    if ( v11 )
    {
      *(_DWORD *)(this + 532) = *v11;
      *(_DWORD *)(this + 536) = v11[1];
      *(_DWORD *)(this + 540) = v11[2];
      *(_DWORD *)(this + 544) = v11[3];
    }
    else
    {
      v13 = *(_DWORD *)(this + 788);
      v14 = *(_DWORD *)(this + 112);
      if ( REGetGlobalDialogResourceManager() )
      {
        v15 = *(_DWORD *)(*(_DWORD *)(v14 + 740) + 4 * v13);
        v16 = *(_DWORD *)(*((_DWORD *)REGetGlobalDialogResourceManager() + 2) + 4 * v15);
        if ( v16 )
        {
          *(_DWORD *)(this + 808) = *(_DWORD *)(v16 + 524);
          *(_DWORD *)(this + 812) = *(_DWORD *)(v16 + 528);
          *(_DWORD *)(this + 532) = *(_DWORD *)(this + 800);
          *(_DWORD *)(this + 536) = *(_DWORD *)(this + 804);
          v17 = *(_DWORD *)(this + 812);
          *(_DWORD *)(this + 540) = *(_DWORD *)(this + 808);
          *(_DWORD *)(this + 544) = v17;
        }
      }
    }
  }
  else
  {
    *(_DWORD *)(this + 788) = -1;
    SetRectEmpty((LPRECT)(this + 800));
    REBlendColor::Init((REBlendColor *)(this + 824), 0xFFFFFFFF, 0xC8808080, 0);
    std::wstring::clear(this + 984);
  }
  std::wstring::~wstring(&a2);
  return 1;
}
