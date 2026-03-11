/*
 * func-name: ?HandleMouse@CRESlider@@UAE_NIUtagPOINT@@IJ@Z
 * func-address: 0x100aaac0
 * callers: none
 * callees: 0x100971c0, 0x100a3050, 0x100a3100, 0x100a3b60, 0x100a3bc0
 */

bool __thiscall CRESlider::HandleMouse(CRESlider *this, unsigned int a2, POINT pt, unsigned int a4, int a5)
{
  struct Engine *v6; // eax
  int v7; // ecx
  int v8; // ecx
  bool v9; // zf
  bool result; // al
  LONG v11; // eax
  int v12; // ecx
  int v13; // eax
  void (__stdcall *v14)(int, int, _DWORD, CRESlider *, _DWORD, _DWORD); // ecx
  int v15; // eax

  if ( !*((_BYTE *)this + 156) || !*((_BYTE *)this + 90) || *((_BYTE *)this + 89) )
    return 0;
  switch ( a2 )
  {
    case 0x200u:
      if ( !*((_BYTE *)this + 560) )
        goto LABEL_23;
      v15 = CRESlider::ValueFromPos(this, pt.x + *((_DWORD *)this + 24) + *((_DWORD *)this + 138));
      CRESlider::SetValueInternal(this, v15, 1);
      result = 1;
      break;
    case 0x201u:
    case 0x203u:
      if ( PtInRect((const RECT *)((char *)this + 564), pt) )
      {
        *((_BYTE *)this + 560) = 1;
        v6 = Engine::Instance();
        SetCapture(*((HWND *)v6 + 35));
        v7 = *((_DWORD *)this + 18);
        if ( v7 )
          (*(void (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)v7 + 36))(0, *((float *)this + 40));
        v8 = *((_DWORD *)this + 139) - pt.x;
        v9 = *((_BYTE *)this + 92) == 0;
        *((_DWORD *)this + 137) = pt.x;
        *((_DWORD *)this + 138) = v8;
        if ( !v9 )
          goto LABEL_15;
        CREDialog::RequestFocus(*((CREDialog **)this + 28), this);
        result = 1;
      }
      else
      {
        if ( !PtInRect((const RECT *)((char *)this + 164), pt) )
          goto LABEL_23;
        v11 = *((_DWORD *)this + 24) + *((_DWORD *)this + 139);
        if ( pt.x <= v11 )
        {
          if ( pt.x >= v11 )
            goto LABEL_23;
          CRESlider::SetValueInternal(this, *((_DWORD *)this + 134) - 1, 1);
          goto LABEL_15;
        }
        CRESlider::SetValueInternal(this, *((_DWORD *)this + 134) + 1, 1);
        result = 1;
      }
      break;
    case 0x202u:
      if ( !*((_BYTE *)this + 560) )
        goto LABEL_23;
      *((_BYTE *)this + 560) = 0;
      ReleaseCapture();
      CREDialog::ClearFocus();
      v12 = *((_DWORD *)this + 19);
      if ( v12 )
        (*(void (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)v12 + 36))(0, *((float *)this + 40));
      v13 = *((_DWORD *)this + 28);
      v14 = *(void (__stdcall **)(int, int, _DWORD, CRESlider *, _DWORD, _DWORD))(v13 + 736);
      if ( v14 )
      {
        v14(v13, 1281, *((_DWORD *)this + 34), this, 0, 0);
        result = 1;
      }
      else
      {
LABEL_15:
        result = 1;
      }
      break;
    default:
LABEL_23:
      result = 0;
      break;
  }
  return result;
}
