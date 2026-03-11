/*
 * func-name: sub_102953D0
 * func-address: 0x102953d0
 * callers: 0x1000f056
 * callees: 0x1001402e
 */

void __thiscall sub_102953D0(_DWORD *this)
{
  int v2; // edi
  unsigned int v3; // ebx
  unsigned int v4; // eax
  bool v5; // cc
  CREScrollBar *v6; // ecx
  CREScrollBar *v7; // edi
  unsigned int v8; // [esp+10h] [ebp-8h] BYREF

  v2 = (int)(this + 133);
  this[168] = 0;
  this[166] = 0;
  this[167] = 0;
  this[169] = 0;
  v3 = this[135];
  if ( this[134] > v3 )
    _invalid_parameter_noinfo();
  v4 = *(_DWORD *)(v2 + 4);
  v5 = v4 <= *(_DWORD *)(v2 + 8);
  v8 = v4;
  if ( !v5 )
  {
    _invalid_parameter_noinfo();
    v4 = v8;
  }
  sub_1001402E((int)&v8, v2, v4, v2, v3);
  v6 = (CREScrollBar *)this[146];
  if ( v6 )
  {
    CREScrollBar::SetTrackRange(v6, 0, 0);
    v7 = (CREScrollBar *)this[146];
    *((_DWORD *)v7 + 151) = 0;
    CREScrollBar::Cap(v7);
    CREScrollBar::UpdateThumbRect(v7);
    this[170] = 0;
  }
}
