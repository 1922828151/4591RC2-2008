/*
 * func-name: ?adjustPage@CMultiLineEB@@IAEXXZ
 * func-address: 0x100ae340
 * callers: 0x100c5fd0, 0x100c8fd0
 * callees: 0x1006a3a0, 0x100ab130
 */

void __thiscall CMultiLineEB::adjustPage(CMultiLineEB *this)
{
  int v2; // eax
  int v3; // ecx
  int v4; // eax
  int v5; // eax
  unsigned int v6; // edx
  int v7; // ecx
  int v8; // eax
  int v9; // eax
  int v10; // ecx
  int v11; // eax

  v2 = *((_DWORD *)this + 144) - *((_DWORD *)this + 142);
  v3 = *((_DWORD *)this + 204);
  v4 = v2 / *((_DWORD *)this + 203);
  if ( v3 <= *((_DWORD *)this + 208) )
  {
    if ( v3 < *((_DWORD *)this + 207) )
    {
      v6 = v3 + v4 - 1;
      *((_DWORD *)this + 207) = v3;
      *((_DWORD *)this + 208) = v6;
      v7 = *((_DWORD *)this + 224);
      v8 = v7 ? (*((_DWORD *)this + 225) - v7) >> 2 : 0;
      if ( v6 > v8 - 1 )
      {
        if ( v7 )
          v9 = (*((_DWORD *)this + 225) - v7) >> 2;
        else
          v9 = 0;
        *((_DWORD *)this + 208) = v9 - 1;
      }
    }
  }
  else
  {
    *((_DWORD *)this + 208) = v3;
    v5 = v3 - v4 + 1;
    *((_DWORD *)this + 207) = v5;
    if ( v5 < 0 )
      *((_DWORD *)this + 207) = 0;
  }
  v10 = *((_DWORD *)this + 224);
  if ( v10 )
    v11 = (*((_DWORD *)this + 225) - v10) >> 2;
  else
    v11 = 0;
  CREScrollBar::SetTrackRange(*((CREScrollBar **)this + 198), 0, v11);
  CREScrollBar::SetTrackPos(*((CREScrollBar **)this + 198), *((_DWORD *)this + 207));
}
