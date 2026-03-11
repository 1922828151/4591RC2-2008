/*
 * func-name: sub_10294C20
 * func-address: 0x10294c20
 * callers: 0x10017f2b
 * callees: 0x10011045
 */

int __thiscall sub_10294C20(int this)
{
  int v1; // ebx
  int v2; // ebp
  unsigned int i; // edi
  int v5; // eax
  int v6; // eax
  int v7; // eax
  CREScrollBar *v8; // edi
  int result; // eax
  int v10; // [esp+10h] [ebp-4h] BYREF

  v1 = 0;
  v2 = 0;
  v10 = 0;
  for ( i = 0; ; ++i )
  {
    v5 = *(_DWORD *)(this + 536);
    if ( !v5 || i >= (*(_DWORD *)(this + 540) - v5) / 60 )
      break;
    v6 = *(_DWORD *)(this + 536);
    v2 = v10;
    if ( !v6 || i >= (*(_DWORD *)(this + 540) - v6) / 60 )
      _invalid_parameter_noinfo();
    sub_10011045((int)&v10, v1 + *(_DWORD *)(this + 536));
    v7 = *(_DWORD *)(this + 536);
    if ( v7 )
      v7 = (*(_DWORD *)(this + 540) - v7) / 60;
    if ( i != v7 - 1 )
      v10 += 5;
    v1 += 60;
  }
  CREScrollBar::SetTrackRange(*(CREScrollBar **)(this + 584), 0, v10 + 4);
  v8 = *(CREScrollBar **)(this + 584);
  *((_DWORD *)v8 + 151) = *(_DWORD *)(this + 176) - *(_DWORD *)(this + 168);
  CREScrollBar::Cap(v8);
  CREScrollBar::UpdateThumbRect(v8);
  result = *(_DWORD *)(this + 536);
  if ( result && (result = (*(_DWORD *)(this + 540) - result) / 60) != 0 )
  {
    if ( *(_DWORD *)(this + 668) > v2 )
      *(_DWORD *)(this + 668) = v2;
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
