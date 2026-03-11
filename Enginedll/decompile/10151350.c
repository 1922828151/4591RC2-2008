/*
 * func-name: ?SetLastPic@CPaster@@QAEXABV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PAUtagRECT@@@Z
 * func-address: 0x10151350
 * callers: 0x10154f60
 * callees: 0x100b5820, 0x100cdd20, 0x100cdd30, 0x101a2500, 0x101a2534
 */

int __thiscall CPaster::SetLastPic(int this, _DWORD *a2, _DWORD *a3)
{
  _BYTE *v4; // eax
  _DWORD *v5; // edi
  _DWORD *v6; // eax
  struct RETextureNode *Texture; // eax
  int result; // eax
  int v9; // edx
  _DWORD *v10; // eax

  if ( *(_DWORD *)(this + 536) )
  {
    operator delete(*(void **)(this + 536));
    *(_DWORD *)(this + 536) = 0;
  }
  std::wstring::operator=(this + 592, a2);
  if ( a2[5] || (SetRect((LPRECT)(this + 620), 0, 0, 0, 0), a2[5]) )
  {
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
    *(_DWORD *)(this + 536) = v4;
    if ( a2[6] < 8u )
      v5 = a2 + 1;
    else
      v5 = (_DWORD *)a2[1];
    **(_DWORD **)(this + 536) = (*(int (__thiscall **)(_DWORD, _DWORD *))(**(_DWORD **)(this + 112) + 20))(
                                  *(_DWORD *)(this + 112),
                                  v5);
    if ( a3 && sub_100CDD20(a3) && sub_100CDD30((int)a3) )
    {
      v6 = (_DWORD *)(*(_DWORD *)(this + 536) + 12);
      *v6 = *a3;
      v6[1] = a3[1];
      v6[2] = a3[2];
      v6[3] = a3[3];
    }
    else
    {
      Texture = CREDialog::GetTexture(*(CREDialog **)(this + 112), **(_DWORD **)(this + 536));
      if ( Texture )
        SetRect((LPRECT)(*(_DWORD *)(this + 536) + 12), 0, 0, *((_DWORD *)Texture + 131), *((_DWORD *)Texture + 132));
    }
  }
  result = *(_DWORD *)(this + 536);
  if ( result )
  {
    v9 = *(_DWORD *)(result + 12);
    v10 = (_DWORD *)(result + 12);
    *(_DWORD *)(this + 620) = v9;
    *(_DWORD *)(this + 624) = v10[1];
    *(_DWORD *)(this + 628) = v10[2];
    result = v10[3];
    *(_DWORD *)(this + 632) = result;
  }
  return result;
}
