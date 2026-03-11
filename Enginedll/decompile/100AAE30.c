/*
 * func-name: ?HandleMouse@CREScrollBar@@UAE_NIUtagPOINT@@IJ@Z
 * func-address: 0x100aae30
 * callers: none
 * callees: 0x100971c0, 0x100a3c30, 0x100aadd0
 */

char __thiscall CREScrollBar::HandleMouse(CREScrollBar *this, unsigned int a2, POINT pt, unsigned int a4, int a5)
{
  struct Engine *v6; // eax
  int v7; // eax
  int v9; // eax
  int v10; // edi
  int v11; // eax
  int v12; // edx
  int v13; // ecx
  int v14; // ecx
  int v15; // eax
  int v16; // ebx
  int v17; // ecx
  int v18; // edi
  int v19; // eax
  int v20; // edi
  int v21; // edx
  int v22; // ecx
  int v23; // eax
  int v24; // ecx
  int v25; // eax

  switch ( a2 )
  {
    case 0x200u:
      if ( !byte_11240B04 )
        return 0;
      v11 = pt.y - dword_11240B00;
      v12 = pt.y - *((_DWORD *)this + 147) - dword_11240B00;
      v13 = *((_DWORD *)this + 143);
      *((_DWORD *)this + 149) += v12;
      *((_DWORD *)this + 147) = v11;
      if ( v11 >= v13 )
      {
        v14 = *((_DWORD *)this + 149);
        v15 = *((_DWORD *)this + 145);
        if ( v14 > v15 )
          OffsetRect((LPRECT)((char *)this + 584), 0, v15 - v14);
      }
      else
      {
        OffsetRect((LPRECT)((char *)this + 584), 0, v13 - v11);
      }
      v16 = *((_DWORD *)this + 152);
      if ( *((_DWORD *)this + 153) - *((_DWORD *)this + 151) == v16 )
        return 0;
      v17 = *((_DWORD *)this + 145) + *((_DWORD *)this + 147) - *((_DWORD *)this + 149) - *((_DWORD *)this + 143);
      v18 = *((_DWORD *)this + 153) - *((_DWORD *)this + 151) - v16;
      *((_DWORD *)this + 150) = v16 + v18 * (*((_DWORD *)this + 147) + v17 / (2 * v18) - *((_DWORD *)this + 143)) / v17;
      return 1;
    case 0x201u:
    case 0x203u:
      v6 = Engine::Instance();
      SetCapture(*((HWND *)v6 + 35));
      *((_BYTE *)this + 533) = 1;
      if ( PtInRect((const RECT *)((char *)this + 536), pt) )
      {
        v7 = *((_DWORD *)this + 150);
        if ( v7 > *((_DWORD *)this + 152) )
          *((_DWORD *)this + 150) = v7 - 1;
LABEL_5:
        CREScrollBar::UpdateThumbRect(this);
        return 1;
      }
      if ( PtInRect((const RECT *)((char *)this + 552), pt) )
      {
        v9 = *((_DWORD *)this + 150);
        if ( v9 + *((_DWORD *)this + 151) < *((_DWORD *)this + 153) )
          *((_DWORD *)this + 150) = v9 + 1;
        goto LABEL_5;
      }
      if ( PtInRect((const RECT *)((char *)this + 584), pt) )
      {
        v10 = pt.y - *((_DWORD *)this + 147);
        byte_11240B04 = 1;
        dword_11240B00 = v10;
        return 1;
      }
      else
      {
        if ( *((_DWORD *)this + 146) > pt.x || *((_DWORD *)this + 148) <= pt.x || !*((_BYTE *)this + 532) )
          return 0;
        if ( *((_DWORD *)this + 147) <= pt.y || *((_DWORD *)this + 143) > pt.y )
        {
          if ( *((_DWORD *)this + 149) > pt.y || *((_DWORD *)this + 145) <= pt.y )
            return 0;
          CREScrollBar::Scroll(this, *((_DWORD *)this + 151) - 1);
          return 1;
        }
        else
        {
          CREScrollBar::Scroll(this, 1 - *((_DWORD *)this + 151));
          return 1;
        }
      }
    case 0x202u:
      byte_11240B04 = 0;
      *((_BYTE *)this + 533) = 0;
      ReleaseCapture();
      CREScrollBar::UpdateThumbRect(this);
      return 0;
    case 0x20Au:
      v19 = *((_DWORD *)this + 150);
      v20 = SHIWORD(a4) / 120;
      if ( v20 < 0 )
      {
        v21 = *((_DWORD *)this + 151);
        v22 = *((_DWORD *)this + 153);
        if ( v21 + v19 >= v22 )
          return 1;
        v23 = v19 - v20;
        *((_DWORD *)this + 150) = v23;
        if ( v21 + v23 > v22 )
          *((_DWORD *)this + 150) = v22 - v21;
LABEL_34:
        CREScrollBar::UpdateThumbRect(this);
        return 1;
      }
      v24 = *((_DWORD *)this + 152);
      if ( v19 <= v24 )
        return 1;
      v25 = v19 - v20;
      *((_DWORD *)this + 150) = v25;
      if ( v25 >= v24 )
        goto LABEL_34;
      *((_DWORD *)this + 150) = v24;
      CREScrollBar::UpdateThumbRect(this);
      return 1;
    default:
      return 0;
  }
}
