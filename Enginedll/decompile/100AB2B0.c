/*
 * func-name: ?HandleMouse@CREHScrollBar@@UAE_NIUtagPOINT@@IJ@Z
 * func-address: 0x100ab2b0
 * callers: none
 * callees: 0x100971c0, 0x100a3d90, 0x100ab250
 */

char __thiscall CREHScrollBar::HandleMouse(CREHScrollBar *this, unsigned int a2, POINT pt, unsigned int a4, int a5)
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
  LONG *v17; // [esp+14h] [ebp+4h]

  switch ( a2 )
  {
    case 0x200u:
      if ( !byte_11240B0C )
        return 0;
      v11 = pt.x - dword_11240B08;
      v12 = pt.x - *((_DWORD *)this + 146) - dword_11240B08;
      v13 = *((_DWORD *)this + 142);
      *((_DWORD *)this + 148) += v12;
      *((_DWORD *)this + 146) = v11;
      if ( v11 >= v13 )
      {
        v14 = *((_DWORD *)this + 148);
        v15 = *((_DWORD *)this + 144);
        if ( v14 > v15 )
          OffsetRect((LPRECT)((char *)this + 584), v15 - v14, 0);
      }
      else
      {
        OffsetRect((LPRECT)((char *)this + 584), v13 - v11, 0);
      }
      v16 = *((_DWORD *)this + 153) - *((_DWORD *)this + 151) - *((_DWORD *)this + 152);
      *((_DWORD *)this + 150) = *((_DWORD *)this + 152)
                              + v16
                              * (*((_DWORD *)this + 146)
                               + (*((_DWORD *)this + 146)
                                + *((_DWORD *)this + 144)
                                - *((_DWORD *)this + 148)
                                - *((_DWORD *)this + 142))
                               / (2
                                * v16)
                               - *((_DWORD *)this + 142))
                              / (*((_DWORD *)this + 146)
                               + *((_DWORD *)this + 144)
                               - *((_DWORD *)this + 148)
                               - *((_DWORD *)this + 142));
      return 1;
    case 0x201u:
    case 0x203u:
      v6 = Engine::Instance();
      SetCapture(*((HWND *)v6 + 35));
      if ( PtInRect((const RECT *)((char *)this + 536), pt) )
      {
        v7 = *((_DWORD *)this + 150);
        if ( v7 > *((_DWORD *)this + 152) )
          *((_DWORD *)this + 150) = v7 - 1;
LABEL_5:
        CREHScrollBar::UpdateThumbRect(this);
        return 1;
      }
      if ( PtInRect((const RECT *)((char *)this + 552), pt) )
      {
        v9 = *((_DWORD *)this + 150);
        if ( v9 + *((_DWORD *)this + 151) < *((_DWORD *)this + 153) )
          *((_DWORD *)this + 150) = v9 + 1;
        goto LABEL_5;
      }
      v17 = (LONG *)((char *)this + 584);
      if ( PtInRect((const RECT *)((char *)this + 584), pt) )
      {
        v10 = pt.x - *v17;
        byte_11240B0C = 1;
        dword_11240B08 = v10;
        return 1;
      }
      else
      {
        if ( *((_DWORD *)this + 143) > pt.y || *((_DWORD *)this + 145) <= pt.y || !*((_BYTE *)this + 532) )
          return 0;
        if ( *v17 <= pt.x || *((_DWORD *)this + 142) > pt.y )
        {
          if ( *((_DWORD *)this + 148) > pt.x || *((_DWORD *)this + 144) <= pt.x )
            return 0;
          CREHScrollBar::Scroll(this, *((_DWORD *)this + 151) - 1);
          return 1;
        }
        else
        {
          CREHScrollBar::Scroll(this, 1 - *((_DWORD *)this + 151));
          return 1;
        }
      }
    case 0x202u:
      byte_11240B0C = 0;
      ReleaseCapture();
      CREHScrollBar::UpdateThumbRect(this);
      return 0;
    default:
      return 0;
  }
}
