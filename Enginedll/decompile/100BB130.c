/*
 * func-name: ?SetCustomPic@CREControl@@QAEXABV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AAUtagRECT@@H@Z
 * func-address: 0x100bb130
 * callers: 0x100bc020, 0x1014a750, 0x1015ac30
 * callees: 0x100a5d90, 0x100b5820, 0x101a2500, 0x101a2534
 */

void __thiscall CREControl::SetCustomPic(int this, int a2, int *a3, unsigned int a4)
{
  char *v5; // eax
  char *v6; // esi
  int v7; // eax
  _BYTE *v8; // eax
  struct tagRECT *v9; // ebx
  struct RETextureNode *Texture; // eax
  int v11; // eax
  _DWORD *v12; // ecx
  char *v13; // [esp+10h] [ebp-8h]

  v5 = (char *)operator new(0xC4u);
  if ( v5 )
  {
    v6 = v5;
    v5[28] = 0;
    *(_DWORD *)v5 = -1;
    v13 = v5;
  }
  else
  {
    v13 = 0;
    v6 = 0;
  }
  if ( *(_DWORD *)(a2 + 24) < 8u )
    v7 = a2 + 4;
  else
    v7 = *(_DWORD *)(a2 + 4);
  *(_DWORD *)v6 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 112) + 20))(*(_DWORD *)(this + 112), v7);
  if ( a3 )
  {
    *((_DWORD *)v6 + 3) = *a3;
    *((_DWORD *)v6 + 4) = a3[1];
    *((_DWORD *)v6 + 5) = a3[2];
    *((_DWORD *)v6 + 6) = a3[3];
  }
  else
  {
    SetRectEmpty((LPRECT)(v6 + 12));
  }
  REBlendColor::Init((REBlendColor *)(v6 + 36), 0xFFFFFFFF, 0xC8808080, 0);
  v8 = *(_BYTE **)(this + 4 * a4 + 488);
  if ( !v8 )
  {
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
    *(_DWORD *)(this + 4 * a4 + 488) = v8;
  }
  qmemcpy(v8, v6, 0xC4u);
  if ( a4 <= 6 )
  {
    std::wstring::operator=(this + 28 * a4 + 180, a2);
    v9 = (struct tagRECT *)(16 * a4 + this + 376);
    SetRect(v9, *a3, a3[1], a3[2], a3[3]);
    if ( !*a3 && !a3[2] && !a3[1] && !a3[3] )
    {
      Texture = CREDialog::GetTexture(*(CREDialog **)(this + 112), *(_DWORD *)v13);
      SetRect((LPRECT)(v13 + 12), 0, 0, *((_DWORD *)Texture + 131), *((_DWORD *)Texture + 132));
      v9->left = *((_DWORD *)v13 + 3);
      *(_DWORD *)(16 * a4 + this + 380) = *((_DWORD *)v13 + 4);
      *(_DWORD *)(16 * a4 + this + 384) = *((_DWORD *)v13 + 5);
      *(_DWORD *)(16 * a4 + this + 388) = *((_DWORD *)v13 + 6);
    }
  }
  *(_BYTE *)(this + 516) = 0;
  v11 = 0;
  v12 = (_DWORD *)(this + 200);
  while ( !*v12 )
  {
    ++v11;
    v12 += 7;
    if ( v11 >= 7 )
      goto LABEL_26;
  }
  *(_BYTE *)(this + 516) = 1;
LABEL_26:
  operator delete(v13);
}
