/*
 * func-name: sub_10293CD0
 * func-address: 0x10293cd0
 * callers: 0x100081bb
 * callees: 0x10017c97
 */

int __thiscall sub_10293CD0(int this)
{
  int v1; // ebp
  unsigned int v2; // edi
  int i; // ebx
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  CREScrollBar *v9; // edi
  int result; // eax
  int v11; // eax
  int v12; // eax
  unsigned int v13; // edi
  int v14; // eax
  int v15; // eax
  int v16; // eax
  unsigned int v17; // edi
  int v18; // eax

  v1 = 0;
  v2 = 0;
  for ( i = 0; ; i += 60 )
  {
    v5 = *(_DWORD *)(this + 536);
    if ( !v5 || v2 >= (*(_DWORD *)(this + 540) - v5) / 60 )
      break;
    v6 = *(_DWORD *)(this + 536);
    if ( !v6 || v2 >= (*(_DWORD *)(this + 540) - v6) / 60 )
      _invalid_parameter_noinfo();
    v1 += sub_10017C97(i + *(_DWORD *)(this + 536));
    ++v2;
  }
  v7 = *(_DWORD *)(this + 536);
  if ( v7 && (*(_DWORD *)(this + 540) - v7) / 60 )
  {
    v8 = *(_DWORD *)(this + 536);
    if ( v8 )
      v8 = (*(_DWORD *)(this + 540) - v8) / 60;
    v1 = v1 + 2 * v8 - 2;
  }
  CREScrollBar::SetTrackRange(*(CREScrollBar **)(this + 584), 0, v1);
  v9 = *(CREScrollBar **)(this + 584);
  *((_DWORD *)v9 + 151) = *(_DWORD *)(this + 176) - *(_DWORD *)(this + 168);
  CREScrollBar::Cap(v9);
  CREScrollBar::UpdateThumbRect(v9);
  result = *(_DWORD *)(this + 536);
  if ( result && (result = (*(_DWORD *)(this + 540) - result) / 60) != 0 )
  {
    v11 = *(_DWORD *)(this + 536);
    if ( v11 )
      v12 = (*(_DWORD *)(this + 540) - v11) / 60;
    else
      v12 = 0;
    v13 = v12 - 1;
    v14 = *(_DWORD *)(this + 536);
    if ( !v14 || v13 >= (*(_DWORD *)(this + 540) - v14) / 60 )
      _invalid_parameter_noinfo();
    result = *(_DWORD *)(this + 668) + sub_10017C97(*(_DWORD *)(this + 536) + 60 * v13);
    if ( result > v1 )
    {
      v15 = *(_DWORD *)(this + 536);
      if ( v15 )
        v16 = (*(_DWORD *)(this + 540) - v15) / 60;
      else
        v16 = 0;
      v17 = v16 - 1;
      v18 = *(_DWORD *)(this + 536);
      if ( !v18 || v17 >= (*(_DWORD *)(this + 540) - v18) / 60 )
        _invalid_parameter_noinfo();
      result = sub_10017C97(*(_DWORD *)(this + 536) + 60 * v17);
      *(_DWORD *)(this + 668) = v1 - result;
    }
  }
  else
  {
    *(_DWORD *)(this + 676) = 0;
    *(_DWORD *)(this + 672) = 0;
    *(_DWORD *)(this + 668) = 0;
    *(_DWORD *)(this + 664) = 0;
  }
  return result;
}
