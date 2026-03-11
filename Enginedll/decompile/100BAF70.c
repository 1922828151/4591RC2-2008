/*
 * func-name: ?SetBackGroundPic@CREDialog@@QAEXABV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PAUtagRECT@@@Z
 * func-address: 0x100baf70
 * callers: 0x100c2130, 0x1014c910, 0x1014cc50, 0x1014cfa0
 * callees: 0x100a5d90, 0x100b5280, 0x101a2500, 0x101a2534
 */

void __thiscall CREDialog::SetBackGroundPic(char *this, int a2, _DWORD *a3)
{
  char *v4; // ebp
  _DWORD *v5; // edi
  int v6; // eax
  void *v7; // eax
  bool v8; // zf
  _BYTE *v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // ebp
  struct CREDialogResourceManager *v13; // eax
  int v14; // ebx
  _DWORD *v15; // esi
  int v16; // ecx
  int v17; // [esp+14h] [ebp+4h]

  v4 = this + 104;
  std::wstring::operator=(this + 104, a2);
  v5 = this + 132;
  if ( a3 )
  {
    *v5 = *a3;
    *((_DWORD *)this + 34) = a3[1];
    *((_DWORD *)this + 35) = a3[2];
    *((_DWORD *)this + 36) = a3[3];
  }
  else
  {
    SetRect((LPRECT)(this + 132), 0, 0, 0, 0);
  }
  v6 = a2;
  if ( *(_DWORD *)(a2 + 20) )
  {
    v8 = *((_DWORD *)this + 37) == 0;
    this[100] = 1;
    if ( v8 )
    {
      v9 = operator new(0xC4u);
      if ( v9 )
      {
        v9[28] = 0;
        *(_DWORD *)v9 = -1;
      }
      else
      {
        v9 = 0;
      }
      *((_DWORD *)this + 37) = v9;
      v6 = a2;
    }
    if ( *(_DWORD *)(v6 + 24) < 8u )
      v10 = v6 + 4;
    else
      v10 = *(_DWORD *)(v6 + 4);
    v11 = (*(int (__thiscall **)(char *, int))(*(_DWORD *)this + 20))(this, v10);
    v12 = *((_DWORD *)this + 37);
    v17 = v11;
    *(_DWORD *)v12 = v11;
    if ( a3 )
    {
      *(_DWORD *)(v12 + 12) = *a3;
      *(_DWORD *)(v12 + 16) = a3[1];
      *(_DWORD *)(v12 + 20) = a3[2];
      *(_DWORD *)(v12 + 24) = a3[3];
    }
    else
    {
      SetRectEmpty((LPRECT)(v12 + 12));
    }
    REBlendColor::Init((REBlendColor *)(v12 + 36), 0xFFFFFFFF, 0xC8808080, 0);
    if ( !a3 || !*v5 && !*((_DWORD *)this + 35) && !*((_DWORD *)this + 34) && !*((_DWORD *)this + 36) )
    {
      v13 = REGetGlobalDialogResourceManager();
      if ( v13 )
      {
        v14 = *(_DWORD *)(*((_DWORD *)this + 185) + 4 * v17);
        v13 = *(struct CREDialogResourceManager **)(*((_DWORD *)REGetGlobalDialogResourceManager() + 2) + 4 * v14);
      }
      SetRect((LPRECT)(*((_DWORD *)this + 37) + 12), 0, 0, *((_DWORD *)v13 + 131), *((_DWORD *)v13 + 132));
      v15 = (_DWORD *)*((_DWORD *)this + 37);
      v16 = v15[3];
      v15 += 3;
      *v5 = v16;
      v5[1] = v15[1];
      v5[2] = v15[2];
      v5[3] = v15[3];
    }
  }
  else
  {
    v7 = (void *)*((_DWORD *)this + 37);
    this[100] = 0;
    if ( v7 )
    {
      operator delete(v7);
      *((_DWORD *)this + 37) = 0;
    }
    SetRect((LPRECT)(this + 132), 0, 0, 0, 0);
    std::wstring::clear(v4);
  }
}
